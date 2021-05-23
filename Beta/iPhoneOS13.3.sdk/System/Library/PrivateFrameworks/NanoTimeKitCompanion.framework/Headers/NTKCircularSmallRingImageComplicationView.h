/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCircularSmallRingComplicationView.h>

@class CLKProgressProvider, UIView;

@protocol NTKComplicationImageView;

@interface NTKCircularSmallRingImageComplicationView : NTKCircularSmallRingComplicationView

{
    UIView<NTKComplicationImageView> *_imageView;
    CLKProgressProvider *_progressProvider;
    struct NSNumber *_progressUpdateToken;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (double)_imageScaleForTemplate:(id)arg1;

- (void)layoutSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateRingWithProgressProvider:(id)arg1;
- (void)_updateForTemplateChange;

@end
