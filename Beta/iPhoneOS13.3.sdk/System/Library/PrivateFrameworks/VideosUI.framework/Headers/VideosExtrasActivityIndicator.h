/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface VideosExtrasActivityIndicator : UIView

{
    UILabel *_titleLabel;
    UIActivityIndicatorView *_spinner;
}

- (struct CGSize)intrinsicContentSize;
- (void)setAlpha:(double)arg1;
- (id)initWithElement:(id)arg1;

@end
