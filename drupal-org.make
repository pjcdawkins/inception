core = 7.x
api = 2
defaults[projects][subdir] = contrib

projects[commerce_license][version] = "1.3"
projects[commerce_license_billing][version] = "1.0-beta4"
projects[advancedqueue][version] = "1.0-beta3"

projects[platformsh_api][type] = "module"
projects[platformsh_api][download][type] = "git"
projects[platformsh_api][download][url] = "https://github.com/pjcdawkins/platformsh_api_drupal.git"
projects[platformsh_api][download][branch] = "7.x-1.x"
projects[platformsh_api][download][revision] = "48b4232c71444589b8be27ab3b6d32024498df61"

projects[commerce][version] = "1.11"

projects[ctools][version] = "1.7"

projects[date][version] = "2.8"

projects[entity][version] = "1.6"

projects[entity_bundle_plugin][version] = "1.0-beta2"

projects[entityreference][version] = "1.1"

projects[views_bulk_operations][version] = "3.2"
projects[views_megarow][version] = "1.4"

projects[composer_manager][version] = "1.7"

projects[addressfield][version] = "1.0"

projects[rules][version] = "2.9"

projects[views][version] = "3.10"

projects[features][version] = "2.4"

projects[strongarm][version] = "2.0"

projects[commerce_features][version] = "1.0"

projects[breakpoints][version] = "1.3"

projects[libraries][version] = "2.2"

projects[navbar][download][type] = "git"
projects[navbar][download][branch] = "7.x-1.x"
projects[navbar][download][revision] = "09ddcf30ff0923deec4c5c0805fa695a8b9beef9"
projects[navbar][patch][] = "https://www.drupal.org/files/issues/navbar-contrib-icons-1954912-20.patch"

; Themes
projects[shiny][version] = "1.6"

; Liraries
libraries[backbone][download][type] = "git"
libraries[backbone][download][url] = "https://github.com/jashkenas/backbone.git"
libraries[underscore][download][branch] = "master"
libraries[underscore][download][tag] = "1.1.2"
libraries[backbone][type] = "library"

libraries[modernizr][download][url] = "http://cdnjs.cloudflare.com/ajax/libs/modernizr/2.8.2/modernizr.js"
libraries[modernizr][download][type] = "get"

libraries[underscore][download][type] = "git"
libraries[underscore][download][url] = "https://github.com/jashkenas/underscore.git"
libraries[underscore][download][branch] = "master"
libraries[underscore][download][tag] = "1.8.3"
libraries[underscore][type] = "library"
