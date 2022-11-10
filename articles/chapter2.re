
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

テスト