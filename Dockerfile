FROM FROM ubuntu:24.04

WORKDIR /tmp

RUN apt-get update && apt-get install -y gdebi-core

COPY matrix.deb /tmp/matrix.deb

RUN dpkg -l | grep libc6 || true

RUN gdebi -n /tmp/matrix.deb || true

RUN rm -f /tmp/matrix.deb

CMD ["matrix"]
