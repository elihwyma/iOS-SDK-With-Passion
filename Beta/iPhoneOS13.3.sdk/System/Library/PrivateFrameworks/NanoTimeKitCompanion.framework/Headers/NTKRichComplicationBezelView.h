/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@class UIBezierPath, UIColor;

@protocol NTKRichComplicationBezelViewDelegate;

@interface NTKRichComplicationBezelView : NTKRichComplicationView

{
    UIBezierPath *_hitTestPath;
    struct CGRect _hitTestBounds;
    long long _hitTestShape;
    struct CGRect _hitTestShapeFrame;
    _Bool _interactive;
    UIColor *_bezelTextColor;
    double _bezelTextWidthInRadius;
    double _bezelTextAlpha;
    id <NTKRichComplicationBezelViewDelegate> _delegate;
}

@property (retain, nonatomic) UIColor *bezelTextColor;
@property (nonatomic) double bezelTextWidthInRadius;
@property (nonatomic) double bezelTextAlpha;
@property (nonatomic, readonly) _Bool interactive;
@property (weak, nonatomic) id <NTKRichComplicationBezelViewDelegate> delegate;

+ (id)keylineImageWithFilled:(_Bool)arg1 forDevice:(id)arg2;
+ (id)_createHitTestPathWithViewBounds:(struct CGRect)arg1 shape:(long long)arg2 shapeFrame:(struct CGRect)arg3 forDevice:(id)arg4;
+ (struct CGAffineTransform)transformForState:(long long)arg1;
+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(_Bool)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6 bezelTextUpdateHandler:(CDUnknownBlockType)arg7;
+ (id)keylineViewForDevice:(id)arg1;
+ (id)layoutRuleForState:(long long)arg1 faceBounds:(struct CGRect)arg2 dialDiameter:(double)arg3 forDevice:(id)arg4;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;

- (id)init;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFamily:(long long)arg1;
- (void)_updateHitTestShape:(long long)arg1 frame:(struct CGRect)arg2;
- (void)_setLayoutTransformToView:(id)arg1 origin:(struct CGPoint)arg2 rotationInDegree:(double)arg3 centerScale:(double)arg4;

@end
