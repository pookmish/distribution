/*
 (function ($) {
 Drupal.behaviors.test = {
 attach: function (context, settings) {
 $(document).ready(function () {
 //Move the quicktabs into the contextual links gear and hides the actual tabs from view.
 $("[id^=block-quicktabs-dragview-]").each(function () {
 var links = $(this).find('ul.quicktabs-tabs').contents();
 $(this).find('.contextual-links-wrapper:first ul').append(links);
 $(this).find('.contextual-links-wrapper:first').css('right', '50px');
 $(this).find('h2.block-title:first').remove();
 $(this).find('ul.quicktabs-tabs').remove();
 });
 });
 }
 }
 })(jQuery);
 */

jQuery(document).ready(function ($) {
    $("[id^=block-quicktabs-dragview-]").each(function () {
        var links = $(this).find('ul.quicktabs-tabs').contents();
        $(this).find('.contextual-links-wrapper:first ul').append(links);
        $(this).find('.contextual-links-wrapper:first').css('right', '50px');
        $(this).find('h2.block-title:first').remove();
        $(this).find('ul.quicktabs-tabs').remove();
    });
});
