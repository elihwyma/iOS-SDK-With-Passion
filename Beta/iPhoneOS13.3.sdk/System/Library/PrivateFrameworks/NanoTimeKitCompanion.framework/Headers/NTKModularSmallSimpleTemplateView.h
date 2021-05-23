/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKColoringLabel, UIView;

@protocol NTKComplicationImageView;

@interface NTKModularSmallSimpleTemplateView : NTKModularTemplateView

{
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_label;
    long long _maxDynamicFontSize;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (id)supportedTemplateClasses;

- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_layoutContentView;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_configureWithTextTemplate:(id)arg1;
- (void)_configureWithImageTemplate:(id)arg1;
- (double)_maxTextWidthForDynamicFontSize:(long long)arg1;

@end
