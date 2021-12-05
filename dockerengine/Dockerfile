FROM ubuntu:18.04 

RUN apt-get update && apt-get install -y \
    vim \
    libgomp1 \
    libprotobuf-dev \
    protobuf-compiler \
    build-essential \
    zip \
    wget \
    gcc-5 \
    g++-5 \
    && rm -rf /var/lib/apt/lists/*

ADD cmake-3.18.5-Linux-x86_64 /opt/cmake-3.18.5-Linux-x86_64
ADD opencv-mobile-3.4.15 /opt/opencv-mobile-3.4.15/
ADD jdk1.8.0_151 /opt/jdk1.8.0_151
