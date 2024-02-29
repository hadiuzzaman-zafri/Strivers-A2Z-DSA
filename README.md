#To push code to github from vsCode with git
Generate ssh key-gen
Configure config file
Create repo in github
Vs code command


#Steps to follow
ssh-keygen -t rsa -b 4096 -c “email@example.com”
give the name of the key ex. gitkey
ls | grep gitkey
cat gitkey.pub
pbcopy < ~/.ssh/gitkey.pub
add the key to github
run the necessary command to set the ssh key to mac
edit the config
Host *
  AddKeysToAgent yes
  UseKeychain yes
  IdentityFile ~/.ssh/id_rsa
Host github.com
  Hostname ssh.github.com
  Port 443
** if there is no cofig file create one with touch ~/.ssh/config




add the ssh file to the ssh agent ssh-add -k ~/.ssh/<key name that you created>
create a repo in github
cd to the folder in your computer that you want to push
git init
git status
git add .
git commit -m “just kidding” -m “first time setting git is quite hard”
git remote add origin <link of the repo>
git remote -v
git branch -m main
git push -u origin main


#After setting up common command for push

git status
git add .
git commit -m “someting”
git push
