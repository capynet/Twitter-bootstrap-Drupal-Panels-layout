<div class="container-fluid" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row-fluid">

    <div class="span3">
      <?php print $content['left']; ?>
    </div>

    <div class="span6">
      <?php print $content['middle']; ?>
    </div>

    <div class="span3">
      <?php print $content['right']; ?>
    </div>

  </div>
</div>