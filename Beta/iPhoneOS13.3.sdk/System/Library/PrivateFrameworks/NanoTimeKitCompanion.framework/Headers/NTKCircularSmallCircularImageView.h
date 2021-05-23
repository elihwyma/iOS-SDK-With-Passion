/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class UIView;

@protocol NTKComplicationImageView;

@interface NTKCircularSmallCircularImageView : NTKCircularComplicationView

{
    UIView<NTKComplicationImageView> *_imageView;
}

@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView;

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setUsesMediumLayout:(_Bool)arg1;
- (void)_updateForTemplateChange;

@end
