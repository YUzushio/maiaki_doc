
= 良いプログラムの作り方

//imagetalkl[mai_nutoral]{
さてさて、ここまでウォーターフォール、アジャイルときてXPの説明をしたんだけど、あきなちゃんに聞きいておきたいことがあるんだ。
//}

//imagetalkr[akina_nutoral]{
はい、なんでしょう？
//}

//imagetalkl[mai_niko]{
良いプログラムとはなにか？
//}

//imagetalkr[akina_eee]{
はぇ！？
//}

//imagetalkl[mai_ahaha]{
何かない？なんでもいいよ？
//}

//imagetalkr[akina_ettu]{
えぇ～と、読みやすい？
//}

//imagetalkl[mai_niko]{
そうだね！大切だ。他には?
//}

//imagetalkr[akina_komari]{
改変しやすい
//}

//imagetalkl[mai_dahaha]{
うんうん！大事だね！他には？
//}

//imagetalkr[akina_komari]{
軽い？
//}

//imagetalkl[mai_niko]{
重くて動かなかったら最悪だもんね！他には？
//}

//imagetalkr[akina_ugee]{
う～ん、思い浮かばないです。
//}

//imagetalkl[mai_niko]{
OK、じゃ私が考えていることを教えよう。それは
保守性の高さ
省力性の高さ
信頼性の高さ
移植性の高さ
だ。保守性とは読みやすさや書きやすさ、省力性は軽かったり早かったりすることだね。
//}

//imagetalkr[akina_ettu]{
信頼性って、どうやって計るんですか？
//}

//imagetalkl[mai_nutoral]{
テストの数と質。これでどんな動きがあって、どういう使い方をしたらどういう結果が出るかを保証する。保証範囲が広く、入り組んだケースであっても保証が行き届いていることが重要だね。
//}

//imagetalkr[akina_ooo]{
なるほど、移植性ってなんですか？
//}

//imagetalkl[mai_nutoral]{
移植性は他のプロジェクトなどにコードを移植しやすいかどうかの評価だね。依存しているライブラリが特定のネットワークでしか手に入らない場合なんかは移植性が低いと言わざるを得ないね。
//}

//imagetalkr[akina_ooo]{
なるほど、再利用ってことですか。
//}

//imagetalkl[mai_nutoral]{
そう。だけどそれ以外にも問題を再現をしたいといったときにもこの移植性がネックになることもあるよね。
//}

//imagetalkr[akina_hee]{
同期の子が「問題再現できる環境がない！！」って困っていましたけど、そういうことなんですね。
//}

//imagetalkl[mai_niko]{
そうそう。いろいろ困ることが多いからね。作る時に意識しなきゃいけないんだよねぇ。じゃあ、いまから保守性、省力性、信頼性、移植性について見ていこう！
//}

== 保守性の高いプログラム

//imagetalkr[akina_ettu]{
そもそもなんですけど、読みやすいプログラムってどういうものを指すんですか？言語を詳しく知らないと読みづらいのか自分の知識が足りないのかわからないと思うんですけど。
//}

//imagetalkl[mai_niko]{
いい着眼点だね。じゃあ読みやすく書きやすいプログラムとは何か、いくつかの項目に分けて考えていこう
//}

=== 読みやすく書きやすいプログラム

//imagetalkl[mai_nutoral]{
まず最初にコードの読みやすさと言語仕様によるコードの特殊な書き方は分けて考えよう。
//}

//imagetalkr[akina_ettu]{
分けると言うと？
//}

//imagetalkl[mai_nutoral]{
そもそもコードは各言語仕様によってクラスの書き方や変数の定義の仕方が違う。もちろんそれは特殊なほど読みづらいと感じるし普遍的なほど読みやすいと感じる。だけど言語ごとに違う特徴はその言語がどういうケースで用いられるかということまで遡る必要があるので言語仕様の違いによる読みにくさ読みやすさというものは一旦は自分の中で飲み込むことにしよう。
//}

//imagetalkr[akina_ooo]{
なるほど。 じゃあどんなものを読みやすいプログラムとするんですか？
//}

==== わかりやすく、短く、無駄がない

//imagetalkl[mai_nutoral]{
大原則として考えられるのが「わかりやすい」「短い」「無駄がない」の三拍子がそろったコードだ。
//}

//imagetalkr[akina_nutoral]{
「わかりやすい」は「読みやすい」と違うんですか？言葉遊びでズルしてる気がします・・
//}

//imagetalkl[mai_nutoral]{
その気持ちはよくわかる。もう少し踏み込んで言うと「目的と手段が明確に結びつけやすい」っていうのが正しいかもね。
//}

//imagetalkr[akina_nutoral]{
なるほど、それなら納得です。
//}

//imagetalkl[mai_nutoral]{
それでもって、短くて、無駄がないコードを目指すべきってことだね。
//}

//imagetalkr[akina_nutoral]{
その二つも同じ意味なんじゃないですか?
//}

//imagetalkl[mai_nutoral]{
うー－ん、一番ピンとくるのは一通りのやりくりは短いけど、そのせいで逆に無駄な変数が多い場合かな。
//}

//imagetalkr[akina_nutoral]{
そんなことがあるんですか？
//}

//imagetalkl[mai_nutoral]{
まぁいつかあきなちゃんも出会うよ。見た目の短さのためだけに遠回りなことしてるコードに。
//}

//imagetalkr[akina_nutoral]{
気を付けます。でも、そういう時はどうしたらいいんですか？
//}

//imagetalkl[mai_nutoral]{
まず、読む側のわかりやすさを優先する。その次に原則は短さを優先するけどそれが「無駄のなさ」と衝突する場合は「無駄のなさ」を優先しよう。
//}

//imagetalkr[akina_nutoral]{
なるほど、わかりました。わかりやすさが一番なんですね。
//}

//imagetalkl[mai_nutoral]{
うん、そうしよう。あと、「無駄のなさ」については一旦「同じコードを複数個所に書かない」と考えよう。
//}

//imagetalkr[akina_ettu]{
それだけですか?
//}

//imagetalkl[mai_nutoral]{
「無駄のなさ」にはいろんな観点があるから、今はそれだけ覚えてもらえるといいと思う。後々、沢山出てくるよ。まぁそれは一旦置いといて、「わかりやすさ」が最優先だ。そしてそのためにはコードコメントを残すことを習慣化しよう。
//}

==== コードコメント

//imagetalkr[akina_ettu]{
コードコメントですか？
//}

//imagetalkl[mai_nutoral]{
うん、そう。プログラム本体には影響しないけどコードの文面に残るメッセージのことだね。
//}

//imagetalkr[akina_hee]{
あーなんかシャープとかスラッシュが二つとかついてるやつですね
//}

//imagetalkl[mai_niko]{
そうそう！それをどんどん書いていこうっていう話だ。
//}

//imagetalkr[akina_komari]{
なんかめんどくさそうなんですけど。
//}

//imagetalkl[mai_tohoho]{
そうだね面倒くさいね。でもこれが案外重要なんだよね。
//}

//imagetalkr[akina_ettu]{
そのコードコメントは英語で書いたほうがいいんですか？プログラムは英語ですし。
//}

//imagetalkl[mai_nutoral]{
プロジェクトに英語話者がいる場合は英語がいいね。そうでなければ日本語で書こう。
//}

//imagetalkr[akina_ooo]{
なんかかっこ悪い気がしますけど日本語なんですね。
//}

//imagetalkl[mai_nutoral]{
うん、そう。私の過去のプロジェクトでは翻訳をかけた英語を貼ったコメントが結局英語話者にも日本人にも伝わらなくて何をやってるかわからないっていうことがあったからね。
//}

//imagetalkr[akina_ugee]{
うわーそれ地獄ですね。
//}

//imagetalkl[mai_tohoho]{
大変だったんだから。だから絶対日本語、日本人だけのチームならね。
//}

//imagetalkr[akina_nutoral]{
わかりました。コードコメントに関しては分かったんですけどプログラム本体には何かないんですか？
//}

==== キャメル、スネーク、ケバブ

//imagetalkl[mai_nutoral]{
最も普遍的なルールは命名規則だね。
//}

//imagetalkr[akina_nutoral]{
もしかして、大文字とかアンダーバーの話ですか。
//}

//imagetalkl[mai_niko]{
そうそう。変数や関数の名前をつける時に「SampleObject」のように単語の先頭を大文字にして書くことをキャメルケース、「sample_object」のように単語と単語の間をアンダーバーで区切るのスネークケース、「sample-object」のように単語と単語の間をハイフンで区切るのをケバブケースっていうんだ。
//}

//imagetalkr[akina_ettu]{
ケバブケースというのは初めて聞きました
//}

//imagetalkl[mai_nutoral]{
串焼きに似てるからっていう理由でケバブって言うらしいね.
//}

//imagetalkr[akina_nutoral]{
ケバブってお祭りで見たことある気がします。長い串にお肉が何層も積まれてるやつ。
//}

//imagetalkl[mai_ahaha]{
そうそうああいう感じのやつ！まあそれだけじゃなくて日本の串焼きとかの方が近いんだけどね。
//}

//imagetalkr[akina_nutoral]{
私、仕事とかでケバブケースっていうのはあんまり見てないです。
//}

//imagetalkl[mai_nutoral]{
まあ私も見ないし日本の現場では珍しいんじゃないかな。
//}

//imagetalkr[akina_ettu]{
ちなみにですけどまいさんはキャメルケースとスネークケースどっちが好きですか？
//}

//imagetalkl[mai_nutoral]{
私はキャメルケースだね。なんでかって言うと今使ってるフレームワークがキャメルケースだからかな。
//}

//imagetalkr[akina_ooo]{
もしかしてプロジェクトごとに好みが変わったりしますか？
//}

//imagetalkl[mai_nutoral]{
触る言語やフレームワークがどちらかに偏ってると数年単位で推しが変わることはあるね。
//}

//imagetalkr[akina_ooo]{
推し・・・ですか。
//}

//imagetalkl[mai_niko]{
そう推し。結局統一されてればどっちでもいい気もするしね。
//}

//imagetalkr[akina_nutoral]{
混ざってなければいいということでいいですか？
//}

//imagetalkl[mai_niko]{
一旦はそれでいいと思うよ。プロジェクトのルールに従ってプロジェクト内で統一していこう。
//}

//imagetalkr[akina_niko]{
わかりました。
//}

==== 英語、ローマ字、日本語

//imagetalkl[mai_nutoral]{
あきなちゃんはこんな変数名見たことあるかな?「ShukuhakuKakuteiShisetsu」
//}

//imagetalkr[akina_ugee]{
うぇ、、ないです。なんですかこれ、宿泊確定施設?旅行予約のデータか何かですか？
//}

//imagetalkl[mai_nutoral]{
そうそう、予約プランの中ですでに宿泊が確定している施設のみを表したい時に作られた変数。私が実際プロジェクトで見た現物だ。
//}

//imagetalkr[akina_eee]{
ネーミングセンスがひどくないですか？
//}

//imagetalkl[mai_niko]{
そう思うよね。じゃあ今回はこれをどういう名前にすればいいかを考えていこう。 
//}

//imagetalkr[akina_nutoral]{
英語にしちゃえばいいんじゃないですか？ReservedFacilitiesとか
//}

//imagetalkl[mai_ahaha]{
お、いいね。じゃあ予約データの中には宿泊ではないけど利用が確定している施設があるとしよう。どちらも使い分けたい場合、さっきの名前でいいかな?
//}

//imagetalkr[akina_komari]{
うー－んと、宿泊はStayかな・・・
//}

//imagetalkl[mai_nutoral]{
ネットで調べると「Lodging」って出てくるね
//}

//imagetalkr[akina_nutoral]{
じゃあ「LodgingReservedFacilities」かな、いや長いな。気持ち悪いです。いや、そもそも「Facilities」が要らないから「ReservedLogging」か。
//}

//imagetalkl[mai_nutoral]{
じゃあさらに追加で宿泊施設内の特殊施設の利用情報の定義も必要になったとしよう。ジムとかプールとかのイメージだね。
//}

//imagetalkr[akina_komari]{
「LodgingReservedFacilitesSpeciality」とかですか？うう嫌だ。せめて「LodgingReserved」と「FacilitySpeciality」を別テーブルとかオブジェクトにしたい・・・
//}

//imagetalkl[mai_nutoral]{
さらにここで「予約が確定しているわけではないけど予約プランに入れいている施設」を一次的に保存する必要があるって要望が来た。どうする？
//}

//imagetalkr[akina_eee]{
え？予約の英語は・・・Reservedってうわー－！確定と予約でかぶるー－！
//}

//imagetalkl[mai_dahaha]{
あっはは！やっぱそうなるよね！みんな同じことになるね！
//}

//imagetalkr[akina_doshite]{
いやこの流れ確定だったんですか。ひどくないですか？
//}

//imagetalkl[mai_niko]{
いやいや、話で聞くより自分で味わった方がわかりやすいかと。
//}

//imagetalkr[akina_ettu]{
それはそうですけど・・・・
//}

//imagetalkl[mai_nutoral]{
日本語の予約と、確定ってニュアンスを英語で表現するのって難しいよね？
//}

//imagetalkr[akina_nutoral]{
英語が喋れたなら別ですけど、今の私では難しいです。
//}

//imagetalkl[mai_nutoral]{
日本人で英語ネイティブレベルなんてそうそうないからね。逆にネイティブ同士で伝わっても私たちにつたわらなかったら意味ないよね。
//}

//imagetalkr[akina_komari]{
そうですね。でも「ShukuhakuKakuteiShisetsu」は嫌だー。長いー。
//}

//imagetalkl[mai_dahaha]{
あっはっは！私も嫌だねぇ。ちなみに変数名を日本語にすることもできるよ。
//}

//imagetalkr[akina_ettu]{
へ！？そうなんですか？
//}

//imagetalkl[mai_niko]{
うん。結構多くの言語でサポートしてるね。英単語がプログラミングが英語話者にとってナチュラルなことを考えたら、我々もナチュラルな言語で変数を考えてもいいかもしれない。
//}

//imagetalkr[akina_ooo]{
なるほど・・・日本語、コード内で使えるんですね。私は見たことありませんが、まいさんはありますか？
//}

//imagetalkl[mai_ahaha]{
あるよ！みんなウキウキで実装してたけどある日突然問題が発覚してね。データベース接続を担うコードで大事件が起きたんだ。
//}

//imagetalkr[akina_ettu]{
データベースで？
//}

//imagetalkl[mai_uun]{
そう、使用していたデータベースではプログラムのオブジェクトに対応するはずのテーブル名に日本語が使えなかったんだ。
//}

//imagetalkr[akina_eee]{
ひぇー－！
//}

==== プロジェクトワード集

//imagetalkl[mai_nutoral]{
ということもあり、その後の旅行関係のプロジェクトで出てきた案がこれ「ShukhkKaktiShists」
//}

//imagetalkr[akina_ettu]{
え？なんですかこれ、Shukuhakuの二個目以降の母音を抜いたやつ?「確定」も「施設」も二個目以降の母音が抜けてる。
//}

//imagetalkl[mai_nutoral]{
そうそう、ほかに出てこなさそうな子音の並びと一個目の母音だけ残して略称を使う方法だね。
//}

//imagetalkr[akina_eee]{
確かに短くはなりましたけど、これじゃ初めて見た人はわからないですよ。
//}

//imagetalkl[mai_nutoral]{
そうだよね。ってことで私のプロジェクトでは、略称ローマ字表記を用いつつプロジェクト着任時の初回研修で必ずこの略称を含めたプロジェクトワード集を読ませることにした。オンラインでチーム全体が見える形でね。
//}

//imagetalkr[akina_ooo]{
まぁ・・・前もって説明があるならまだ・・・
//}

//imagetalkl[mai_tohoho]{
ちなみに同じ略称使ってるけどプロジェクトワード集を作ってない話はたくさん聞く。
//}

//imagetalkr[akina_eee]{
それは嫌だー！
//}

//imagetalkl[mai_uun]{
ワード集を作っててもビジネスパートナーのメンバーには見れない場所に保管してるチームもある。
//}

//imagetalkr[akina_ugee]{
もうやめて！プログラマーのライフはゼロです！！！
//}

//imagetalkl[mai_dahaha]{
あっはっは！ひどい話だよねぇ！！まぁ、そんな過去の地獄は置いといて、結局はメンバーがわかりやすく、なるべく短い名前付けがいいよね。
//}

//imagetalkr[akina_nutoral]{
わかりやすくするためのワード集を作るのはアリと
//}

//imagetalkl[mai_niko]{
そうそう！むしろ略称が必要ないとしてもお客さんごとに専門分野の単語とか概念とかあるからワード集は必須だよね！
//}

//imagetalkr[akina_nutoral]{
必須ですね。
//}

//imagetalkl[mai_niko]{
もし参加したプロジェクトになかったらあきなちゃんが作ってあげてね。
//}

//imagetalkr[akina_eee]{
えええ！？はじめて入った分野なんて全然わかんないですよ！？
//}

//imagetalkl[mai_nutoral]{
お客さんに一つ一つ聞きながら作るのだ。そしてそれは必ず自分の糧になる。
//}

//imagetalkr[akina_ugee]{
頑張り損な気がします・・・
//}

//imagetalkl[mai_niko]{
その分のちの残業が減ると思えば！
//}

//imagetalkr[akina_iyaa]{
うう・・善処します。
//}

===[mycolumn]おススメ書籍

リーダブルコード ―より良いコードを書くためのシンプルで実践的なテクニック

//image[readablecode][][scale=1]

出版社  : オライリージャパン; 初版八刷 (2012/6/23)

発売日  :  2012/6/23

ISBN-10  :  4873115655

ISBN-13  :  978-4873115658

おすすめポイント：読みやすく書きやすいプログラムを書くことを目指すプログラマにとってのバイブル。自らのコーディングに疑問を持った際に真っ先に確認すべき数々の視点が書かれている。何度も読み返すことでそのたびごとに新たな視点に気づける点でも手元に置く価値のある一冊。



===[/mycolumn]

=== 変更しやすいプログラム

//imagetalkl[mai_nutoral]{
では次、変更しやすいプログラムについてだ。
//}

//imagetalkr[akina_nutoral]{
読みやすさ、書きやすさとは違うんですよね？
//}

//imagetalkl[mai_nutoral]{
うん。むしろその二つを前提にしたプログラムだね。最も代表的な例でいうと

1. 変数の定数化
2. 関数定義の抽象化
3. クラス定義の抽象化

の3つだ。
//}


==== 変数の定数化

//imagetalkr[akina_nutoral]{
変数の定数化ってなんですか？java でいうconstとかfinal句を使えってことですか？
//}

//imagetalkl[mai_nutoral]{
部分的にそうだね。まぁ詳しく言うと

プログラム内で同値で頻出する変数は定数に定義する
複数プログラム間で同値で頻出する変数は参照可能な外部定数にする

の二つを考えよう。
//}


//imagetalkr[akina_nutoral]{
	「プログラム内で同値で頻出する変数は定数に定義する」は納得です。私も一年間よく指摘されましたし自分でもできるようになってきていると思います。
//}

//imagetalkl[mai_niko]{
いいね、複数プログラムの方はどうだろう。Javaだと列挙型っていう形にされるのが多いね。
//}

//imagetalkr[akina_ooo]{
列挙型ならわかります。なるほど、複数プログラム間で定数を扱うための物だったんですか。
//}

//imagetalkl[mai_nutoral]{
それだけではないけどとても大きな役目だね。で、定数化をすることで中身の変数がプロジェクト全体で変える方針になった場合も変更箇所がとても少なくて済む。むしろ複数個所を直す余裕なんてプロジェクトにはそもそもない。もっと致命的な問題を解決させるために予備時間は使われるべきだ。
//}

//imagetalkr[akina_nutoral]{
でも、みんなが使う定数の場所っていろんなものが置かれちゃったりしないですか？
//}

//imagetalkl[mai_nutoral]{
そうだね。そこで定数管理をする人を決めて、プロジェクトワード集と照らし合わせながらプロジェクト全体に影響する定数を決定・周知させていく。
//}

//imagetalkr[akina_nutoral]{
なるほど。管理人がいたら相談しやすいですね。
//}

//imagetalkl[mai_nutoral]{
負担が集中するから当番制でもいいかもね。
//}

//imagetalkr[akina_nutoral]{
たしかに。機会があったら提案してみます。
//}


==== 関数定義の抽象化

//imagetalkl[mai_nutoral]{
変更しやすいプログラムを作る方法の2つ目が関数定義の抽象化だ。
//}

//imagetalkr[akina_nutoral]{
抽象化・・・ですか。うまくイメージできません。
//}

//imagetalkl[mai_nutoral]{
簡単に言うと、使い勝手を良くするってことだね。
//}

//imagetalkr[akina_nutoral]{
うー－ん、それってプログラマは常に考えていることなんじゃないですか？
//}

//imagetalkl[mai_niko]{
そうだね。じゃもう一歩踏み込んで説明すると。「いくつかのパターンの入力の組み合わせでも動作するものを作る」だね。
//}

//imagetalkr[akina_nutoral]{
なるほど、それが「使い勝手の良さ」ですか。
//}

//imagetalkl[mai_nutoral]{
そう、いくつかの変数を入力として使用するけど状況によっては一部の変数が用意できないことがある。それでも「機能としては同じものを使いたい」という場合にこの設計をしているかどうかで使い勝手が大きく違う。下手をすると同じ機能を達成するのにいくつも似たようなコードの関数が乱立するなんてことになっちゃう。
//}

//imagetalkr[akina_ooo]{
そういうコード、読んだら混乱しそうです。
//}

//imagetalkl[mai_uun]{
さらに計算ロジックを変えてくれって言われて修正することになったら地獄だよね。
//}

//imagetalkr[akina_ugee]{
地獄です。
//}


//imagetalkl[mai_nutoral]{
しかも一部は名前と入力変数がが似てるだけで別の用途に使ってる関数でした、なんてこともある。
//}

//imagetalkr[akina_komari]{
もう直さずに新しい関数つくっちゃいたくなります
//}

//imagetalkl[mai_nutoral]{
だよね。まぁそんなことにならないために。同じ用途であれば複数の入力変数のパターンに対応できる書き方をするべきだ。
//}

//imagetalkr[akina_niko]{
納得です！
//}

//imagetalkl[mai_uun]{
まぁ、Javaはほかの言語に比べてこの書き方はめんどくさいんだけどね。
//}

//imagetalkr[akina_eee]{
えぇ!?うそぉ！
//}

//imagetalkl[mai_niko]{
ちょっとだけ、だけどね。
//}

//imagetalkr[akina_nutoral]{
むしろほかの言語は簡単なんですか？
//}

//imagetalkl[mai_nutoral]{
そうだね。PythonもJavaScriptも関数の引数にデフォルト値を設定できて、デフォルト値が設定されている関数であれば少ない引数分は自動で補完して関数実行してくれるよ。
//}

//imagetalkr[akina_nutoral]{
便利そうですね。
//}

//imagetalkl[mai_nutoral]{
まぁJavaScriptは型を意識しない書き方ができる反面、コードの解読が難しくなりがちなんだけど。
//}

//imagetalkr[akina_nutoral]{
長所短所があるんですか。
//}

//imagetalkl[mai_nutoral]{
そうだね、JavaScriptはとくに。JavaScripptに型を意識させた形のTypeScriptなら負の影響は少ないけどね！
//}

//imagetalkr[akina_nutoral]{
なるほど、TypeScript・・・勉強してみます！
//}


==== クラス定義の抽象化

//imagetalkl[mai_niko]{
OK!次は「クラス定義の抽象化」だ。
//}

//imagetalkr[akina_ooo]{
これも関数定義の抽象化と同じなんですか？
//}

//imagetalkl[mai_nutoral]{
これもまた部分的にそう、って感じだね。４割くらいかな。
//}

//imagetalkr[akina_ettu]{
あと6割もあるんですか。
//}

//imagetalkl[mai_nutoral]{
うん、じゃあ見ていこう。まずはさっきの関数の抽象化に近いけど、クラスのコンストラクタの入力の種類が異なるパターンについてだ。これもJavaならオーバーロード、PythonやJavaScriptならデフォルト値が使えるね。
//}

//imagetalkr[akina_nutoral]{
クラスインスタンスの生成の引数にパターンがあることがあるんですか？
//}

//imagetalkl[mai_nutoral]{
例えばWebサイトのGUIとかを考えてみよう。ECサイトがいいかな。お店側が新しい商品の投稿をしたいときに、最初から割引設定を作ることもできるし、後から割引設定を追加できるようにしたい。そうなった場合に商品投稿データのコンストラクタ引数に割引設定が必須な設計をしていたら、割引設定なしの登録ができなくなってしまうかもしれないよね。
//}

//imagetalkr[akina_nutoral]{
んーそれは割引設定を空文字列にして渡すことで解決できる気がしますが
//}

//imagetalkl[mai_nutoral]{
割引設定が条件や割引値などの細かいパラメータを持つ独自のクラスならどうだろう。
//}

//imagetalkr[akina_ugee]{
うっ・・・それは・・・たしかにコンストラクタに何かしら指定された情報があってほしいですね。
//}


//imagetalkl[mai_nutoral]{
そうだよね。割引設定のクラスの型でありながらデフォルト値はnull、入力される場合はそのクラスを入れる。もしくはその引数の無い形のコンストラクタをつくる。その方がきれいだよね。
//}

//imagetalkr[akina_hee]{
はい。そっちの方がいいと思います。
//}


//imagetalkl[mai_niko]{
OK、そんなこんなでコンストラクタに関する抽象化の話をしたわけだけど、コンストラクタ以外にも抽象化すべきものが沢山ある。
//}

//imagetalkr[akina_nutoral]{
複数の関数があってこそのクラスですもんね。
//}

//imagetalkl[mai_nutoral]{
そうそう。じゃあさっきの割引設定の話をもってこよう。一日に一回、商品の割引設定を参照して、割引期間が過ぎたものを商品の割引設定から削除したい。どうやって実装しようか。
//}

//imagetalkr[akina_nutoral]{
商品クラスに割引設定を削除する関数を作ります。その関数は多分ECサイトのサーバー側が日時指定で各クラスごとに実行することになると思います。あれ、でもそれサーバーの負荷が大変なことに・・・
//}

//imagetalkl[mai_niko]{
OK、一旦サーバー負荷や実現可能性の話は置いておこう。クラス定義の抽象化に集中したいからね。ここで追加の質問。実はさっきまで言っていた商品は実はサブスクリプション商品と買い切り商品が別々のクラスになっていた事実を知らされたとしよう。さっきまで触っていたのは買い切り商品専用のクラスだった。
//}

//imagetalkr[akina_eee]{
ええ？後出しでずるいですよ。でも、別のクラスならそれぞれのクラスに同じ関数を作って・・・いや気持ち悪いですね。同じコードが複数にあるの。
//}


//imagetalkl[mai_nutoral]{
そうだよね。こういう場面で使われるのが抽象クラスだ。
//}

//imagetalkr[akina_ooo]{
あ、なんか聞いたことがあります。
//}

//imagetalkl[mai_niko]{
いいね。今のでいえば改めて商品というような抽象クラスを作り、そこに割引設定削除を含めた共通の処理を書いておくんだ。そうすれば一か所でコードを管理できて変更の手間もない。
//}

//imagetalkr[akina_nutoral]{
なるほど。大切ですね。
//}

//imagetalkl[mai_nutoral]{
じゃあもう一歩踏み込もう。今のはお店側の視点でデータを考えたけど当然お客さんもそのサイトを見るわけだ。
//}

//imagetalkr[akina_nutoral]{
はい。
//}

//imagetalkl[mai_nutoral]{
商品を登録したんだからお客さんからも商品データが見えて当然だよね。
//}

//imagetalkr[akina_nutoral]{
そうです。
//}

//imagetalkl[mai_nutoral]{
決済確認ページでも商品は見えたほうが安心するよね。
//}

//imagetalkr[akina_nutoral]{
はい。そっちの方がいいです。
//}


//imagetalkl[mai_nutoral]{
でもここでプログラマーにとって問題が起きた。決済対象の商品を扱うクラスと普段の商品を提示する時のクラスに共通な処理がほとんどない。むしろ変数の数も違うしほとんど別物が必要になってしまった。でも、決済画面で商品名や画像、出店者も確認したい。こんな時にどうするか。
//}

//imagetalkr[akina_ettu]{
それはもう別のクラスでそれぞれ書けばいいんじゃないですか？
//}

//imagetalkl[mai_nutoral]{
そういう場面でも抽象化の概念は力を発揮する。オブジェクト指向の概念の一つ、インターフェースを作るんだ。
//}

//imagetalkr[akina_ettu]{
インターフェース？表面というか、窓口みたいな形ですかね？
//}

//imagetalkl[mai_nutoral]{
言いえて妙だね。まさに表面だけをなぞる様に共通処理の呼び出し口だけを作り、中身はそれぞれのクラスに任せる。それがインターフェースだ。
//}

//imagetalkr[akina_komari]{
必要なんですか？そんなの
//}

//imagetalkl[mai_niko]{
便利なんだよ。インタフェースを実装するクラスは必ずインターフェースに定義された関数の入力と出力の型に合わせた関数を持っていなければならない。そしてインターフェースを使う側はその内部動作を気にせず意図した結果の型を取得できるんだ。中身がどんなクラスかを気にせずにね。
//}

//imagetalkr[akina_nutoral]{
んーなるほど、決済画面商品データも普段の商品表示データも同じインターフェースを持っていれば商品名や画像など簡単なデータを持ってくることができるんですね。
//}

//imagetalkl[mai_niko]{
そうそう！それでいてデータ構造的には全く違う代物でもいいんだ。安心してコーディングができる。さらにいえばプログラマ同士が分業してコードを書く際に入力と出力の取り決めさえしていればお互いのコードを待たずに作業を並行できることもある。結構便利な概念なんだ。
//}

//imagetalkr[akina_nutoral]{
納得です。使ってみたくなりました。
//}

//imagetalkl[mai_ahaha]{
いいね。プログラムの抽象化に関してはほかにもいろなパターンが考案されていて、「デザインパターン」や「オブジェクト指向プログラミング」について調べてみるのもいいと思うよ！
//}

//imagetalkr[akina_niko]{
ありがとうございます。調べてみます！
//}


=== 新たなバグを発生させにくいプログラム

//imagetalkl[mai_niko]{
次は「新たなバグを発生させにくいプログラム」だ。
//}

//imagetalkr[akina_nutoral]{
新たなバグを発生させないって、そんなプログラム作れるんですか？
//}

//imagetalkl[mai_nutoral]{
あくまで「発生させにくい」だからね。バグはあるよ。いつか出会う。それでもくだらないバグを産ませないためにできることをする、そういう考えだ。
//}

//imagetalkr[akina_nutoral]{
なるほど、ではどうするんですか？
//}

//imagetalkl[mai_nutoral]{
テストを作る。
//}

//imagetalkr[akina_ettu]{
それだけですか！？
//}

//imagetalkl[mai_nutoral]{
テストを作り続ける。
//}

//imagetalkr[akina_eee]{
終わらない戦いじゃないですか？
//}

//imagetalkl[mai_uun]{
そもそもモノづくりなんて終わらない戦いだよ。
//}

//imagetalkr[akina_komari]{
いや、そんな禅問答みたいに言われても・・・
//}

//imagetalkl[mai_nutoral]{
まぁ、そのプロジェクトの納期と見比べて「今回はこの辺で手打ちにしてやろう」っていうのがテスト計画な部分もある。
//}

//imagetalkr[akina_nutoral]{
戦いと言い今度は武将ですか
//}

//imagetalkl[mai_niko]{
引き際を見極めるのが大切です。
//}

//imagetalkr[akina_nutoral]{
お後がよろしいようで。
//}

//imagetalkl[mai_oko]{
おい！ツッコミを放棄するな！
//}

//imagetalkr[akina_iyasono]{
いや何させたいんですか。本当に。
//}

//imagetalkl[mai_ahaha]{
やーごめんごめん調子のっちゃった。で、バグを少なくするためにはテストが必要で、テストはやれるだけやった方がいいけどプロジェクトのリソースは余ってはいないので、ある程度のレベルでテストを切り上げてその品質を含めお客さんに納得してもらうのが普段我々のやっていることだ。これに関しては認識合ってるかな？
//}

//imagetalkr[akina_nutoral]{
はい。私もそう思います。
//}

//imagetalkl[mai_nutoral]{
そこでもうひとつ、「新しいバグを発生させにくい」という観点で必要なことがある。
//}

//imagetalkr[akina_ettu]{
もう一つあるんですか。なんでしょう？
//}

==== テスト自動化

//imagetalkl[mai_nutoral]{
テストの自動化だ。
//}

//imagetalkr[akina_nutoral]{
自動化ですか。ファイルを保存したら勝手にテストが動く、とかですか？
//}

//imagetalkl[mai_niko]{
そうだね。それに加えてコード管理システムで誰かから変更が加えられた際にテストを自動で実行させて、エラーが発生したら加えられた変更を強制的に巻き戻すこともできる。
//}

//imagetalkr[akina_ooo]{
エラーがあるコードは強制排除ですか。すごいですね。たしかに新たなバグは発生しにくそう。
//}

//imagetalkl[mai_nutoral]{
もちろん実行コードが追加された分だけテストコードも追加されるって前提じゃないと意味ないけどね。
//}

//imagetalkr[akina_ettu]{
んん？それって意味がなくなるほどなんですか？
//}

//imagetalkl[mai_nutoral]{
そうだね。Aさんがもし実行コードだけ作ってテストを作らなかったとする。潜在リスクは潜在したままだからもちろんテストは失敗にならないね。でもそのあとにBさんが同じようなところを追加で変更したとしよう。Bさんの時になってリスクが顕在化すると、Bさん自身は間違ったコーディングをしていないのにAさんが発生させたバグ・エラーのせいで作ったものがいつまでたってもコード管理システムに受容されない、なんてことがおこるんだ。
//}

//imagetalkr[akina_ugee]{
Bさんかわいそうすぎる。
//}

//imagetalkl[mai_nutoral]{
万が一、Aさんがすでにプロジェクトを離任していたとしたら終わりの見えないデスマーチが始まることになるね。
//}

//imagetalkr[akina_eee]{
ひぃ～～！
//}

//imagetalkl[mai_nutoral]{
まぁ、テストの自動化についてはまた後で出てくるから今はこのあたりにしとこう。次はコードレビューだ。
//}

==== コードレビュー

//imagetalkr[akina_nutoral]{
コードレビューですか。それくらいならできそうですね。
//}

//imagetalkl[mai_niko]{
いいね。前のプロジェクトでもやってたんだ？
//}

//imagetalkr[akina_nutoral]{
はい。コードを本番に移行する前に先輩とリーダーに見てもらいました。
//}

//imagetalkl[mai_ahaha]{
すばらしい。いいプロジェクトだね！
//}

//imagetalkr[akina_ettu]{
そんなに注目するものなんですか？てっきりどこでもやっているかと思ってました。
//}

//imagetalkl[mai_uun]{
実は、すべての現場でコードレビューが確実に行われているわけではないね。うちの会社は大丈夫だけど、実装をビジネスパートナーに任せっきりな会社が日本には結構ある。
//}

//imagetalkr[akina_nutoral]{
そうなんですか。
//}

//imagetalkl[mai_nutoral]{
海外にコーディングをアウトソーシングしてる場合とかもあるね。一番怖いのはプロジェクト管理者がコーディング経験が浅くてプロダクト管理者としてのレビューをできなていない場合があるんだ。
//}

//imagetalkr[akina_ugee]{
そーれ地獄です。どれだけの種類の地獄があるんですかね。この業界。怖すぎます。
//}

//imagetalkl[mai_ahaha]{
数えてたら気が狂っちゃうね。上を向いて歩こう。
//}

//imagetalkr[akina_ugee]{
足踏み外しませんか？上ばかり見てたら。
//}

//imagetalkl[mai_dahaha]{
あっはは！それもそうだね。バランスよく、朗らかに行こう。
//}

== 省力性の高いプログラム

//imagetalkl[mai_nutoral]{
次は省力性の高いプログラムだね。あきなちゃんも最初にピンと来ていたように、軽さや速さが良いプログラムの指標だ。
//}

//imagetalkr[akina_nutoral]{
研修でも言われていたのと、ドラマとかアニメでも凄腕ハッカーとかが速さがどうとか言ってるイメージがあります。
//}

=== 計算リソースを浪費しないプログラム

//imagetalkl[mai_niko]{
そうだね。だいぶ誇張されてるけど、確かに速さと軽さは現場でも気にすることが結構あるね。ただ、現在のプログラㇺの実行環境ではかつて言われていたほどプログラムの軽さを気にすることは無くなってきている。
//}

//imagetalkr[akina_nutoral]{
そうなんですか？
//}

//imagetalkl[mai_nutoral]{
単純に、マシン性能が昔とは大違いだからね。昔のファミコンと今のPCじゃ、差がありすぎる。プログラムサイズを気にしてたフロッピーディスクの時代なんて知らないでしょ？
//}

//imagetalkr[akina_nutoral]{
知らないです。名前は聞いたことありますが。
//}

//imagetalkl[mai_nutoral]{
私も父親が持ってたのを見たことあるだけだよ。容量8MBを重宝して持ち歩いてたなんて、今じゃ考えられないよね。
//}

//imagetalkr[akina_nutoral]{
そうですね。ってなると今は軽さは気にしなくてもいいんですか？
//}

//imagetalkl[mai_nutoral]{
昔と比べれば全然ってだけで今でもいろんな指標があるね。一つ一つ見ていこう。
//}

==== メモリ効率

//imagetalkl[mai_niko]{
まずはメモリ効率についてだ。コンピューターの3大構成要素のメモリのことだけど、覚えてるよね？
//}

//imagetalkr[akina_nutoral]{
はい。研修ではCPUが作業者、メモリが作業机、ディスクが本棚にたとえられてました。
//}

//imagetalkl[mai_niko]{
OK、じゃあ話は早いね。作業机は整理整頓されている方がいい。そうだよね。
//}

//imagetalkr[akina_nutoral]{
はい。
//}

//imagetalkl[mai_niko]{
沢山のプログラムが動く場合、一つ一つのプログラムが占有する机の面積は可能な限り少ない方がいいよね。
//}

//imagetalkr[akina_nutoral]{
そうですね。
//}

//imagetalkl[mai_ahaha]{
OK、以上！
//}

//imagetalkr[akina_eee]{
ええぇ！？それだけですか？
//}

//imagetalkl[mai_ahaha]{
うん。結論はもう出たしねぇ。あ、そうだ。どうやってメモリの使用量を減らすか、知りたい？
//}

//imagetalkr[akina_nutoral]{
それはもちろん知りたいです！
//}

//imagetalkl[mai_niko]{
よーし、メモリの使用量を減らす方法を洗い出してみよう。大きなものはこの三つだ。
内容と用途が重複する変数を使用しない
スコープが短すぎる変数を使用しない
データ量の多い変数を多用しない
//}

//imagetalkr[akina_ettu]{
「内容と用途が重複する変数を使用しない」って、単純に「無駄な変数を使わない」じゃダメなんですか？
//}

//imagetalkl[mai_nutoral]{
まぁ「無駄な変数を使わない」だと実際あやふやなのに強い言い方されてるようで嫌じゃない？だからこその具体的な言い方だね。
//}

//imagetalkr[akina_nutoral]{
なるほど。
//}

//imagetalkl[mai_uun]{
具体的な指摘をしないのに「君は無駄なコードを書きすぎだ」なんて言われたら嫌な気持ちにならない？
//}

//imagetalkr[akina_nutoral]{
それは嫌です。
//}

//imagetalkl[mai_nutoral]{
だよね。ま、その具体例ってだけだから「無駄な変数を使わない」って考えてもらってもいいよ。次の「スコープが短すぎる変数を使用しない」もその具体例の一つだ。
//}

//imagetalkr[akina_nutoral]{
スコープって何でしたっけ？
//}

//imagetalkl[mai_nutoral]{
本来は変数の使用可能な範囲っていう意味合いだけど、今回の説明では変数の寿命って言った方が早いかな。次の一行だけしか使われない変数くらいなら、省略表記で変数を定義しない書き方をしようねって話だ。
//}

//imagetalkr[akina_nutoral]{
具体的な例を教えてもらえますか？
//}

//imagetalkl[mai_nutoral]{
んー、めったに見ないけどこんな例がわかりやすいかも
//}


//cmd{

string userDisplayName = userName + userId.toString()
print(userDisplayName)
//}

//imagetalkl[mai_nutoral]{
このコード、違和感感じない?
//}

//imagetalkr[akina_nutoral]{
え、これは
//}

//cmd{
print(userName + userId.toString())
//}

//imagetalkr[akina_nutoral]{
でいいですよね。
//}

//imagetalkl[mai_nutoral]{
そうだね。その通り。こんなコードを実際のプロダクトで書く人は滅多にいないけど、究極はこれに尽きるね。
//}

//imagetalkr[akina_ettu]{
ちょっとシンプルすぎて参考にならないかもです。
//}

//imagetalkl[mai_nutoral]{
そうかもねぇ。でも言語仕様によるところもあるから基本方針しか示せないんだよねぇ。
//}

//imagetalkr[akina_ooo]{
そうなんですか。
//}

//imagetalkl[mai_nutoral]{
例えば、Pythonだと
//}

//cmd{
Array arr1 = [1,2,3,4,5]
Array arr2 = []
for elem in arr:
	arr2.push(elem*10)
print(arr2.toString())
//}

//imagetalkl[mai_nutoral]{
みたいなコードが
//}

//cmd{
Array arr1 = [1,2,3,4,5]
print(arr1.map(elem=>elem*10).toString())
//}

//imagetalkl[mai_nutoral]{
って書けちゃう。
//}

//imagetalkr[akina_eee]{
え⁉一行で？
//}

//imagetalkl[mai_ahaha]{
はじめはびっくりだよね。まぁそんなこともあって結局は「寿命の短い変数は使用しない」くらいに考えた方がいい。
//}

//imagetalkr[akina_ooo]{
結構あいまいなんですね。
//}

//imagetalkl[mai_nutoral]{
「無駄な変数は使わない」よりは具体的だから、参考までに覚えておこう。
//}

//imagetalkr[akina_niko]{
わかりました！
//}

//imagetalkl[mai_nutoral]{
3つめは「データ量の多い変数を使わない」ってやつだね。これはデータベースとのデータをやり取りするコード付近で起こりうる現象だね。データベースの特定テーブルに関連する大量データを丸ごと取ってくるコードがたまに存在する。
//}

//imagetalkr[akina_ettu]{
そんなことあるんですか？
//}

//imagetalkl[mai_ahaha]{
まあ、お客さんの要望で仕方なくやるケースもあるから一概には言えないけど、必要ないならやっちゃいけないことだね。
//}

//imagetalkr[akina_ooo]{
お客さんの要望ってケースもあるんですか。なるほど。
//}

//imagetalkl[mai_niko]{
状況に従って冷静に対処していこう。
//}

//imagetalkr[akina_niko]{
わかりました！
//}