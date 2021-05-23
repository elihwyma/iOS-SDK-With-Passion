/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@class NTKColoringLabel, UIView;

@protocol NTKComplicationImageView;

@interface NTKUtilityImageAndLabelsComplicationView : NTKUtilityComplicationView

{
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_firstLabel;
    NTKColoringLabel *_secondLabel;
}

@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView;
@property (retain, nonatomic) NTKColoringLabel *firstLabel;
@property (retain, nonatomic) NTKColoringLabel *secondLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (double)_widthThatFits;
- (void)_updateContentForMaxSizeChange;
- (_Bool)_shouldLayoutWithImageView;
- (void)_layoutSubviewsHorizontally:(id)arg1;
- (void)_updateFirstLabelMaxSize;
- (_Bool)_isViewVisible:(id)arg1;
- (double)_gapBetweenView:(id)arg1 nextView:(id)arg2;
- (void)_setLabelTextProvider:(id)arg1;
- (void)_setLabelText:(id)arg1;
- (void)_setLabelAttributedText:(id)arg1;
- (void)_setSecondLabelText:(id)arg1;
- (void)_updateWithImageProvider:(id)arg1;

@end
