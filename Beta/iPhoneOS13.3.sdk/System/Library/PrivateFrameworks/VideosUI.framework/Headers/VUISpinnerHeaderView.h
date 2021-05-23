/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class PSSpecifier, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface VUISpinnerHeaderView : UIView

{
    UIActivityIndicatorView *_spinner;
    UILabel *_text;
    PSSpecifier *_specifier;
}

- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)showSpinner;
- (void)hideText;
- (void)hideSpinner;
- (void)showText;

@end
