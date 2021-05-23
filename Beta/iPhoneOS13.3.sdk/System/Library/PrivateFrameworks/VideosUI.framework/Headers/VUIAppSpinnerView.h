/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIAppSpinnerView : UIView

{
    UIVisualEffectView *_effectView;
    UIActivityIndicatorView *_spinner;
    _Bool _didLayout;
}

- (void)layoutSubviews;

@end
