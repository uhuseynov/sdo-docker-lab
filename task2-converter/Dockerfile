# Task 2: this Dockerfile is complete.
# Compare it with your Dockerfile from Task 1 - what changed?

FROM gcc:latest

WORKDIR /app

COPY converter.c .

RUN gcc -o converter converter.c

CMD ["./converter"]
