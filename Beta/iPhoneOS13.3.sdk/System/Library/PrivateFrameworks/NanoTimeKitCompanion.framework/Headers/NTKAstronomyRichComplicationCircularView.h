/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKAstronomyRichComplicationContentView;

@interface NTKAstronomyRichComplicationCircularView : NTKRichComplicationCircularBaseView

{
    NTKAstronomyRichComplicationContentView *_astronomyContentView;
}

- (id)init;
- (void)layoutSubviews;
- (void)_setupContentView;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_enumerateQuadViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_applyPausedUpdate;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;

@end
