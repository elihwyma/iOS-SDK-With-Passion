/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringLabel;

@interface NTKCircularSmallStackTextComplicationView : NTKCircularComplicationView

{
    NTKColoringLabel *_firstLineLabel;
    NTKColoringLabel *_secondLineLabel;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)_updateLabelColors;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateLabelsForFontChange;
- (void)_updateForTemplateChange;
- (void)setUsesMultiColor:(_Bool)arg1;

@end
