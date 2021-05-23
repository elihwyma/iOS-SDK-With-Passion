/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIImageView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface VUIImageView : UIImageView

{
    _Bool _selected;
    UIImage *_flatImage;
    UIImage *_highlightOrSelectedImage;
}

@property (retain, nonatomic) UIImage *highlightOrSelectedImage;

+ (id)imageWithImage:(id)arg1 existingImageView:(id)arg2;

- (void)setImage:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateImage;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end
