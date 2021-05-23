/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCornerBaseGaugeView.h>

@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerGaugeTextView : NTKRichComplicationCornerBaseGaugeView

{
    NTKCurvedColoringLabel *_outerLabel;
}

@property (nonatomic, readonly) NTKCurvedColoringLabel *outerLabel;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;

@end
