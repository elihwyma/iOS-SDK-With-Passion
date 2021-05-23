/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface VSSpinnerTitleView : UIView

{
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1;
- (void)didMoveToWindow;

@end
