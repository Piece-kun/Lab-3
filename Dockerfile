FROM FROM ubuntu:24.04
RUN apt-get update && apt-get install -y libc6=13.0.4-32 
    gdebi-core \
    && rm -rf /var/lib/apt/lists/*

COPY matrix.deb /tmp/matrix.deb

RUN gdebi -n /tmp/matrix.deb

RUN rm -f /tmp/matrix.deb

CMD ["matrix"]
