= 良いインフラの作り方

//imagetalkl[mai_nutoral]{
さて、ここまでで「良いプロジェクトの作り方」、「良いプログラムの作り方」、「良い開発環境の作り方」とは何かを話してきたけど、最後にもう一つ、「良いインフラの作り方」について話をしよう。
//}

//imagetalkr[akina_nutoral]{
インフラって言葉はもともと建築関係の言葉だと思ってました。ネットワークとかミドルウェアの設定のことを言うんですよね。
//}

//imagetalkl[mai_nutoral]{
そうだね。わたしも同じ感覚だったなぁ。まぁ、IT業界のプロジェクトマネジメントのノウハウも製造業や建築業から来てる部分が多いし、そういう流れの一端なんじゃないかな。
//}

//imagetalkr[akina_nutoral]{
なるほど、意外と建築とか製造業とかと関係が深いんですね。
//}


== アーキテクトとインフラ

//imagetalkl[mai_nutoral]{
インフラの大まかな設計をする役職のことをアーキテクトって言う。これも建築業から来てるね。
//}


//imagetalkr[akina_nutoral]{
おぉ、アーキテクト、聞いたことあります。あれ、アーキテクチャだっけ？
//}

//imagetalkl[mai_nutoral]{
アーキテクチャは大まかな設計自体のことを言うね。
//}

//imagetalkr[akina_nutoral]{
そうなんですね。アーキテクトってなんだか偉い人のイメージがあります。
//}

//imagetalkl[mai_nutoral]{
偉いっていうより上流工程を担当することが多いね。ただ、このアーキテクチャ設計が間違ってたりするとプロジェクトへのダメージが非常に大きい。責任が重いから偉いのは確かにそうなの・・・かな？
//}

//imagetalkr[akina_nutoral]{
正確な仕事をお願いしたいですね。
//}


//imagetalkl[mai_tohoho]{
正確っていうのも難しい基準だとは思うけどね。アーキテクチャ設計自体はお客さんの粗削りな要求以外何にもない状態から始まるし、その要求が無茶なこと言ってることもあるからねぇ。
//}


//imagetalkr[akina_nutoral]{
大変だ・・・。
//}

//imagetalkl[mai_nutoral]{
まぁ、今であれば様々なクラウドのサービスや稼働様態を把握して良いものを選んでいくスキルが求められるね。
//}

//imagetalkr[akina_nutoral]{
となると、かなり専門性の高い仕事ですね。
//}

//imagetalkl[mai_tohoho]{
そうだね。さすがに高給取りな職でもいいかもしれない専門性の高さだ。ただ、IT業界の一部の会社では「プロジェクトマネージャーでもプログラマーでもインフラエンジニアでもないけど技術にうるさい人」程度の扱いしか受けてなかったりするから不遇な場合もある。
//}

//imagetalkr[akina_ugee]{
地獄だ・・・どうして・・・アーキテクトさんはこんなに頑張ってるのに。
//}

//imagetalkl[mai_ahaha]{
あっはは！まぁ評価してくれる会社に転職してるんじゃない？仕事できる人なら職場を選ぶ決断力も肝も据わってそうだね！
//}

//imagetalkr[akina_nutoral]{
そうなんですかね・・・
//}

//imagetalkl[mai_nutoral]{
さて、話がそれちゃったけど本題はインフラの話だ。インフラの大まかな設計はアーキテクチャといって、アーキテクトが設計する。インフラエンジニアの人たちはその大枠の中で個々のサービスを実現させるためのネットワークやサーバー設定を行う。
//}

//imagetalkr[akina_ettu]{
ネットワークの設計って、アーキテクチャ設計には入らないんですか？
//}

//imagetalkl[mai_nutoral]{
そう、状況にもよるけどね。例えばだけど特定領域は社内ネットワークで動いて、一部の処理だけ外部ネットワークと接続する形をとったりする。しかも、データの管理は両方のネットワークからクラウドのDBに繋げたりって感じで、個々のネットワークだけでは表現できないものをアーキテクチャとして設計するね。個々のネットワークの内部をどう作るかというあたりからがインフラエンジニアの仕事だ。
//}

//imagetalkr[akina_nutoral]{
なるほど、そんなに規模が大きいものまで設計するんですね。
//}


//imagetalkl[mai_nutoral]{
まぁアーキテクトから出るのは大雑把な指示になることが多いから、現場のエンジニアたちとは綿密にコミュニケーションを取ることが大事だね。とくにインフラエンジニアたちは設計書と実装が厳密に結びついてることがそのまま品質につながるから、漏れることなく情報を連携しないといけないね。ちなみにこれからインフラ周りの細かい話をしていくんだけど、あきなちゃんはこのあたりの話は前のプロジェクトで触れたかな？
//}

//imagetalkr[akina_nutoral]{
うぅ・・・正直あんまり触れなかったので、研修の時の知識ぐらいしかありません。
//}

//imagetalkl[mai_niko]{
OKじゃあ復習がてら、じっくり見ていこう！
//}

//imagetalkr[akina_niko]{
お願いします！
//}


== ITインフラの基礎知識


//imagetalkl[mai_nutoral]{
それじゃあITインフラの基礎知識のおさらいといこう。とてもシンプルだけどこの3点を押さえよう。
アドレスとポート
ルータ
ドメインとDNS
あきなちゃんはこの3つ、ちゃんと覚えてる？
//}

//imagetalkr[akina_nutoral]{
覚えてる・・・と言いたいところですが、完璧ではないかもしれません。
//}

//imagetalkl[mai_niko]{
OK、これも一つ一つ見ていこう。
//}

=== アドレスとポート

//imagetalkl[mai_nutoral]{
まず最初にアドレスとポートだけど、アドレスは住所にたとえられるね。
//}

//imagetalkr[akina_nutoral]{
アドレスはなんとなくイメージできますね。でも、ポートってうまくイメージできないんですけど・・・
//}

//imagetalkl[mai_nutoral]{
たとえるなら空港の搭乗口がいいかもね。
//}

//imagetalkr[akina_ooo]{
搭乗口ですか。
//}

//imagetalkl[mai_nutoral]{
空港の搭乗口って何個もあるよね？
//}

//imagetalkr[akina_nutoral]{
はい。
//}

//imagetalkl[mai_nutoral]{
その搭乗口の何番ゲートっていうのがポートの番号に相当すると思ってもらっていい。ゲート番号は異なるけど、空港の中に入っていくっていうのは変わらない。コンピュータも外部との通信の経路を用意していて、その経路番号ごとに通信可否を管理しているんだ。
//}

//imagetalkr[akina_nutoral]{
なるほど、空港名や住所がアドレスで、そこにアクセスするためのゲート番号がポート番号なんですね。
//}


//imagetalkl[mai_nutoral]{
あと、ポート番号は用途ごとによく使われるものが慣習的に決まっている。例えばHTTP接続の場合は80番、SSH接続の場合は22番など、専用ゲートといってもいい予約された番号があるんだ。
//}

//imagetalkr[akina_nutoral]{
専用ゲートですか。決まってると良いことがあるんですか？
//}

//imagetalkl[mai_nutoral]{
基本的にはすべてのゲートを閉じていて、あらかじめ用途ごとに必要なゲートのみを開けるのが通例だね。そのために専用ゲートの慣習番号があるね。
//}

//imagetalkr[akina_nutoral]{
なるほど！明示的に指定したものしか通さないんですね。
//}


//imagetalkl[mai_nutoral]{
予期してないところから通信なんて来たらびっくりしちゃうよね。ちなみに無造作に空いているポートがないかを総当たりで検索してターゲットのサーバーへ侵入を試みる「ポートスキャン攻撃」ってハッキング手段が存在する。
//}

//imagetalkr[akina_nutoral]{
ポートの検索自体が「攻撃」なんですね。
//}

//imagetalkl[mai_nutoral]{
実際、攻撃する意図が無ければそんなことしないしね。さらに言うと、ポートスキャン攻撃を仕掛けてきたコンピューターからの通信を遮断する防御方法も考案されてるね。
//}

//imagetalkr[akina_ugee]{
これはよくわからないとか言ってられない話になってきました・・・
//}

//imagetalkl[mai_nutoral]{
まぁセキュリティに関してはまた後で話すから、今はこのぐらいにしておこう。
//}

=== ルーター

//imagetalkl[mai_nutoral]{
つぎはルーターだ。アドレスを住所にたとえたことを踏まえれば多くの住所を把握している郵便局ぐらいに考えておこうか。
//}

//imagetalkr[akina_nutoral]{
郵便局ですか。
//}

//imagetalkl[mai_nutoral]{
郵便局はいろんな町ごとにあるよね？
//}

//imagetalkr[akina_nutoral]{
ありますね。市とか区とか、もっと細かい範囲にもあると思います。
//}

//imagetalkl[mai_nutoral]{
北海道の郵便局が沖縄の住所に詳しい必要はないよね。
//}

//imagetalkr[akina_nutoral]{
それは・・・そうですね。沖縄の郵便局が詳しければ事足りるかもしれません。
//}

//imagetalkl[mai_nutoral]{
ルーターの役割も似てるんだ。特定のネットワーク内でアドレスを管理するのがルーターで、ルーターは自分が管理するネットワーク内のアドレスに詳しければいい。
//}

//imagetalkr[akina_nutoral]{
なるほど、特定のネットワークの案内役なんですね。
//}

//imagetalkl[mai_nutoral]{
そう、シンプルに考えればね。で、アドレスの実際の値なんだけど「192.168.0.1」みたいなピリオドで区切られた4つの値の組み合わせで表現されるね。
//}

//imagetalkr[akina_ettu]{
あれ、「google.com」みたいなやつとは違うんですか？
//}

//imagetalkl[mai_nutoral]{
そう、別物だ、ちなみにこの数字のアドレス表記はIPv4っていう種類の表し方だね。IPv6っていう新バージョンの表し方もあるけど今のところはIPv4の表記になれた方がいいね。この数字による表記がアドレスの実態で「google.com」みたいな文字列の表記はドメインって言われるんだ。
//}

=== ドメインとDNS

//imagetalkr[akina_nutoral]{
ドメイン・・・ですか。名前の響きは聞いたことありますが、それがアドレスの代わりになるんですか？
//}

//imagetalkl[mai_nutoral]{
そうだね、順を追って説明しよう。まず、アドレスがあって、PCはそのアドレスを頼りに通信を行うんだけど、そのアドレスを人間が呼んでもわかりやすい文字列で表記したいって需要が生まれてきたんだ。その需要に答えるために考えられたのがドメイン名っていう文字列表記の方法と、ドメイン名とアドレスを照らし合わせるドメインネームサービス(DNS)ってものが生み出されたんだ。
//}

//imagetalkr[akina_nutoral]{
DNS・・・その響きも聞いたことあります。
//}

//imagetalkl[mai_nutoral]{
このDNSはドメイン名を聞くと実態のアドレスを教えてくれる存在なんだけど、このDNSサービスはインターネットのどこからでもアクセスできる必要がある。
//}

//imagetalkr[akina_nutoral]{
まぁ自分のPCから「google.com」にアクセスできなきゃ困りますもんね。
//}

//imagetalkl[mai_nutoral]{
そうそう。で、だからこそインターネットのあらゆる場所からアクセスするために、「とりあえずアクセスしに行くDNSサーバー」が取り決められている。
//}

//imagetalkr[akina_niko]{
なるほど!いくつかの「とりあえずアクセスしに行くDNSサーバー」にドメイン名を聞けばどこかしらからたどり着けるはずって話ですね。
//}

//imagetalkl[mai_niko]{
そのとおり！ただ、この「とりあえずアクセスしに行くDNSサーバー」は取り決め上勝手にどんどん増やすことはできなくて、一部のサーバーに限られている。そしてこの「とりあえずアクセスしに行くDNSサーバー」は有料であったり何かしらの登録を受け付ける形で自らが案内すべきドメインを蓄積していくんだ。
//}

//imagetalkr[akina_ettu]{
え、じゃあ自分の好きなドメインを登録するのは有料だったりするんですか？
//}

//imagetalkl[mai_nutoral]{
いくつかのDNSサービスは無料の物があって、逆に無料であるからこそ選択肢が少なくてユーザー間で有名だね。「お名前ドットコム」や「free.com」などが有名だ。
//}

//imagetalkr[akina_nutoral]{
あ、良かった。無料もあるんですね。
//}

//imagetalkl[mai_nutoral]{
無料な分、ドメイン名の一部に制約を受けたりするね。ドメインの終わりの「○○.com」とか「○○.jp」とかのドメイン名は無料で取れないケースが多いね。ドメイン名自体が他とかぶっちゃいけないっていう制約もあるから有料であっても完全に自由な選択ができるわけでもないけどね。
//}

//imagetalkr[akina_nutoral]{
なるほど。かぶっちゃいけないのが特徴なんですね。あれ、じゃぁみんなが取りたいようなドメイン名は高かったりするんですか？
//}

//imagetalkl[mai_nutoral]{
そうだね。やっぱり見栄えのいいものはDNSサービスの料金設定次第で高かったりするね。しかも、まるかぶりはできないから基本的には取ったもん勝ちだね。
//}

//imagetalkr[akina_nutoral]{
取ったものがちですか。なんだかちょっと意外な闘争の片鱗を感じますね。
//}

//imagetalkl[mai_nutoral]{
案外身近なんだよね。プログラムの開発にどっぷりつかってると忘れそうになるけどね。
//}

===[mycolumn]おススメ書籍

図解即戦力 ネットワークのしくみと技術がこれ1冊でしっかりわかる本

//image[zukainetwork][][scale=0.5]

出版社  :  技術評論社

発売日  :  2022/5/18

ISBN-10  :  4297127938

ISBN-13  :  978-4297127930

おすすめポイント:ネットワークに関わる単語を個別に図表を添えて丁寧に解説している。章分けと解説順序によって、一から読んでも理解できるし、手帳のごとく思い出したいときに開くのにも適している。また、クラウドや無線通信のしくみの解説もありシンプルなインフラ知識以上の周辺知識を獲得できる。



===[/mycolumn]






#@# textlint-disable prh
== @<code>{git clone}
#@# textlint-enable prh

ではリポジトリのcloneを行いましょう。
次のコマンドをたたき、リポジトリのルートディレクトリへ移動します。

//cmd{
$ git clone https://github.com/at-grandpa/review-and-css-typesetting.git
$ cd review-and-css-typesetting
//}

個々人のリポジトリで使用する場合、cloneしたディレクトリ群をコピーして使用してください。

== 執筆するファイルの配置場所

執筆するファイルの配置場所は @<code>{./articles} 以下です。
このディレクトリ内は、Re:VIEWのファイル配置規則にしたがってください。
@<code>{review-init} で生成されるディレクトリを @<code>{./articles} に置き換えていただければ大丈夫です。
もし最初から執筆を行う場合は、このあとに説明するコマンド @<code>{make init} を叩いてください。
このコマンドは、@<code>{./articles} ディレクトリ内を初期化（@<code>{review-init articles}を実行した状態）するコマンドです。

== コマンドの使い方

主なコマンドを見ていきましょう。
次のコマンドはすべてリポジトリルートで実行するコマンドです。

 * @<code>{make setup}
 ** Re:VIEW+CSS組版環境の構築を行う
 * @<code>{make init}
 ** @<code>{./articles} 内を初期化する
 * @<code>{make pdf}
 ** PDFを生成する
 * @<code>{make browser}
 ** vivliostyleを用いてブラウザで開く
 ** デベロッパーール等でCSSの確認ができる
 * @<code>{make lint}
 ** textlint, prh によるlint
 * @<code>{make lint/fix}
 ** prh の自動修正

リポジトリのclone後は @<code>{make setup} を叩いて環境を構築します。
環境を構築したら、 @<code>{make pdf}, @<code>{make browser}, @<code>{make lint} などを使用して執筆していきます。

その他のコマンドについてはhelpを参照してください。
@<code>{make} とたたくか @<code>{make help} とたたくことでhelpを表示できます。

//cmd{
$ make help

    review-and-css-typesetting

    usage: make [command]

    help       ヘルプを表示
    args       デフォルトの変数を表示する
    setup      docker環境をセットアップする
    build      dockerイメージをbuildする
    up         dockerコンテナを立ち上げる
    clean      dockerコンテナを停止して削除する
    stop       dockerコンテナを停止する
    rm         dockerコンテナを削除する
    ps         dockerコンテナ一覧を表示する
    login      dockerコンテナ内にログインする
    init       ./article配下を削除して、review-initで./articlesを再生成する
    html       htmlを生成する (./articles/book.html)
    pdf        PDFを生成する (default: ./articles/book.pdf) (出力先変更: make pdf PDF=./hoge.pdf)
    browser    ブラウザで表示する (vivliostyle経由)
    lint       textlint, prhでlintをかける
    lint/fix   prhの指摘点を自動修正する

//}

== 執筆の流れ

続いて、具体的な執筆の流れを説明していきます。

=== @<code>{*.re} ファイルを書いていく

Re:VIEW記法で書く @<code>{*.re} ファイルは @<code>{./articles} ディレクトリに配置します。
このディレクトリの中に @<code>{catalog.yml} があるので、それに沿って書いていきます。
詳しくは、Re:VIEW本家のドキュメントを御覧ください。

=== ブラウザで内容を確認する

ある程度執筆したら、ブラウザで内容を確認しましょう。
@<code>{make browser} コマンドをたたくとブラウザで内容を確認できます（@<code>{open}コマンドでURLを叩いています。macOS限定です。環境によってMakefileを書き換えてください）。
vivliostyle経由で閲覧でき、Chrome DevTools などを用いればCSSの一時的な変更もできます。
微調整に最適です。

=== CSSを編集する

CSSファイルは @<code>{./articles/style.css} です。
このPDF生成の @<code>{style.css} は、vvakameさんのCSS組版リポジトリのファイルを参考にしています。
対象のhtmlは @<code>{./articles/book.html} です。
ブラウザでの確認をもとに、CSSファイルを編集していきましょう。
見た目の確認は @<code>{make browser} でもできますが、最終的にできあがるPDFとは若干デザインが異なるのでPDFの確認も行いましょう。

=== lintをかける

@<code>{make lint} でtextlintとprhを用いたlintをかけることができます。
デフォルトでは @<code>{./textlintrc} の設定を元にしています。
@<code>{preset-ja-technical-writing} や @<code>{period-in-list-item} のルールはすでにインストール済みです。
prhの設定に関しては、 @<code>{./prh-rules} ディレクトリに配置しています。
次のリポジトリを参考にさせていただきました。

 * https://github.com/prh/rules

適宜必要な設定に書き換えて使用してください。

=== PDFを生成する

PDF生成は @<code>{make pdf} コマンドです。
目次のリンクやURLのリンクも適用済みです。
@<code>{make browser} の結果とは若干異なるので、最終的なチェックはPDFで行いましょう。

=== circleciでPDF生成やlintをチェックする

@<code>{./.circleci/config.yml} にcircleciでの設定が書かれています。
lintとPDF生成を行っています。
必要であれば適宜書き換えてください。

=== フォントの埋め込みをする

印刷所に入稿するときは、PDFにフォントを埋め込まなければいけません。
自動で埋め込みができているとよいのですが現状できていません。
macOSの場合は @<code>{プレビュー.app} を用いて再度PDFに書き出すことでフォント埋め込みが可能です。
他の環境の方は、フォントの埋め込み方を調べて実施してください。

== ちょっとした注意点

自分自身が陥った罠なのですが、「デザインに凝ると時間が無限に必要」です。
まずは内容を完成させましょう。
最悪、デザインはシンプルでも内容が充実していれば伝わります。
逆に、デザインが良くても内容が不十分だと読者はがっかりします。
この順番は間違えないようにしてください。
#@# textlint-disable
（自分にも言い聞かせよう。。。）
#@# textlint-enable

= 独自設定の説明

//imagetalkl[grandpa]{
だいたいわかったかの？
//}

//imagetalkr[mago]{
うん！わかったー！だけど、デザインに凝りすぎるのもよく無いね。気をつけよー。
//}

//imagetalkl[grandpa]{
そうじゃな。あくまでも内容が一番大切じゃ。
//}

//imagetalkr[mago]{
次はなんの説明なの？
//}

//imagetalkl[grandpa]{
次は、このリポジトリの独自設定の説明じゃ。Re:VIEWの拡張など、少し特殊なことをやっておる。その説明をするぞい。
//}

//imagetalkr[mago]{
はーい！
//}

//pagebreak

さて、次はグランパのいうとおり「このリポジトリの独自設定」を説明します。
編集の参考にしてみてください。

== 大扉のデザイン

大扉のデザインは、自分のCSS力では難しかった（CSSだけで表現できなかった）ので、Rubyのライブラリ @<code>{Nokogiri} を用いてhtmlを編集しています。
@<code>{in_docker.mk} の次の部分がhtml生成箇所です。

//emlist[][]{
html:
	cd articles/ && \
		review-epubmaker config.yml && \
		review-epub2html book.epub | \
		bundle exec ruby ../scripts/html-ext.rb > book.html
//}

 * @<code>{config.yml} をもとにepubを生成
 * @<code>{review-epub2html} でepubをひとつのhtmlに変換
 * @<code>{./scripts/html-ext.rb} を通してhtmlタグを修正
 * htmlに出力

必要なhtml要素が準備できたら、後はCSSを編集するだけです。
@<code>{./articles/style.css} も参考にしてみてください。

また、これらのデザインを決める際は @<code>{make browser} を用いてブラウザに表示し、CSSを直接いじって試行錯誤を繰り返しました。

== 目次のデザイン

これも大扉の場合と同じです。
@<code>{./scripts/html-ext.rb} を用いて目次部分に必要なhtmlタグを追加し、CSSでデザインを適用しています。

== 見出しのデザイン

こちらは純粋にCSSだけで実現しています。
生成される @<code>{./article/book.html} の中身をみて、いろいろ試行錯誤しました。
お好きな形に変更していただいてかまいません。

== 「コラム」や「問題」「答え」のデザイン

「コラム」や「問題」「答え」のデザインは、Re:VIEWの公式の拡張 @<code>{./articles/review-ext.rb} を使っています。
拡張に関しては、次の「Re:VIEW のモンキーパッチによる拡張の基本」と @<code>{./articles/review-ext.rb} を参考にしてください。

 * Re:VIEW のモンキーパッチによる拡張の基本
 ** https://review-knowledge-ja.readthedocs.io/ja/latest/reviewext/review-ext-basic.html

拡張したコマンドによって生成されたhtmlに対し、CSSを適用しています。
もちろん、色やマージンなどの微調整も可能です。

===[mycolumn] コラム

//emlist[]{
===[mycolumn] コラム

こんな感じでコラムを書いています。

===[/mycolumn]
//}

==== 見出しも書けます

見出しも書けていますね。

===[/mycolumn]

===[question] 問題

これは問題です。次のように書いています。

//emlist[]{
===[question] 問題だよ

これは問題です。以下のように書いています。

===[/question]
//}

キャプションの文字列は「問題だよ」のように任意の文字列を設定できます。

===[/question]

===[answer] 答えだよ

これは答えです。「問題」と同様、キャプションの文字列は自由に設定できます。

//emlist[]{
===[answer] 答えだよ

これは答えです。「問題」と同様、キャプションの文字列は自由に設定できます。

===[/answer]
//}

//cmd{
$ sw_vers | grep Product
ProductName:    Mac OS X
ProductVersion: 10.13.6

$ docker -v
Docker version 18.09.1, build 4c52b90

$ docker-compose -v
docker-compose version 1.23.2, build 1110ad01

$ make -v
GNU Make 3.81
//}


===[/answer]

//pagebreakforce

== 吹き出しのデザイン

//imagetalkl[grandpa]{
左側の吹き出しじゃ。
//}

//imagetalkr[mago]{
右側の吹き出しだよー！
//}

//imagetalkl[grandpa]{
長文にも対応しておるぞ。長文にも対応しておるぞ。長文にも対応しておるぞ。長文にも対応しておるぞ。長文にも対応しておるぞ。長文にも対応しておるぞ。長文にも対応しておるぞ。長文にも対応しておるぞ。長文にも対応しておるぞ。長文にも対応しておるぞ。長文にも対応しておるぞ。長文にも対応しておるぞ。
//}

//imagetalkr[mago]{
改行にも対応しているよ！
改行にも対応しているよ！
改行にも対応しているよ！
改行にも対応しているよ！
改行にも対応しているよ！
//}

前回の技術書典にて頒布した本で、一番やりたかったことです。
こちらもRe:VIEWの公式の拡張 @<code>{./articles/review-ext.rb} を使っています。
次の独自コマンドを作成し、 @<code>{.re} ファイルで使用しています。

 * @<code>{imagetalkl（image-talk-left）}
 * @<code>{imagetalkr（image-talk-right）}

@<code>{*.re} ファイルで使用している箇所があるので探してみてください。

//pagebreakforce

ひとつ注意点があります。
RE:VIEWでは、同じ画像ファイルを複数回使うと「警告：画像IDが重複しています」と出力されます。

//cmd{
WARN: warning: duplicate ID: grandpa (#<ReVIEW::Book::ImageIndex::Item:0x0055e62fb5fd18>)
WARN: warning: duplicate ID: grandpa (#<ReVIEW::Book::ImageIndex::Item:0x0055e62f52ef20>)
WARN: warning: duplicate ID: mago (#<ReVIEW::Book::ImageIndex::Item:0x0055e62f52edb8>)
WARN: warning: duplicate ID: grandpa (#<ReVIEW::Book::ImageIndex::Item:0x0055e62f52ec28>)
WARN: warning: duplicate ID: mago (#<ReVIEW::Book::ImageIndex::Item:0x0055e62f52ea98>)
//}

最終生成物には影響はありませんでした。
気になる方はPRをいただけると幸いです。

= やりたかったこと

//imagetalkr[mago]{
Re:VIEW+CSS組版環境！これ完璧じゃん！
//}

//imagetalkl[grandpa]{
ふむー、実はそうでもないんじゃよ。
//}

//imagetalkr[mago]{
えー！そうなの？？
どのあたり？
//}

//imagetalkl[grandpa]{
そうじゃなぁ。ちょっと話そうかのう。
//}

//pagebreak

== 「柱」に章・節を表示したい

各ページの上部に、章や節の見出しの文字列が表示されます。
これを「柱」と言います。
現状では「Re:VIEW+CSS組版環境構築」と表示されています。
これは @<code>{style.css} にハードコーディングされています。
使い回す際は書き換えてください。

この柱には、章・節を表示したいです。
CSSの機能で表示できるかと思っていましたが、なかなかうまくできませんでした。

== CSSをいい感じにしたい

@<code>{./articles/style.css} にべた書きしています。
CSS周りの知識が乏しいので、現状だとこのようになっています。
もっと扱いやすくできるはずですので、適宜アップデートしていきます。

== フォントを豊富にしたい

フォント周りの知識も乏しいので、自由に入れられる環境になっていません。
現在はそれっぽいフォントを選択していますが、もっと自由度を上げていきたいです。

== 脚注をいい感じにしたい

脚注に関してはノータッチです。
もしうまくできた方は、ご一報ください。


//pagebreak
//pagebreak

このように、やりたいことはまだまだたくさんあります。
時間に余裕があった場合は、適宜アップデートしていく予定です。
#@# textlint-disable
（あまり期待はしないでください。。。）
#@# textlint-enable

= テストページ

//imagetalkr[mago]{
テストページって何？
//}

//imagetalkl[grandpa]{
ここは、動作確認のために使うページじゃぞい。
//}

//imagetalkr[mago]{
へー。何の動作確認なの？
//}

//imagetalkl[grandpa]{
コードの埋め込みやPlantUMLの描画などじゃ。
//}

//imagetalkr[mago]{
ふーん。
//}

//pagebreak

== コードの埋め込み

Re:VIEWには外部ファイルを埋め込む機能があります。

//emlist[コードの埋め込み][crystal]{
#@mapfile(../code/sample.cr)
class Foo
  def display(str : String)
    puts str
  end
end

foo = Foo.new
foo.display("Hello!!") # => Hello!!
#@end
//}

このコードは @<code>{./code/sample.cr} に書かれているものです。
@<code>{review-preproc --replace *.re} のコマンドを実行し、 @<code>{*.re} 内に書かれている @<code>{@mapfile} 命令を置換します。

== PlantUML

Re:VIEWは @<code>{glaph} 命令でPlantUMLを描画できます。
次のコードを @<code>{glaph} 命令に書くことで、次のような図を埋め込むことができます。

//list[sample_uml_code][PlantUMLのコード]{
@startuml
Foo .r.> Bar

class Foo {
    + display() : Nil
}

class Bar {
    + display() : Nil
}
@enduml
//}

//graph[sample_uml_graph][plantuml][PlantUMLの描画]{
@startuml
Foo .r.> Bar

class Foo {
    + display() : Nil
}

class Bar {
    + display() : Nil
}
@enduml
//}

この他、できることが分かり次第、随時追加していきます。
