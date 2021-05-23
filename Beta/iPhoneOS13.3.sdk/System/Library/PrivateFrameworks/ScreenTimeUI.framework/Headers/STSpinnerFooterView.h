/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, PSSpecifier, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface STSpinnerFooterView : UITableViewHeaderFooterView

{
    PSSpecifier *_specifier;
    UIActivityIndicatorView *_spinnerView;
    NSLayoutConstraint *_spinnerViewVerticalPositionConstraint;
}

@property (weak, readonly) PSSpecifier *specifier;
@property (readonly) UIActivityIndicatorView *spinnerView;
@property (retain) NSLayoutConstraint *spinnerViewVerticalPositionConstraint;

- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)startAnimatingSpinner;
- (void)stopAnimatingSpinner;
- (void)reloadFromSpecifier;

@end
