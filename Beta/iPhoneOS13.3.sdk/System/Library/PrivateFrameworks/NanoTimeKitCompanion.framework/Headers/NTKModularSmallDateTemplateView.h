/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKColoringLabel;

@interface NTKModularSmallDateTemplateView : NTKModularTemplateView

{
    NTKColoringLabel *_weekdayLabel;
    NTKColoringLabel *_dayLabel;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_layoutContentView;
- (void)setIsXL:(_Bool)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_configureContentSubviews;
- (id)_newLabelSubviewWithFont:(id)arg1;

@end
