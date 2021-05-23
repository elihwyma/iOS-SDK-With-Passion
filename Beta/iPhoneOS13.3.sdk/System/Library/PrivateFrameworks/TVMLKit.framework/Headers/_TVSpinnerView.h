/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface _TVSpinnerView : UIView

{
    _Bool _shouldResumeAnimation;
    UIView *_spinnerContainer;
    UIView *_spinnerOverlayContainer;
    UIColor *_color;
    _Bool _animating;
}

@property (nonatomic, readonly, getter=isAnimating) _Bool animating;
@property (nonatomic, readonly) UIColor *color;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2;
- (void)_removeAnimations;
- (void)_updateImagesForTraitCollection:(id)arg1;
- (void)_addAnimations;
- (id)_spinnerImageForTraitCollection:(id)arg1 size:(struct CGSize)arg2 alpha:(double)arg3;

@end
