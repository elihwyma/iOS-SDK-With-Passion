/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationProgressView.h>

@class NTKRichComplicationCurveView;

@interface NTKRichComplicationCurvedProgressView : NTKRichComplicationProgressView

{
    double _curveWidth;
    long long _progressFillStyle;
    NTKRichComplicationCurveView *_backgroundView;
    NTKRichComplicationCurveView *_foregroundView;
    _Bool _clockwise;
    double _beginAngle;
    double _endAngle;
}

@property (nonatomic) double beginAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) _Bool clockwise;

- (void)setProgress:(double)arg1;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;
- (id)initWithCurveWidth:(double)arg1 padding:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4 forDevice:(id)arg5 withFilterStyle:(long long)arg6 progressFillStyle:(long long)arg7;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2;

@end
