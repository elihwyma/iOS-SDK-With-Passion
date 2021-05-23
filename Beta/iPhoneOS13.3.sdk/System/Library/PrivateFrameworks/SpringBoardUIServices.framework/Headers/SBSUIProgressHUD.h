/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, _UIBackdropView;

@interface SBSUIProgressHUD : UIView

{
    _UIBackdropView *_backdropView;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)hide;
- (void)showMessage:(id)arg1 inView:(id)arg2;

@end
