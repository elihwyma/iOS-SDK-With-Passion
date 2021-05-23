/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationShapeView.h>

@interface NTKRichComplicationCurveView : NTKRichComplicationShapeView

{
    double _curveWidth;
    double _padding;
    double _drawingBeginAngle;
    double _drawingEndAngle;
    _Bool _clockwise;
    double _beginAngle;
    double _endAngle;
}

@property (nonatomic) double beginAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) _Bool clockwise;

- (void)layoutSubviews;
- (void)_updatePath;
- (const struct CGPath *)_generatePath;
- (struct CGPoint)_pointAtProgress:(float)arg1;
- (void)_setupGradientLayer:(id)arg1;
- (double)_angleAtProgress:(float)arg1;
- (id)initWithCurveWidth:(double)arg1 padding:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4 forDevice:(id)arg5 withFilterStyle:(long long)arg6;
- (double)_shapeLineWidth;
- (id)_normalizeGradientLocations:(id)arg1;
- (_Bool)_shouldReverseGradient;

@end
