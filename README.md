FRDM-KL27Z examples/tests for bmptk, hwlib, hwcpp

Lubuntu use 

On windows:
- VMWare player 
- Ubuntu 18.04 LTS - ISO

On Lubuntu command line (Ubuntu icon -> System Tools -> LXTerminal)
- sudo apt-get update
- sudo apt install -y git
- git clone http://github.com/wovo/frdm
- sudo frdm/lubuntu-init

-----------------------------------------------------------------------------

Ubuntu use:
- VMWare player
- Ubuntu 18.04 LTS - ISO
- get stuff:
sudo apt-get update
sudo apt-get install git

-y

sudo add-apt-repository ppa:team-gcc-arm-embedded/ppa
sudo apt-get update
sudo apt-get install gcc-arm-none-eabi

sudo apt-key adv --fetch-keys http://repos.codelite.org/CodeLite.asc
sudo apt-add-repository "deb http://repos.codelite.org/ubuntu/ $(lsb_release -sc) universe"
sudo apt-get update
sudo apt-get install codelite wxcrafter

git clone http://github.com/wovo/bmptk
git clone http://github.com/wovo/hwlib
git clone http://github.com/wovo/hwcpp
git clone http://github.com/wovo/frdm

-----------------------------------------------------------------------------

lubuntu
sudo apt-get install -y git
git clone http://www.github.com/wovo/bmptk
sudo bmptk/tools-lubuntu-install

install make
get hwlib, hwcpp, frdm

