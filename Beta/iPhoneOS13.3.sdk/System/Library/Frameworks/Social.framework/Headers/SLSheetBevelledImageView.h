/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLSheetImagePreviewView.h>

@class UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SLSheetBevelledImageView : SLSheetImagePreviewView

{
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
    _Bool _needsURLPlaceholderImage;
}

@property (nonatomic) _Bool needsURLPlaceholderImage;

- (id)init;
- (void)setImage:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (_Bool)generatePreviewImageFromAttachments;
- (void)ensurePlaceholderPreviewImage;

@end
