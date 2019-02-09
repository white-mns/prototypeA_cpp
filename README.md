# Prototype-A　戦闘結果生成プログラム
このプログラムは定期更新ゲームの戦闘結果のようなものを出力します。  
登録・表示部分については[別リポジトリ](https://github.com/white-mns/prototypeA_rails)を参照ください。  

# サイト
現時点で公開しているサイトはありません。  

# 動作環境
以下の環境での動作を確認しています  
  
OS : CentOS release 6.5 (Final)  
gcc : 7.3.1  

## 必要なもの
makeが使える環境。  
gccが使える環境。  

## 使い方
・このソースコードをダウンロードします。  

    git clone git://github.com/white-mns/prototypeA_cpp.git

makeを実行してコンパイルします。

    cd prototypeA_cpp
    make

実行すると、戦闘結果のようなものがコンソールに出力されます。  

    ./main

実行ファイルへのシンボリックリンクを[表示アプリ](https://github.com/white-mns/prototypeA_rails)の所定の位置・名称で置くことで、プログラムが実行されブラウザ側に結果が返るようになります。  

## ライセンス
本ソフトウェアはMIT Licenceを採用しています。 ライセンスの詳細については`LICENSE`ファイルを参照してください。  
