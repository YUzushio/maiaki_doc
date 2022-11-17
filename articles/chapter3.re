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

=== Unix系OSと非Unix系OS

//imagetalkr[akina_nutoral]{
Unixってなんですか？
//}

//imagetalkl[mai_nutoral]{
Linuxがその構造を真似して発展したとても有名なOS、ライセンス契約などのビジネスの形があまり波及に繋がらなくて、今も現役ではあるけどLinuxに比べて出会う機会は非常に減ってるね。
//}

//imagetalkr[akina_ooo]{
波及してないけど真似たものがたくさん使われてるって不思議な現象ですね。
//}


//imagetalkl[mai_nutoral]{
それまでにいろんな契約問題や法廷での争いごとがたくさんあってね、みんな疲れちゃったころにOSSのLinuxが出てきてそっちに流れちゃったんだ。
//}

//imagetalkr[akina_ugee]{
いろいろありそうすぎて怖いです。
//}

//imagetalkl[mai_uun]{
ほんとに怖いよ。額が額だし。とまぁ、そんなことは置いといてUnix系のOSについてだけど、LinuxとMacがUnix系、WindowsがそうでないOSだ。
//}

//imagetalkr[akina_nutoral]{
なるほど、WIndowsが非Unix系と
//}

//imagetalkl[mai_nutoral]{
そう。そしてUnix系はその特徴としてbashなどのプロンプトを通して操作するCLI(コマンドラインインターフェース)が有名だ。
//}

//imagetalkr[akina_nutoral]{
あーあの真っ黒い画面に文字が少しずつ出てくるやつですね。
//}

//imagetalkl[mai_nutoral]{
そうそう！まぁWindowsもCLIで操作することは全然あるんだけど、MacとLinuxは操作感がほとんど一緒だからUnix系って読んで識別してるんだよね。
//}


=== Windows CLI と Unix系 CLI


//imagetalkr[akina_nutoral]{
WindowsのCLIはUnix系と違うんですか？
//}


//imagetalkl[mai_nutoral]{
全然違う。フォルダの中身を確認するコマンドも違うし、ファイルパスの区切りがスラッシュとバックスラッシュ(日本語OSの場合日本円マーク￥)で違うんだよね。
//}


//imagetalkr[akina_hee]{
あー！あの￥マークですか！ファイル探してるときによく見る気がしましたけど、そっかUnix系には出てこないんですね。
//}

//imagetalkl[mai_niko]{
そうそう。他にもWindowsはファイル名の大文字小文字を別物として見做さなかったりするから大変なのよ。
//}

//imagetalkr[akina_nutoral]{
どうしてそんなに違うんですか？
//}

//imagetalkl[mai_uun]{
う・・そこはどっちも統一のための譲歩をしなかったということにしよう。
//}

//imagetalkr[akina_komari]{
(急に言葉に詰まったような・・・?)
//}

//imagetalkl[mai_oko]{
とにかく！OSがUnix系と非Unix系で操作感が違うと！それは分かった？
//}

//imagetalkr[akina_nutoral]{
はい。分かりました。
//}

//imagetalkl[mai_nutoral]{
で、重要なのはここから。世の中の様々なサービスの裏側、サーバーサイドで使われてるOSはUnix系と非Unix系どっちが多いと思う?
//}

//imagetalkr[akina_nutoral]{
多分Unix系です。Linuxが多いと聞いたので。
//}

//imagetalkl[mai_niko]{
正解！実際、サーバーサイドで使われるOSの70%以上がUnix系OSだ。(ホスト系サーバーを除く)。じゃあ、Unix系サーバーに自分が作ったアプリケーションを乗せようとなったとき、アプリケーションを作るOSはUnix系と非Unix系、どっちがいい？
//}

//imagetalkr[akina_komari]{
え・・・うーーんと、自分が慣れてる方・・・ですかね。いまだと非Unix系?
//}

//imagetalkl[mai_uun]{
あ・・・ごめん質問が悪かったね。とりあえず今の質問はあきなちゃんの答え通り、自分が慣れたものの方がいいね。んじゃ、改めて質問。サーバーではUnix系のCLIしか使えません、ではあなたは自分の開発マシンはUnix系CLIが使えるものと使えないもの、どっちを使いたい？
//}

//imagetalkr[akina_nutoral]{
それなら、使える方がいいです。
//}

//imagetalkl[mai_niko]{
OK、そうだよね。使えたほうがいい。だけど数年前まではUnix系CLIが使えないWIndowsマシンがエンジニアの開発マシンの大多数を占めていたんだ。
//}

//imagetalkr[akina_ooo]{
なんか、不便そうですね。
//}

//imagetalkl[mai_oko]{
そう！めちゃくちゃ不便なのよ！だけど、プログラミング以外の作業でWordやExcelのようなWIndowsのGUIは手放せない。そこで重宝されたのがGUIがあって表計算ソフトもあってなおかつUnix系のOS、Macだった。
//}

//imagetalkr[akina_nutoral]{
最強ですね。
//}

//imagetalkl[mai_ahaha]{
そう！まさに最強！マシンスペックに対して単価が高いのが玉に瑕だね。けっこう長い間プログラミングとGUIを使う人の多くはMacのファンが多かったんだ。もちろんLinuxにもGUIのあるものはあるんだけど必要最低限のものしか入ってなくてカスタムするには相応の知識が必要だったからMacの人気がすごかった。
//}

//imagetalkr[akina_nutoral]{
なんとなくアート系の人がMacを使ってるイメージがありました。
//}

//imagetalkl[mai_nutoral]{
カリグラフィーに最初に注力したのはAppleだし、音楽系などもMac専用ソフトなどが優秀なのもあったから実際その層はたくさんいたと思うよ。
//}

//imagetalkr[akina_nutoral]{
私もMacほしいです。
//}

//imagetalkl[mai_niko]{
買っちゃいなよ。もう社会人で1年たつでしょ？どんどん稼いで好きなもの買おう！
//}

//imagetalkr[akina_niko]{
買っちゃいます！
//}

//imagetalkl[mai_nutoral]{
でも、ちょっと待って。2023年の今、プログラマがUnix系OSかどうかだけでPCを選ぶのは話がちょっと違うんだ。
//}

//imagetalkr[akina_ettu]{
そうなんですか？
//}

== WSL 

//imagetalkl[mai_nutoral]{
あきなちゃんはWSLって知ってる？
//}

//imagetalkr[akina_nutoral]{
いや、知らないです。
//}

//imagetalkl[mai_nutoral]{
Windows Subsystem Linux 通称WSL、現在はバージョンが進んでWSL2が主流になってるね。Windows OSを起動しながら一部のフォルダ領域でLinuxマシンが扱える機能だ。
//}

//imagetalkr[akina_ooo]{
おー、これでWindowsのGUIとUnix系CLIが揃いますね！でも、どうやって動いてるんです？
//}

//imagetalkl[mai_nutoral]{
んー厳密な説明は難しいんだけど、ざっくり説明しよう。あきなちゃんはDockerって知ってるかな？
//}

//imagetalkr[akina_komari]{
うーん、わかりません。
//}

//imagetalkl[mai_nutoral]{
じゃあ、コンテナ化は？
//}

//imagetalkr[akina_komari]{
わからないです。(知らない言葉が多すぎて悲しくなってきた)
//}

//imagetalkl[mai_nutoral]{
OK、仮想化は？
//}

//imagetalkr[akina_ooo]{
あ、それなら聞きました。OSの中に別のPCが仮想的に入ってるってやつですよね。でも、それってどういうことなんだろう・・・？
//}

//imagetalkl[mai_ahaha]{
あはは！私も最初聞いたときはいまのあきなちゃんみたいな反応してたよ！
//}

//imagetalkr[akina_nutoral]{
む、(なんだか馬鹿にされてる気がする)
//}

//imagetalkl[mai_ahaha]{
あーごめんごめん！順を追って説明するね！
//}

== OS仮想化

//imagetalkl[mai_nutoral]{
まずは仮想化とは何か、だね！「OSの中に別のPCが仮想的に動いている」ということだけど、これをとても感覚的な言い方で表すと、CPUとメモリとディスクを間借りする形で別のOSが居候するってイメージだ。
//}

//imagetalkr[akina_ettu]{
ディスクはなんとなくイメージできますが、メモリやCPUも「借りる」ことができるんですか？
//}

//imagetalkl[mai_niko]{
そうだね。比較的わかりやすいのはメモリで、これはメモリの領域を数GB分とかだけ元のOS(ホストOS)では触れない状態にして仮想的なOSが占有する形にすることで実現するね。
//}

//imagetalkr[akina_ettu]{
CPUも部分的に間借りする形ですか？
//}

//imagetalkl[mai_nutoral]{
CPUの方はちょっと違ってて難しくなるね。OS仮想化においてCPUの利用はCPUの能力×時間を借りることになるんだ。この時間をCPU時間とか言うね。単位としてはvCPUって言ったりする。
//}

//imagetalkr[akina_nutoral]{
PCマシンスペックのCPUまわりで聞くコア8とか言っているのとは違う話ですか？
//}

//imagetalkl[mai_niko]{
結構近いね。基本的に使えるCPUのコア数が多い方が計算能力が高いと思ってもらっていい。コア8なら８つのマルチコアのCPUが載っているマシンだね。物理的なコア数はvCPUっていう単位を考える際にとても重要になってくる。仮想マシン側のvCPUの数値が大きいほど計算能力も上がるけど、ホストOSで使用しているマシンのCPUのコア数が8の場合、仮想マシンのvCPUの設定値は8を超えられないね。
//}

//imagetalkr[akina_niko]{
なるほど、コア数が重要で、仮想化ではvCPUがその単位なんですね。
//}

//imagetalkl[mai_niko]{
ちなみにこのvCPUっていう言葉はクラウドのマシンを借りる際にも出てくるから覚えておくといいよ。
//}

//imagetalkr[akina_nutoral]{
クラウドに関係があるんですか？なんででしょう？
//}

//imagetalkl[mai_nutoral]{
クラウドのマシン貸出機能が、強力なサーバーの中に用意された仮想マシンを貸し出すっていう実態だからだね。CPU性能に関してはvCPUの単位で値段がつけられてることが多いんだ。
//}

//imagetalkr[akina_ooo]{
クラウドの裏側が仮想マシンだったなんて、驚きです。
//}

//imagetalkl[mai_niko]{
これでクラウドを触る準備がまた一つできたわけだ。
//}

//imagetalkr[akina_ettu]{
え、わたしこのままいったらクラウド触ることになるんですか？
//}


//imagetalkl[mai_ahaha]{
まぁ、そのうちね！
//}

//imagetalkr[akina_komari]{
(楽しみなような・・・怖いような・・・)
//}


== コンテナ化 - Docker

//imagetalkl[mai_nutoral]{
OS仮想化の話をしたけれど、ここでもう一つ重要な概念がある。「コンテナ」だ。
//}

//imagetalkr[akina_nutoral]{
コンテナ・・・前に一回出てきてましたね。仮想マシンとは違うんですか？
//}

//imagetalkl[mai_nutoral]{
元になった技術は仮想マシンだけど、別物と考えた方がいいね。仮想マシンは基本的にホストOSと仮想マシンの間にハイパーバイザーというものが存在している。このハイパーバイザーは仮想マシン側の命令をホストOS側に渡すための解析やCPU使用時間などのリソース振り分けを行う。「バイザー」の名の通り監視役であり、組み分け作業も行うんだ。
//}

//imagetalkr[akina_nutoral]{
コンテナにはそのハイパーバイザーがないんですか？
//}


//imagetalkl[mai_niko]{
	そうだね。ハイパーバイザーはその処理の重要さに比べて要求されるスピードがシビアで、追いつかないケースがある。要するに仮想マシン上の操作が重くなるわけだ。その速度面の改善案として生まれてきたのが「コンテナ」で、これはコンテナ内のOS側の命令が直接CPUを使用する。
//}

//imagetalkr[akina_komari]{
それだけ聞くと、なんだか危険に感じますね。
//}

//imagetalkl[mai_nutoral]{
実際、コンテナ化は仮想マシンに比べてセキュリティリスクが高いとされている。ただ、そのリスクをもってしても、軽快なコンテナの挙動が多くの人に支持されているんだ。
//}

//imagetalkr[akina_nutoral]{
なるほど。速さが大事なんですね。
//}


//imagetalkl[mai_nutoral]{
速さだけでなくリソースの消費も少ないから、複数のコンテナを同時に起動させることも可能になった。これによって複数コンテナでのネットワーク構築が可能になって、サーバーの機能分離をローカル環境で実現できるようになった。つまり、本番環境に近い環境を手軽にローカルで試せるようになったんだ。代表的なソフトがDockerだね。
//}

//imagetalkr[akina_hee]{
なるほど、一つの仮想マシンだけではできなかったことがコンテナではできるようになったんですね。
//}

== コンテナオーケストレーション-Kubernetes

//imagetalkl[mai_nutoral]{
さらに、複数のホストOS上でコンテナ同士のネットワークを構築できる「コンテナオーケストレーション」という技術も生まれてきた。
//}

//imagetalkr[akina_eee]{
仮想OSのはずなのに複数マシンで？どうなってるんですか？
//}

//imagetalkl[mai_nutoral]{
そもそもネットワークに参加するホストOS群を監視役マシンに登録する。監視役マシンはオーケストレーションツールのクライアントから送られてくるコンテナ群の設置要求をホストOS群のどこかに通信量が偏らないように設置する。通信量が増えてコンテナの負荷が上がると、他に空いているホストOS上にコンテナを増設する。これで処理負荷に対して柔軟な対応ができるサービスが出来上がるわけだ。代表的なソフトはKubernetesだね。
//}

//imagetalkr[akina_ettu]{
すごすぎる。あれ、でも仮想マシンのハイパーバイザーが重しになったのと似てますけど、監視役マシンが負荷に耐えられない場合はどうするんですか？
//}

//imagetalkl[mai_nutoral]{
鋭いね。その場合待つのはネットワークの崩壊、サービスの停止だ。
//}

//imagetalkr[akina_eee]{
えぇ！？全然安心できないじゃないですか！？
//}

//imagetalkl[mai_nutoral]{
そのとおり、そのためKubernetesの使用に対応してるクラウドサービスは軒並みこの監視役マシンがダウンしないようにクラウドサービス側で運用してくれるような形にしているね。
//}

//imagetalkr[akina_hee]{
なるほど！それは頼りになります！
//}

//imagetalkl[mai_nutoral]{
それと同時にホストOSの登録などもクラウドサービス側のGUIで操作できるようになっていることが多い。ホストOSの登録やネットワーク設定はkubernetesを使うだけの時とは比べられないほどの知識が必要だからね。
//}

//imagetalkr[akina_ettu]{
そんなに違うんですか？
//}

//imagetalkl[mai_nutoral]{
Kubernetesの知識を問う認定試験がそもそも使う側とインフラを整備する側で分かれてることからも推して知れるね。
//}

//imagetalkr[akina_nutoral]{
奥が深そうです・・・。
//}

//imagetalkl[mai_nutoral]{
まぁ私たちの仕事の特性上、Kubernetesのホスト側設定を私たちが行うケースはほとんどないから、時間があるときに調べる程度でとどめていいと思うよ。
//}

//imagetalkr[akina_nutoral]{
なるほど、タイミングが合えば勉強してみます。
//}

===[mycolumn]おススメ書籍

イラストでわかるDockerとKubernetes (Software Design plus)

//image[dockerbook][][scale=0.5]

出版社  :  技術評論社

発売日  :  2020/12/5

ISBN-10  :  4297118378

ISBN-13  :  978-4297118372

おすすめポイント：DockerとKubernetesを学習する際におススメの一冊、４章構成のコンパクトな作りながら豊富な図解で分かりやすく仕組み、組み合わせ方法を紹介している。第2章がDockerの使い方、第3章がKubernetesの使い方の説明となっている。特筆すべきは第４章のコンテナ技術の仕組みの説明で、他の入門書では細かく触れることが少ない部分について豊富な図解により理解の進みやすい説明が行われている。



===[/mycolumn]


== 仮想環境と統合開発環境(IDE)- Visual Studio Code

//imagetalkl[mai_nutoral]{
さて、仮想化技術についてこれまで触れてきたけど次は統合開発環境(IDE)について話そう。あきなちゃんは前のプロジェクトではEclipseを使っていたって言ってたけど、他にどんなIDEがあるか知ってる？
//}

//imagetalkr[akina_ettu]{
え・・・いや、そもそも統合開発環境って呼び方すら良くわかってなかったです。
//}

//imagetalkl[mai_nutoral]{
OK、統合開発環境ってのはプログラムを書いたり、コンパイルしたり、デバッグしたりする作業が一つのソフトか関連ソフトで行えるもののことを言うね。Eclipseでもコードエディタ以外にコンパイルとかしてたでしょ？
//}

//imagetalkr[akina_nutoral]{
言われてみれば確かに、コードを書くだけじゃなくてコンパイルとかデバッグとかをしてました。先輩に教わってギリギリ触れるようになったくらいですけど。
//}

//imagetalkl[mai_nutoral]{
1年目でそこまでできれば十分だよ！まあなんで統合開発環境なんていう大仰な名前がついてるかというと、昔はエディタしかなかったわけだ。
//}

//imagetalkr[akina_nutoral]{
エディタしかないってちょっとイメージできないですがどうやって開発するんです？
//}

//imagetalkl[mai_nutoral]{
エディタでファイルを開いて編集して閉じて、別のコマンドでコンパイルしたりデバッグしたりする。
//}

//imagetalkr[akina_ugee]{
えぇ、めんどくさすぎます。作業を覚えられないかも・・・
//}

//imagetalkl[mai_ahaha]{
あはは！慣れれば誰でも覚えられるよ！使いやすいかは別としてね。とまぁこのエディタ以外も含めた高機能なソフトのことを統合開発環境と呼ぶことになったんだけどEclipseはそれまでのIDEの概念を大きく変えたGUI操作が可能なJavaのIDEだったんだ。
//}

//imagetalkr[akina_hee]{
なるほど、名選手なんですね！見直しました！
//}

//imagetalkl[mai_uun]{
まぁ重いけどね。
//}

//imagetalkr[akina_ugee]{
うぅ・・・忘れようとしてたことを言わないでください。
//}

//imagetalkl[mai_nutoral]{
まぁ事実だし。
//}

//imagetalkr[akina_nutoral]{
すごく冷たい・・・。
//}

//imagetalkl[mai_niko]{
今じゃもっとホットなIDEがあるからね。その名も「VIsual Studio Code」だ！
//}

//imagetalkr[akina_komari]{
んん？Visual Studioって聞いたことがあるような・・・。
//}

//imagetalkl[mai_nutoral]{
ちがうちがう！Visual Studio「Code」だよ！C#とかの開発をおこなうVisual Studioとは全くの別物だ！
//}

//imagetalkr[akina_ettu]{
そんなに違うんですか？
//}

//imagetalkl[mai_nutoral]{
まぁ、制作元がMicrosoftだからイメージはやっぱりVisual Stusioがもとになってるんだろうけど、中身がちがう。とにかく速いんだ！
//}

//imagetalkr[akina_nutoral]{
速い・・・それだけですか？
//}

//imagetalkl[mai_niko]{
もちろん、それだけじゃない。拡張機能もサードパーティの優秀なものが無料でそろっているし、JavaやC#だけじゃなくて非常に多くの言語に対応してる。PythonやJavaScriptはもちろんのことRubyやPHPも書ける！
//}

//imagetalkr[akina_eee]{
そんなに沢山の言語に対応してるんですか！？
//}

//imagetalkl[mai_ahaha]{
そこがほんとにVSCodeの強いところ！それまでは言語ごとにIDEが違ったけど今はVSCodeを覚えれば全部解決できちゃう！最強よ最強！
//}

//imagetalkr[akina_ooo]{
はぇ〜、まいさんがそんなにテンション上がってるとこ初めて見ました。
//}

//imagetalkl[mai_niko]{
しかも！型推論やコードサジェストがしっかりしてるしデバッグも非常に見やすい！拡張機能でCSVもきれいに表示されるし編集もできる！画像だって同じ操作画面から確認できる！
//}

//imagetalkr[akina_eee]{
ほんとに最強じゃないですか。
//}

//imagetalkl[mai_ahaha]{
最強よ最強！あとはこれが有料にならないことを祈るばかりだね。
//}

//imagetalkr[akina_ooo]{
うわ、それは怖い。
//}

//imagetalkl[mai_nutoral]{
実際に有料化してユーザーコミュニティが衰退したIDEとかもあるからやっぱりみんな無料を重宝するね。普段から使えて仕事でも問題なく使えるなら覚え得なわけだ。
//}

//imagetalkr[akina_hee]{
なるほど。わたしも使ってみます！
//}

//imagetalkl[mai_niko]{
いいね！じゃんじゃん使おう！ところでこのVSCodeで使える機能でとても大事な物が2つある。
//}

//imagetalkr[akina_nutoral]{
なんでしょう？
//}

//imagetalkl[mai_nutoral]{
一つ目は仮想化技術との連携だ。VSCodeは拡張機能を使うことでコンテナの起動や管理が非常にしやすく、コンテナの中にVSCodeを直接開く形でアクセスできる機能もある。
//}

//imagetalkr[akina_ettu]{
コンテナの中にですか？でも必要なんですか？
//}

//imagetalkl[mai_nutoral]{
コンテナ技術ではホストOSからファイルを渡したり特定フォルダを同期させる必要があるんだけど、コンテナ内にVSCodeでアクセスするだけでファイルをドラッグアンドドロップでファイルのやり取りができるんだ。しかもホストとコンテナ間で文字コードの異なるファイルを行う場合も、文字コードの変換をしてくれる。この文字コードが実は結構躓きがちな場所だから、本当に便利なんだ。
//}

//imagetalkr[akina_hee]{
なるほど、ファイルの出し入れに苦労しないのは大切ですね！
//}

//imagetalkl[mai_nutoral]{
もともと時間ないんだからそんなことに時間割いてられないもんね！そしてとても大事な機能のもう一つが、コード管理システムとの連携だ。
//}

== コード管理システム - Git

//imagetalkr[akina_nutoral]{
コード管理システムですか・・・どういうものを言うんです？
//}
//imagetalkl[mai_nutoral]{
開発物のコードのバージョンを保存したり、複数開発者間でのコードの共有を行うツールだね。あきなちゃんは前のプロジェクトでsubversionって言うのを使ってたんじゃないかな？
//}
//imagetalkr[akina_nutoral]{
あ！それなら知ってます！使ってました。
//}

//imagetalkl[mai_nutoral]{
それの親戚・・・もとい、進化系と考えてもらっていいね。じゃあコード管理システムのGitというソフトを通してコード管理の概念と操作方法を学んでいこう。
//}

//imagetalkr[akina_niko]{
よろしくお願いします！
//}


=== コミット
//imagetalkl[mai_nutoral]{
まず最初にコミットからだ。これはゲームとかでいうところのセーブポイントを作るイメージかな。ある程度コーディングが進んだらこのコミットを行っていつでもそこに戻れるようにしておくんだ。
//}

//imagetalkr[akina_nutoral]{
いつでも戻れる・・・？その時のコードを再現できるってことですか？
//}

//imagetalkl[mai_nutoral]{
そうだね！subversionではこの機能使わなかった？
//}

//imagetalkr[akina_nutoral]{
とりあえずコミットして先輩に見てもらっていたので、戻るとかはしてませんでした。
//}

//imagetalkl[mai_niko]{
なるほど、順調だったわけだ。それはそれでいいことだね。このコミットによってセーブポイントを作っておけば途中で必要なくなってしまった機能など、不要なコードを安全に切り分けることができる。
//}

//imagetalkr[akina_ugee]{
コードが不要になるのはつらいですが・・・
//}

//imagetalkl[mai_ahaha]{
あはは！そりゃそうだ！でも、自分の手でいちいち削除していくより確実に作成前の地点に戻れるのはとても便利だよね。
//}

//imagetalkr[akina_nutoral]{
そうですね。ありがたいです
//}

=== ブランチ

//imagetalkl[mai_nutoral]{
つぎにブランチだ、これはたとえば物語のストーリーの時間軸のようなもので、コミットはこの時間軸上にセーブポイントを作っていくんだ。
//}

//imagetalkr[akina_nutoral]{
時間軸の特定の地点に戻れるあたり、タイムマシンみたいですね。
//}

//imagetalkl[mai_niko]{
そうだね。タイムマシンっていうのはいい例えだ。ちなみにこのブランチは別の世界線、つまり異なる歴史を重ねていく時間軸を表現することができる。
//}

//imagetalkr[akina_ettu]{
別の歴史？どういうことですか？
//}

//imagetalkl[mai_nutoral]{
ブランチの特定のコミット地点から別のブランチを名前を付けて作成できるんだ。例えばゲームの中で二つ目の街を訪れなかった世界線ってみたいにね。
//}

//imagetalkr[akina_nutoral]{
なるほど。異なる行動をした記録を別のブランチに記録できるんですか。
//}

//imagetalkl[mai_nutoral]{
そうそう、ちなみにこのブランチ、後からいいとこだけ取って混ぜ合わせることができる。
//}

//imagetalkr[akina_eee]{
いろんな世界線の経験を混ぜ合わせることができる・・・？最強の主人公の出来上がりじゃないですか！
//}

//imagetalkl[mai_uun]{
実際のプロダクトもそうなってくれればいいのにねぇ。まぁ何であれ、異なる経歴の優れた部分を混ぜ合わせることができる、この行動をマージって言うんだ
//}

=== マージ

//imagetalkr[akina_nutoral]{
マージですか。聞いたことがあるような・・・。
//}

//imagetalkl[mai_nutoral]{
subversionにもマージがあるからね。先輩たちが言ってたのを聞いたんじゃない？
//}

//imagetalkr[akina_nutoral]{
そうかもしれません。本番とテスト環境と合わせるのがどうのこうのって言ってた気もしますが、正直私が関わるレベルの話じゃないと思ってました。
//}

//imagetalkl[mai_nutoral]{
ブランチのマージに関してはプロジェクトマネージャーや開発責任者の領分になるケースもあるからね。ただ、subversionと違ってGitでは自分の手元でもマージを行うケースもあるから練習して覚える必要があるね。
//}

//imagetalkr[akina_nutoral]{
なるほど、できるか不安です。
//}

//imagetalkl[mai_niko]{
大丈夫！そんなに難しくないよ！このマージは複数のブランチの結果を合体させる作業を指すね。ブランチ同士の統合やリモートのブランチを取得してくる時に自動でマージさせたりする。
//}

//imagetalkr[akina_ettu]{
自動でやってくれるんですか？
//}

//imagetalkl[mai_nutoral]{
多くの場合は自動でやってくれるね。自動でできない状態になることをコンフリクトって呼んで、実際のファイルの中身を手動で編集する必要がある。このコンフリクトは手動編集が終わらないとマージが行えない仕様になっていて、変更部分がかちあってしまっている部分を慎重に切り分けないといけない。
//}

//imagetalkr[akina_nutoral]{
重要そうですね。
//}

//imagetalkl[mai_nutoral]{
実際めちゃくちゃ重要だし、失敗が許されない作業でもあるからね。万が一コンフリクトに出会ったときは相談できる人と一緒に作業するのがおすすめだ。
//}

//imagetalkr[akina_nutoral]{
なるほど、気を付けます。
//}

//imagetalkl[mai_niko]{
Gitの操作はインターネットに詳しく書いてある記事が沢山あるから勉強しながら慣れていこう！
//}

//imagetalkr[akina_niko]{
わかりました！がんばります！
//}

=== ローカルリポジトリとリモートリポジトリ

//imagetalkl[mai_nutoral]{
ここで改めてGitとsubversionの違いを確認しよう。Gitが分散型リポジトリで、subversionが集中型リポジトリだ。
//}

//imagetalkr[akina_ettu]{
分散と集中・・・具体的にはどう違うんですか？
//}

//imagetalkl[mai_nutoral]{
Gitはリモートリポジトリっていう開発者全員がアクセスするコード管理システムのサーバーと自分のローカルマシン上のローカルリポジトリっていう２か所にコードを管理する。一方subversionはリモートリポジトリにしかコードを管理しない。
//}

//imagetalkr[akina_nutoral]{
subversionの方がシンプルに見えますね。
//}

//imagetalkl[mai_nutoral]{
そうだね。実際subversionの方が操作の種類が少なくて覚えやすい。ただ、subversionはリモートリポジトリが何らかの事故によって破損した場合の復旧が大変だけど、Gitはリモートリポジトリが破損しても誰かのローカルリポジトリからコードをすぐに持ってくることができる。
//}

//imagetalkr[akina_nutoral]{
なるほど、リスク分散ができているんですね。
//}

//imagetalkl[mai_niko]{
そう。分散型リポジトリの強みだね。あと、誰かが間違えてテストが失敗したり、ビルドが通らなかったりするコードをリモートリポジトリに入れてしまうとsubversionでは開発者全員が影響を受けることになるんだよね。その点Gitはリモートリポジトリで問題が発生しても他の人はローカルリポジトリでコミットを続けることができて、リモートリポジトリが修復されてから成果を合流させることができるんだ。
//}

//imagetalkr[akina_nutoral]{
誰かの失敗があっても影響が出にくいんですね。
//}

//imagetalkl[mai_nutoral]{
もちろんカバーするのが大変な場面もあるけどね。でもリカバリーする手段があるだけ全然マシだ。
//}

//imagetalkr[akina_nutoral]{
わたしも触るならGitの方が安心かもしれません。
//}

//imagetalkl[mai_nutoral]{
ただやっぱり、subversionに比べて覚えることが格段に多い。リモートリポジトリとローカルリポジトリは基本的に自動で同期されたりしないからそれぞれ管理しないといけないんだ。
//}

//imagetalkr[akina_nutoral]{
自動で同期されないことで安全性を高めている分、頭を使うんですね。
//}

//imagetalkl[mai_niko]{
そうそう、じゃあ次はどうやって同期するかを説明しよう。
//}
