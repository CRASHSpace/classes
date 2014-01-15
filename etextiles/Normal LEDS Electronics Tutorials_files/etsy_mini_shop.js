Etsy = typeof(Etsy)=="undefined" ? {} : Etsy;

Etsy.Mini = function(shop_id, image_type, columns, rows, is_featured, base_url) {
    this.shop_id = shop_id;
    this.image_type = image_type;
    this.base_url = base_url;
    this.rows = rows;
    this.columns = columns;
    this.is_featured = is_featured;
    this.options = {
        thumbnail_height: 94,
        gallery_height: 195
    };

    this.init();
};

Etsy.Mini.prototype = {
    init : function() {
        this.renderIframe();
    },

    renderIframe : function() {
        var url = this.getUrl();
        var height = this.getHeight();
        var width = this.getWidth();
        var iframe = '<iframe frameborder="0" src="'+url+'" width='+width+' height='+height+'></iframe>';
        document.write(iframe);
    },

    getUrl : function() {
        return this.base_url
             + '/mini.php'
             + '?shop_id='+this.shop_id
             + '&image_type='+this.image_type
             + '&rows='+this.rows
             + '&columns='+this.columns
             + '&featured='+this.is_featured;
    },

    getHeight : function() {
        var height = 50;
        if (this.isGallery()) {
            return height + (this.rows*this.options.gallery_height);
        } else {
            return height + (this.rows*this.options.thumbnail_height);
        }
    },

    getWidth : function() {
        if (this.isGallery()) {
            return this.columns * this.options.gallery_height;
        } else {
            return this.columns * this.options.thumbnail_height;
        }
    },

    isGallery : function() {
        return this.image_type == 'gallery';
    }
}
