/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIControl.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface SFAirDropIconView : UIControl

{
    UIImageView *_imageView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)loadImageIfNeeded;

@end
