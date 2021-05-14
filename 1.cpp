Git 全局设置:
 
git config --global user.name "ASxx" 
git config --global user.email "123456789@qq.com"
 
创建 git 仓库:
 
mkdir wap // 项目在本地的路径
cd wap
git init 
touch README.md 
git add README.md 
git commit -m "first commit" 
git remote add origin https://github.com/MaosenDing/vscode.git  // 远程仓库地址
git push -u origin master
 
 
 
已有项目：
 
cd existing_git_repo
git remote add origin https://github.com/MaosenDing/vscode.git
git push -u origin master