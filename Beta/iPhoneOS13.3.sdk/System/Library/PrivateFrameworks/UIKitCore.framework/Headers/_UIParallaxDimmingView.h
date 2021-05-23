/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface _UIParallaxDimmingView : UIView

{
    UIImageView *leftEdgeFade;
    _Bool _backgroundIsDimmed;
    UIColor *_dimmingColor;
    UIView *_addingSubview;
}

@property (retain, nonatomic) UIColor *dimmingColor;
@property (nonatomic) _Bool backgroundIsDimmed;
@property (retain, nonatomic) UIView *addingSubview;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 overrideDimmingColor:(id)arg2;
- (id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(_Bool)arg3;
- (void)_updateLeftEdgeFade:(_Bool)arg1;
- (void)crossFade;
- (id)defaultBorderColor;
- (id)_basicAnimationWithKeyPath:(id)arg1;

@end
