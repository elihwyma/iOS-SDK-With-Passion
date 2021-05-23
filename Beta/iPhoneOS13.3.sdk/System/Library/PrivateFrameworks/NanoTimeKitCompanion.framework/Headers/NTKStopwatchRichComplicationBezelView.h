/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationBezelBaseTextView.h>

@class NTKColoringLabel;

@interface NTKStopwatchRichComplicationBezelView : NTKRichComplicationBezelBaseTextView

{
    NTKColoringLabel *_textLabel;
}

- (id)init;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)_createLabelViewWithFont:(id)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;
- (void)_applyPausedUpdate;
- (void)_updateTextProvider;

@end
