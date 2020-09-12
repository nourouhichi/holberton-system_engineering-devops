#!/usr/bin/env bash
#task 0 with puppet
exec {'custom gttp header':
command  => 'sudo apt-get update
sudo apt-get install nginx
response.headers['X-Served-By'] = $HOSTNAME
sudo service nginx start',
provider => shell,
}
