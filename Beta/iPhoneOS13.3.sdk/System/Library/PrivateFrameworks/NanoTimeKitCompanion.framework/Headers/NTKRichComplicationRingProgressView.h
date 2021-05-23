/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationProgressView.h>

@class NTKRichComplicationRingView;

@interface NTKRichComplicationRingProgressView : NTKRichComplicationProgressView

{
    double _curveWidth;
    NTKRichComplicationRingView *_backgroundView;
    NTKRichComplicationRingView *_foregroundView;
    _Bool _clockwise;
}

@property (nonatomic) _Bool clockwise;

- (id)initWithCurveWidth:(double)arg1 padding:(double)arg2 forDevice:(id)arg3;

@end
