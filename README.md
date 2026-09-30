# Docker Practice Session

Three small tasks. You will **not** write C code from scratch. You read the code, change a line or two, and run it with Docker.

## Before you start

```
docker --version
docker run hello-world
git --version
```

If any of these fails, ask a TA.

## Get the files

```
git clone <REPO-URL>
cd sdo-docker-lab
```

## Tasks

| Folder | What you do | Time |
|---|---|---|
| `task1-hello` | Fill in 5 blanks in the Dockerfile, build and run | ~15 min |
| `task2-converter` | Run an interactive program (`-it`) and fix one bug | ~20 min |
| `task3-webserver` | Change a message and run a web server (`-p`) | ~20 min |

After each task, save your work with Git:

```
git add .
git commit -m "Task 1 done"
```

## Commands you need

| Command | What it does |
|---|---|
| `docker build -t NAME .` | Build an image called NAME from the Dockerfile in this folder |
| `docker run NAME` | Start a container from the image |
| `docker run -it NAME` | Start it so you can type into it |
| `docker run -p 8000:8080 NAME` | Start it and connect port 8000 on your laptop to port 8080 in the container |
| `docker images` | List your images |
| `docker ps` | List running containers |
| `Ctrl + C` | Stop the running program |
