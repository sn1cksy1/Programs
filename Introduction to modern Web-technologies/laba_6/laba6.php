<html>
  <head>
    <meta charset="utf-8">
    <title>Ëàáîðàòîðíà ðîáîòà ¹6</title>
  </head>
  <body>
    <div>Bookmarks:</div>
    <ul id="ForBookmarks">
      <?php include 'php.php'; ?>
    </ul>
    <div>
      <div class="line">
        <button type="button" name="button" onclick="Add();">Add</button>
      </div>
      <div class="line">
        <button type="button" name="button" onclick="Delete();">Delete</button>
	  </div>
    <div>
      <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/2.0.3/jquery.min.js"></script>
      <script type="text/javascript" src="laba6.js"></script>
      <script type="text/javascript">JsonSetUp();</script>
	</body>
</html>