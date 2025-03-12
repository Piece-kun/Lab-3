FROM ubuntu:latest

RUN apt-get update && apt-get install -y \
    gdebi-core \
    && rm -rf /var/lib/apt/lists/*

COPY matrix.deb /tmp/matrix.deb

RUN gdebi -n /tmp/matrix.deb

RUN rm -f /tmp/matrix.deb

CMD ["matrix"]
