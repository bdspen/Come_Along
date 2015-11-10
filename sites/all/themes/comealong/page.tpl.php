
<script src="/<?php print $directory;?>/js/bootstrap.min.js" integrity="sha512-K1qjQ+NcF2TYO/eI3M6v8EiNYZfA95pQumfvcVrTHtwQVDG+aHRqLi/ETn2uB+1JqwYqVG3LIvdm9lj6imS/pQ==" crossorigin="anonymous"></script>
<div id="wrapper">


  <div id="header">

    <!-- Navigation -->
    <nav class="navbar navbar-default topnav" role="navigation">
      <div class="container topnav">
        <!-- Brand and toggle get grouped for better mobile display -->
        <div class="navbar-header">
          <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
            <span class="sr-only">Toggle navigation</span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>

          <!-- Drupal Header and Logo -->
          <a class="navbar-brand topnav" href="#">Come Along</a>
          <!-- <img width="25px" height="25px" src="/<?php print $directory;?>/img/logo.png" alt="<?php print $site_name;?>" height="80" width="150" /> -->
        </div>

        <!-- Collect the nav links, forms, and other content for toggling -->
        <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">

          <?php if ($main_menu): ?>
            <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => 'nav navbar-nav navbar-right'))); ?>
          <?php endif; ?>
        </div>
      </div>
    </nav>
  </div>

  <!-- Header -->
  <div class="intro-header">
      <div class="container">

          <div class="row">
              <div class="col-lg-12">
                  <div class="intro-message">
                      <h1>Landing Page</h1>
                      <h3>A Template by Start Bootstrap</h3>
                      <hr class="intro-divider">
                      <ul class="list-inline intro-social-buttons">
                          <li>
                              <a href="https://twitter.com/SBootstrap" class="btn btn-default btn-lg"><i class="fa fa-twitter fa-fw"></i> <span class="network-name">Twitter</span></a>
                          </li>
                          <li>
                              <a href="https://github.com/IronSummitMedia/startbootstrap" class="btn btn-default btn-lg"><i class="fa fa-github fa-fw"></i> <span class="network-name">Github</span></a>
                          </li>
                          <li>
                              <a href="#" class="btn btn-default btn-lg"><i class="fa fa-linkedin fa-fw"></i> <span class="network-name">Linkedin</span></a>
                          </li>
                      </ul>
                  </div>
              </div>
          </div>

      </div>
      <!-- /.container -->

  </div>
  <!-- /.intro-header -->


  <div class="container">
    <div id="content">
      <?php print render($title_prefix); ?>
      <?php if ($title): ?><h1><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>

        <?php print render($messages); ?>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
          <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>

            <?php print render($page['content']); ?>
          </div>

          <?php if ($page['sidebar_first']): ?>
            <div id="sidebar">
              <?php print render($page['sidebar_first']); ?>
            </div>
          <?php endif; ?>

          <div id="footer">
            <?php if ($page['footer']): ?>
              <?php print render($page['footer']); ?>
            <?php endif; ?>
          </div>

        </div>
      </div>
