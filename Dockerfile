FROM ubuntu 
LABEL maintainer="Erokhin Vladimir vova.eroxin@gmail.com" 
RUN apt-get update && apt-get install -y g++ 
WORKDIR /lab4 
COPY /prog . 
