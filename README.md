# Hello World (VSCode + C++)

本專案是為了讓大家可以簡單的使用 VSCode 來開發 C++ 程式，並且可以在 Windows、MacOS、Linux 上執行。
詳細的說明請參考[這篇文章](#)。

## 環境建置

### Windows

```
choco install -y vscode
choco install -y mingw
```

### MacOS

```
brew install --cask visual-studio-code
brew install mingw-w64
```

### Linux

```
sudo apt install -y code
sudo apt install -y mingw-w64
```

## 編譯執行

git clone 本專案後，開啟專案資料夾，並且在終端機輸入以下指令：

```
git submodule init --update
code .
```

接著按下 `F5`，就可以開始編譯執行程式了。
