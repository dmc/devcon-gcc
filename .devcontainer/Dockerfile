FROM ubuntu:24.04

RUN ln -s /usr/share/zoneinfo/Asia/Tokyo /etc/localtime

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    sudo \
    git \
    gcc-multilib \
    gdb \
    cmake \
    file \
    nkf \
    jq

ARG USERNAME=ubuntu
RUN echo "$USERNAME ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers && \
    mkdir -p /workspaces && \
    chown -R $USERNAME:$USERNAME /workspaces

USER $USERNAME
RUN touch /home/$USERNAME/.sudo_as_admin_successful

WORKDIR /workspaces