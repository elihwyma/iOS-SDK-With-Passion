/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <QuartzCore/CALayer.h>

@class UIColor, _SLSheetMaskLayer;

__attribute__((visibility("hidden")))
@interface SLSheetMasklayer : CALayer

{
    CALayer *_topLayer;
    CALayer *_leftLayer;
    CALayer *_bottomLayer;
    CALayer *_rightLayer;
    _SLSheetMaskLayer *_sheetMaskLayer;
    CALayer *_solidSheetMaskLayer;
    UIColor *_backgroundColor;
    struct CGRect _lastBounds;
    struct CGRect _lastMaskRect;
    double _clipCornerRadius;
    UIColor *_clipBackgroundColor;
}

@property (nonatomic) double clipCornerRadius;
@property (retain, nonatomic) UIColor *clipBackgroundColor;

- (void)removeAllAnimations;
- (void)updateMaskWithBounds:(struct CGRect)arg1 maskRect:(struct CGRect)arg2;
- (id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2;
- (void)removeSheetCutout;
- (void)restoreSheetCutout;
- (void)animateSheetMaskFromOldSheetFrame:(struct CGRect)arg1 toSheetFrame:(struct CGRect)arg2 duration:(double)arg3;

@end
