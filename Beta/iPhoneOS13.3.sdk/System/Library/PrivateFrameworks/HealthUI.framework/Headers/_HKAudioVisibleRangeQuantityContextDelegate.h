/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/_HKAudioStandardQuantityContextDelegate.h>

@class HKLineSeries;

@interface _HKAudioVisibleRangeQuantityContextDelegate : _HKAudioStandardQuantityContextDelegate

{
    HKLineSeries *_audioOverlayLineSeries;
}

@property (nonatomic, readonly) HKLineSeries *audioOverlayLineSeries;

- (id)formatterForTimescope:(long long)arg1;
- (id)alternateLineSeries;
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2;
- (void)_enumerateAudioExposureChartPoints:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
