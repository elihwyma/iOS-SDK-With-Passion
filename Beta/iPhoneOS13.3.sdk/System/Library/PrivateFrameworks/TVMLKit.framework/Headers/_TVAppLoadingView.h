/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UIVisualEffectView, UIWindow;

@interface _TVAppLoadingView : UIView

{
    UIView *_wallpaperView;
    UIWindow *_overlayWindow;
    _Bool _hiding;
    double _timeout;
    double _delay;
    UIImageView *_maskView;
    UIVisualEffectView *_visualEffectView;
    UIActivityIndicatorView *_spinner;
}

@property (retain, nonatomic) UIActivityIndicatorView *spinner;

+ (id)loadingScreen;

- (void)timeout;
- (void)setTimeout:(double)arg1;
- (_Bool)isVisible;
- (void)hide;
- (void)didRotate:(id)arg1;
- (void)setLoadingDelay:(double)arg1;
- (void)showOverKeyWindowWithSpinnerOnly:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 templateImage:(id)arg2;
- (void)showOverKeyWindow;
- (double)hideAnimationDuration;

@end
