/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKColoringLabel, NTKOneColumnModularSmallLayoutAttributes, UIView;

@protocol NTKComplicationImageView;

@interface NTKModularSmallStackTemplateView : NTKModularTemplateView

{
    NTKOneColumnModularSmallLayoutAttributes *_layoutAttributes;
    NTKColoringLabel *_titleLabel;
    NTKColoringLabel *_subtitleLabel;
    UIView<NTKComplicationImageView> *_imageView;
}

@property (retain, nonatomic) NTKColoringLabel *titleLabel;
@property (retain, nonatomic) NTKColoringLabel *subtitleLabel;
@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (void)_update;
- (void)_layoutContentView;
- (void)_updateLayoutForLabel:(id)arg1 baselineOffset:(double)arg2;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;

@end
