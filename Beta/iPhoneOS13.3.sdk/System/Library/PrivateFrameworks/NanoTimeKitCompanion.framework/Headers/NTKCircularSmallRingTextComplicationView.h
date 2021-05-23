/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCircularSmallRingComplicationView.h>

@class NTKColoringLabel;

@interface NTKCircularSmallRingTextComplicationView : NTKCircularSmallRingComplicationView

{
    NTKColoringLabel *_label;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateLabelsForFontChange;
- (void)_updateForTemplateChange;
- (void)_updateLabelWithTextProvider:(id)arg1;
- (void)updateLabelWithString:(id)arg1;

@end
