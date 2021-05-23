/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationImageView;

@interface NTKRichComplicationRectangularLargeTextView : NTKRichComplicationRectangularBaseView

{
    NTKRichComplicationImageView *_headerImageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_line1Label;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (id)init;
- (void)setPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)setFilterProvider:(id)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;

@end
