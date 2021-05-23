/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKColoringView.h>

@interface NTKRingOverlapArcView : NTKColoringView

{
    double _ringWidth;
    double _overlapWidth;
    double _radius;
    double _fillFraction;
}

@property (nonatomic, readonly) double ringWidth;
@property (nonatomic, readonly) double overlapWidth;
@property (nonatomic, readonly) double radius;
@property (nonatomic) double fillFraction;

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 radius:(double)arg2 ringWidth:(double)arg3 overlapWidth:(double)arg4;

@end
