<?php

$conf['site_name'] = 'Platform.sh Shop';

$conf['hash_salt'] = 'Y78u7MLfwZZwRvDKsLkuykIHElcCAOzn4xDH2lfxE6gpyM2uNVyAjign7qCTzWidUrKiw8tZ9bpqFiHYJurH';

if (isset($_ENV['PLATFORM_APP_DIR'])) {
  $conf['composer_manager_file_dir'] = $_ENV['PLATFORM_APP_DIR'] . '/composer';
  $conf['composer_manager_vendor_dir'] = $_ENV['PLATFORM_APP_DIR'] . '/composer/vendor';
}

$conf['admin_theme'] = 'shiny';
$conf['node_admin_theme'] = TRUE;

if (file_exists(__DIR__ . '/settings.local.php')) {
  include __DIR__ . '/settings.local.php';
}
