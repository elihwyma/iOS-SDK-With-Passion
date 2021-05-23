/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIVisualEffectView.h>

@class UIImage;

@interface UIKBBackdropView : UIVisualEffectView

{
    UIImage *_imageForCorners;
}

@property (retain, nonatomic) UIImage *imageForCorners;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)transitionToStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (_Bool)_applyCornerMaskToSelf;
- (int)textEffectsVisibilityLevel;
- (id)_generateCornerContentsImage:(unsigned long long)arg1;
- (void)updateFrame:(struct CGRect)arg1 withCorners:(unsigned long long)arg2;

@end
