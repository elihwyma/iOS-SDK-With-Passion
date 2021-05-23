/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilitySmallRingComplicationView.h>

@class NTKColoringLabel;

@interface NTKUtilitySmallRingTextComplicationView : NTKUtilitySmallRingComplicationView

{
    NTKColoringLabel *_label;
}

@property (nonatomic, readonly) NTKColoringLabel *label;

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateForTemplateChange;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setLabelText:(id)arg1;

@end
