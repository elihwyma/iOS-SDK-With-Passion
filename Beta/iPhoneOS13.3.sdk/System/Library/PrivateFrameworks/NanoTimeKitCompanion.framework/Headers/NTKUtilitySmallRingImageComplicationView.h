/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilitySmallRingComplicationView.h>

@class CLKProgressProvider, UIView;

@protocol NTKComplicationImageView;

@interface NTKUtilitySmallRingImageComplicationView : NTKUtilitySmallRingComplicationView

{
    UIView<NTKComplicationImageView> *_imageView;
    CLKProgressProvider *_progressProvider;
    struct NSNumber *_progressUpdateToken;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (void)layoutSubviews;
- (id)ringColor;
- (void)updateRingWithProgressProvider:(id)arg1;
- (void)_updateForTemplateChange;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateWithImageProvider:(id)arg1;

@end
