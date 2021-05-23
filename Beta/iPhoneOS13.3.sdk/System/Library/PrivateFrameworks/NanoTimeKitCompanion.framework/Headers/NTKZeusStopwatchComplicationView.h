/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKZeusFramedComplicationView.h>

@class NSString, NTKColoringLabel;

@protocol NTKComplicationDisplayObserver;

@interface NTKZeusStopwatchComplicationView : NTKZeusFramedComplicationView

{
    NTKColoringLabel *_label;
    long long _stopwatchState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

- (id)init;
- (struct CGRect)contentFrame;
- (void)layoutSubviews;
- (id)_createLabel;
- (void)applyPalette:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)setStopwatchState:(long long)arg1 elapsedTime:(double)arg2 shouldPauseTextCountdown:(_Bool)arg3 timeTravelDate:(id)arg4;

@end
