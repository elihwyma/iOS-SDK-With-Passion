/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringLabel, UIView;

@protocol NTKComplicationImageView;

@interface NTKCircularSmallSimpleComplicationView : NTKCircularComplicationView

{
    NTKColoringLabel *_label;
    UIView<NTKComplicationImageView> *_imageView;
    double _maxDynamicFontSize;
}

@property (retain, nonatomic) NTKColoringLabel *label;
@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView;
@property (nonatomic) double maxDynamicFontSize;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (double)_imageScaleForTemplate:(id)arg1 forDevice:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateLabelsForFontChange;
- (void)_updateForTemplateChange;
- (double)_baselineOffsetForDynamicSize:(long long)arg1;
- (void)_updateLabelWithTextProvider:(id)arg1;
- (void)_updateImageViewWithImageProvider:(id)arg1;
- (void)updateLabelWithString:(id)arg1;
- (void)updateImageViewWithImage:(id)arg1;

@end
