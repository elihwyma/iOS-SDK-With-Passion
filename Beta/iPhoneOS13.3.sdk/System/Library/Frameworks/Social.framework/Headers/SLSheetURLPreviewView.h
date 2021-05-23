/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLSheetImagePreviewView.h>

@class SLURLPreviewGenerator, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SLSheetURLPreviewView : SLSheetImagePreviewView

{
    UIImage *_shadowImage;
    SLURLPreviewGenerator *_webPreviewGenerator;
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
}

- (id)init;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)generatePreviewImageFromAttachments;
- (void)ensurePlaceholderPreviewImage;
- (void)_generateAutomaticPreviewForURL:(id)arg1;

@end
