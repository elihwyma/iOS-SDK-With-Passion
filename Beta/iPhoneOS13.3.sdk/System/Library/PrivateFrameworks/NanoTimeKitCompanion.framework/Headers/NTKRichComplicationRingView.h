/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationShapeView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CAShapeLayer, NSString, UIView;

@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationRingView : NTKRichComplicationShapeView <Swift>

{
    double _curveWidth;
    double _padding;
    UIView *_foregroundView;
    CAShapeLayer *_headLayer;
    CAShapeLayer *_tailLayer;
    CAShapeLayer *_tailStrokeLayer;
    _Bool _clockwise;
}

@property (nonatomic) _Bool clockwise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

+ (id)_disabledLayerActions;

- (void)setProgress:(double)arg1;
- (void)layoutSubviews;
- (const struct CGPath *)_generatePath;
- (void)_updateGradient;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (struct CGPoint)_pointAtProgress:(float)arg1;
- (void)_setupGradientLayer:(id)arg1;
- (double)_shapeLineWidth;
- (id)_normalizeGradientLocations:(id)arg1;
- (_Bool)_shouldReverseGradient;
- (id)initWithCurveWidth:(double)arg1 padding:(double)arg2 forDevice:(id)arg3 withFilterStyle:(long long)arg4;
- (id)_createHeadTailViewWithStartAngle:(double)arg1 endAngle:(double)arg2 clockwise:(_Bool)arg3 additionalWidth:(double)arg4;
- (void)_layoutHeadTailView:(id)arg1 forProgress:(double)arg2;

@end
