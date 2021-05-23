/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface _TVLoadingView : UIView

{
    _Bool _shouldShowSpinner;
    _TVImageView *_backgroundImageView;
    UIView *_loadingTitleLabel;
    UIActivityIndicatorView *_spinnerView;
    UIView *_spinnerContainer;
    UIView *_labelContainer;
}

@property (weak, nonatomic) UIView *loadingTitleLabel;
@property (weak, nonatomic, readonly) UIView *spinnerContainer;
@property (weak, nonatomic, readonly) UIView *labelContainer;
@property (weak, nonatomic, readonly) _TVImageView *backgroundImageView;
@property (weak, nonatomic, readonly) UIActivityIndicatorView *spinnerView;
@property (nonatomic) _Bool shouldShowSpinner;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (void)_showSpinner;

@end
