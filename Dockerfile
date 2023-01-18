# Get the base Ubuntu image from Docker Hub
FROM ubuntu:latest

# Update apps on the base image
RUN apt-get -y update && apt-get install -y

# Install the Clang compiler
RUN apt-get -y install clang

# Copy the current folder which contains C++ source code to the Docker image under /usr/src
COPY . C:\cplusplus\VSCode\hellodocker

# Specify the working directory
WORKDIR C:\cplusplus\VSCode\hellodocker

# Use Clang to compile the Test.cpp source file
RUN clang++ -o Test hellodocker.cpp

# Run the output program from the previous step
CMD ["./Test"]