(function ($) {
  Drupal.behaviors.media_displays = {
    attach: function (context, settings) {
      // Surrounds image with link if one exists
      $('.media-element-container .file-image > a').once(function () {
        $(this).parent().find('img').wrap($(this).detach());
      });
    }
  }
})(jQuery);