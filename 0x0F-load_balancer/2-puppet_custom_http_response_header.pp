#!/usr/bin/env bash
#task 0 with puppet
exec {'http header':
command  => 'sudo apt-get update
sudo apt-get -y install nginx
sudo sed -i "11i\\\tadd_header X-Served-By $HOSTNAME;" /etc/nginx/nginx.conf
sudo service nginx start',
provider => shell,
}
