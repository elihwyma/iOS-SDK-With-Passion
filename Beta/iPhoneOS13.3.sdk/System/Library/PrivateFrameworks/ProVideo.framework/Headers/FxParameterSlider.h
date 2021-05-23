/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/FxPinParameter.h>

@interface FxParameterSlider : FxPinParameter

{
    struct FxParameterSliderPriv *_sliderPriv;
}

- (id)init;
- (void)dealloc;
- (void)setStepValue:(double)arg1;
- (double)stepValue;
- (double)maxValue;
- (void)setMaxValue:(double)arg1;
- (double)minValue;
- (void)setMinValue:(double)arg1;
- (_Bool)isLogarithmic;
- (double)minSliderValue;
- (void)setMinSliderValue:(double)arg1;
- (double)maxSliderValue;
- (void)setMaxSliderValue:(double)arg1;
- (void)setIsLogarithmic:(_Bool)arg1;

@end
