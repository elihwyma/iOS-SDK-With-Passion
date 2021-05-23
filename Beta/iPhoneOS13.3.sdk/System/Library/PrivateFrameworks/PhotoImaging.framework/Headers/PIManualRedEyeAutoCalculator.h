/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIRedEyeAutoCalculator.h>

@interface PIManualRedEyeAutoCalculator : PIRedEyeAutoCalculator

{
    struct CGPoint _location;
    double _touchDiameter;
}

- (id)_options;
- (id)initWithComposition:(id)arg1 location:(struct CGPoint)arg2 touchDiameter:(double)arg3;
- (void)_configureRequest:(id)arg1;

@end
