/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilityCircularComplicationView.h>

@class UIView;

@protocol NTKComplicationImageView;

@interface NTKUtilitySmallImageTemplateView : NTKUtilityCircularComplicationView

{
    _Bool _needsLayoutContent;
    UIView<NTKComplicationImageView> *_imageView;
}

@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView;

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_layoutContentView;
- (void)_updateForTemplateChange;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setNeedsLayoutContent;

@end
