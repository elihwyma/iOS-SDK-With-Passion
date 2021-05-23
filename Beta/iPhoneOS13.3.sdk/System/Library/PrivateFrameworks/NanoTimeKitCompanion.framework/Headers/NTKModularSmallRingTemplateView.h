/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class CLKProgressProvider, NTKColoringImageView, NTKColoringLabel, UIView;

@protocol NTKComplicationImageView;

@interface NTKModularSmallRingTemplateView : NTKModularTemplateView

{
    UIView<NTKComplicationImageView> *_imageView;
    float _level;
    CLKProgressProvider *_progressProvider;
    struct NSNumber *_progressUpdateToken;
    NTKColoringImageView *_stateRing;
    NTKColoringLabel *_label;
}

@property (retain, nonatomic) NTKColoringImageView *stateRing;
@property (retain, nonatomic) NTKColoringLabel *label;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (id)supportedTemplateClasses;

- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_layoutContentView;
- (void)setIsXL:(_Bool)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateRingWithRingDescription:(id)arg1;
- (void)_refreshRingImageWithRing:(id)arg1;
- (void)_refreshRingImage;
- (void)_configureContentSubviews;
- (void)updateRingWithProgressProvider:(id)arg1;

@end
