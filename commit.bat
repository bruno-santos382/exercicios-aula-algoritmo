@echo off

set /p QuestionNumber="Numero do exercicio? "

git add .
git commit -m "Exercicio %QuestionNumber%" --no-edit --author "bruno.santos382 <bruno.santos382@fatec.sp.gov.br>"

pause