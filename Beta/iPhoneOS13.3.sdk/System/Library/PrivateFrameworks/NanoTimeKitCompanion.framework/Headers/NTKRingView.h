/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKColoringView.h>

@protocol CLKMonochromeFilterProvider;

@interface NTKRingView : NTKColoringView

{
    double _ringWidth;
    double _radius;
    double _fillFraction;
    id <CLKMonochromeFilterProvider> _filterProvider;
}

@property (nonatomic, readonly) double ringWidth;
@property (nonatomic, readonly) double radius;
@property (nonatomic) double fillFraction;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (void)drawRect:(struct CGRect)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)initWithFrame:(struct CGRect)arg1 radius:(double)arg2 ringWidth:(double)arg3;
- (void)_drawBackgroundRings;
- (void)_drawRingWithRadius:(double)arg1 fillFraction:(double)arg2 alpha:(double)arg3;

@end
