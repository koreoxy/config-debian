# My Debian Config file and installation

## Install Sudo and Add User

1. Root

```vim
su -
```

2. Install Sudo

```vim
apt install sudo
```

3. Add User

```vim
vim /etc/sudoers
```

4. Edit file Sudoers

```vim
koreoxy ALL=(ALL:ALL) ALL
```

## Install Xorg

```vim
sudo apt install xorg
sudo apt install xorg-xinit
```

### Install Extra Package

```vim
sudo apt install build-essential libx11-dev libxinerama-dev libxft-dev
```

## Install Dwm Window Manager

```vim
git clone https://git.suckless.org/dwm
```

</br>
<hr>

</br>

## Install Font

### Font Hack

```vim
sudo apt install fonts-hack-ttf
```

### Font Baekmuk

```vim
fonts-baekmuk
```

### Font JetBrains

```vim
wget -P ~/.local/share/fonts https://github.com/ryanoasis/nerd-fonts/releases/download/v3.0.2/JetBrainsMono.zip \
&& cd ~/.local/share/fonts \
&& unzip JetBrainsMono.zip \
&& rm JetBrainsMono.zip \
&& fc-cache -fv
```

### Font Awesome

```vim
fonts-font-awesome
```

</br>
<hr>

</br>

## Install Xampp

1. Download xampp on this link https://www.apachefriends.org/download.html

2. Cd Downloads

3. Executable xampp installer

```vim
chmod 755 xampp-linux-x64-7.2.10-0-installer.run
```

4. launch the setup wizard

```vim
sudo ./package-name
```

5. Start Xampp (Option: start, stop, restart)

```vim
/opt/lampp/xampp start
```

6. Access phpmyadmin

```vim
http://localhost/phpmyadmin/
```

### Install php mysql

```vim
sudo apt-get install php8.2-mysqli
```

</br>
<hr>

</br>

## Install Composer

1. Install the required packages.

```vim
sudo apt install wget php-cli php-zip unzip
```

2. Download the composer installer file

```vim
wget -O composer-setup.php https://getcomposer.org/installer
```

3. To install Composer globally inside the /usr/local/bin directory by running the following command.

```vim
php composer-setup.php --install-dir=/usr/local/bin --filename=composer
```

4. If a new Composer version is available, update the package by running the following command.

```vim
composer self-update
```

5. Check Version

```vim
composer -v
```

### Install Extension PHP

```vim
sudo apt-get install php-xml
```

</br>
<hr>

</br>

## Install Audio

1. Install pipewire

```vim
sudo apt install pipewire pipewire-pulse
```

2. Install pavucontrol

```vim
sudo apt install pavucontrol
```
