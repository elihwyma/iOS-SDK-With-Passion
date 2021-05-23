/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVButton.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface _TVRoundButton : TVButton

{
    CALayer *_imageMask;
    CDUnknownBlockType _updateFloatingViewFocusStateBlock;
    _Bool _shouldPunchThroughImage;
}

@property (nonatomic) _Bool shouldPunchThroughImage;

+ (id)_buttonContentWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setAccessoryView:(id)arg1;
- (void)setImageView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;
- (void)_updateBackgroundColorForState:(unsigned long long)arg1;
- (void)setTextContentView:(id)arg1;
- (void)_updateFocusStateWithCoordinator:(id)arg1;
- (void)_updateFloaingViewFocusState:(_Bool)arg1 coordinator:(id)arg2;
- (void)_imageViewDidLoadImage:(id)arg1;
- (void)_updateFloatingViewFocusStateIfNeeded;
- (void)_updateImageMask;

@end
