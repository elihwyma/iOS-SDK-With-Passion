/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKSolarRichComplicationFullColorImageView;

@interface NTKSolarRichComplicationCircularView : NTKRichComplicationCircularBaseView

{
    NTKSolarRichComplicationFullColorImageView *_solarImageView;
}

- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (_Bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_updateWithLocation:(id)arg1 useIdealizedTime:(_Bool)arg2 forceUpdate:(_Bool)arg3 animated:(_Bool)arg4;

@end
