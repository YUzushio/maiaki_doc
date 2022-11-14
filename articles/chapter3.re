= 良い開発環境の作り方

//imagetalkl[mai_nutoral]{
じゃあここまでで良いプログラムとは何かを考えてきたわけだけど、ここであきなちゃんに質問です。「何を作ればいいか」は分かった。じゃあ次に知るべきはなんだと思う？
//}

//imagetalkr[akina_nutoral]{
それを「どう作ればいいか」とかでしょうか。
//}

//imagetalkl[mai_nutoral]{
そうだね！そして多くのプログラマが最も時間を割くのが実際にプログラムを書く作業だ。そこで追加の質問、あきなちゃんが担当したJavaの案件、使っていた開発マシンのOSは何だったかな？
//}

//imagetalkr[akina_nutoral]{
WIndowsです。より細かくいうとWindows10でした。
//}

//imagetalkl[mai_nutoral]{
OK、開発に使ってたソフトは何かな?
//}

//imagetalkr[akina_nutoral]{
Eclipseというものを使っていました。
//}

//imagetalkl[mai_nutoral]{
なるほど、WindowsでEclipseを使ってJavaを開発していたと。日本のIT商習慣ではよく見た構成だね。
//}

//imagetalkr[akina_ettu]{
そうなんですか？
//}

//imagetalkl[mai_nutoral]{
エンジニアのWindowsマシンの使用率は60%と言われているし、開発現場のJavaの採用率も50%と非常に高い。統合開発環境(IDE)のランキングもVisualStudioCode、VisualStudioについでEclipseが3位に入っている。こう見るとやはり日本においてもよく見る光景だったのが分かるね。
//}

//imagetalkr[akina_nutoral]{
でも、最近Pythonとかが流行ってるイメージな気がします。
//}

//imagetalkl[mai_nutoral]{
実際にそうだね。もっとも広く使われているJavaScriptについで、Pythonが触れる機会の多い言語として2位にランクインしてるし(ウェブ・アプリケーション製作を担えるプログラムに絞った場合。HTML,SQLを除外)、最近のAIコーディングのほとんどはPythonを使ってるね。
//}

//imagetalkr[akina_komari]{
まいさんがPythonとJavaScriptをやっているというのが改めてうらやましく思えてきました。
//}

//imagetalkl[mai_nutoral]{
そうねぇ。ま、自分で勉強して上司にアピールしてけばそのうち仕事回してもらえるよ！
//}

//imagetalkr[akina_ugee]{
う・・ハードルが高いです。
//}

//imagetalkl[mai_niko]{
大丈夫だって！プログラミングが楽しくなっちゃえば大体のことはうまくいくよ！エンジニアとして生きていくならね！あきなちゃんならできるよ！絶対できる！
//}

//imagetalkr[akina_komari]{
うう・・なんか・・励ましてくださってありがとうございます
//}

//imagetalkl[mai_ahaha]{
あはは！気楽に行こう！じゃあ改めて開発環境の話だけど、たくさんの選択肢がある中ではあるけどOSとIDEについて注目してみよう。
//}

== 開発環境としてのOS

//imagetalkl[mai_nutoral]{
あきなちゃんはWindows、 Mac、 Linuxの違いは分かるかな？
//}

//imagetalkr[akina_hee]{
それくらいわかりますよ！WindowsはMicrosoftが開発していて一番広く普及してます。MacはAppleが開発していて、かっこよくて人気があるってイメージがあります。ちょっと高いけど。Linuxは開発元は・・どこだっけ・・えっと、とにかくエンジニアの人たちが好んで使ってるイメージです！
//}

//imagetalkl[mai_nutoral]{
Linuxの開発元はRed Hat Enterprise だね。厳密にはリーナス・トーパルスによって開発されたOSS(オープンソースソフトウェア)のOSが始まりだけど、OSSの管理者としてRed Hat Enterpriseが運営してる。
//}

//imagetalkr[akina_ooo]{
OSSなのに開発元の会社があるんですね。なんか不思議な感じがします。
//}

//imagetalkl[mai_niko]{
トラブル対処のサポートをサービスとして売ってるってイメージでいいと思うよ。他にも優秀な機能をつけたオプションもついてたり。いつだって専門家に手助けしてもらえるのって心強いでしょ！
//}

//imagetalkr[akina_hee]{
たしかにそうですね！
//}

//imagetalkl[mai_nutoral]{
さて、これらの有名な三つのOSだけど、よりざっくり分けると2種類に分類できる。
//}

//imagetalkr[akina_ettu]{
そうなんですか？
//}

//imagetalkl[mai_nutoral]{
そう、Unix系OSか、そうでないかだ。
//}

