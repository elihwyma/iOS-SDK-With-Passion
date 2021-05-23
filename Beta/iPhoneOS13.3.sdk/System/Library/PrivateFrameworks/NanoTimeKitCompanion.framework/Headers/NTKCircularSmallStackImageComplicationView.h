/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringLabel, UIView;

@protocol NTKComplicationImageView;

@interface NTKCircularSmallStackImageComplicationView : NTKCircularComplicationView

{
    NTKColoringLabel *_label;
    UIView<NTKComplicationImageView> *_imageView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (double)_imageScaleForTemplate:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateLabelsForFontChange;
- (void)_updateForTemplateChange;

@end
