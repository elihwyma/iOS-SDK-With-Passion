/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSString, NTKColoringLabel, NTKRichComplicationDialView, UIImageView;

@protocol CLKMonochromeFilterProvider;

@interface NTKStopwatchRichComplicationCircularView : NTKRichComplicationCircularBaseView <Swift>

{
    UIImageView *_timerImageView;
    NTKColoringLabel *_timeLabel;
    NTKRichComplicationDialView *_frontDial;
    NTKRichComplicationDialView *_backDial;
    struct NSNumber *_updateToken;
    struct {
        double timeLabelFontSize;
        double timeLabelMaxWidth;
        double timeLabelBottom;
        double dialDiameter;
        struct CGSize largeTickSize;
        struct CGSize smallTickSize;
    } _layoutConstants;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;
- (void)_updateDialProgress;
- (double)_stopwatchCurrentTime;

@end
