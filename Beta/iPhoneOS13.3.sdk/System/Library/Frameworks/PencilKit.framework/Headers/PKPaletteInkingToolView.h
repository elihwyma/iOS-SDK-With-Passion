/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKPaletteToolView.h>

@class NSLayoutConstraint, NSString, PKInk, UIImage, UIImageView, UILabel, UIViewController;

@interface PKPaletteInkingToolView : PKPaletteToolView

{
    UIViewController *_attributeViewController;
    PKInk *_ink;
    UIImageView *_colorIndicatorImageView;
    UIImage *_colorIndicatorImageUp;
    UIImage *_colorIndicatorImageRight;
    UIImage *_colorIndicatorImageLeft;
    UIImageView *_colorIndicatorContourImageView;
    UIImage *_colorIndicatorContourImageUp;
    UIImage *_colorIndicatorContourImageRight;
    UIImage *_colorIndicatorContourImageLeft;
    UIImageView *_tipIndicatorImageView;
    UIImage *_toolTipImageUp;
    UIImage *_toolTipImageRight;
    UIImage *_toolTipImageLeft;
    UIImageView *_tipIndicatorContourImageView;
    UIImage *_toolTipContourImageUp;
    UIImage *_toolTipContourImageRight;
    UIImage *_toolTipContourImageLeft;
    UILabel *_opacityLabel;
    NSLayoutConstraint *_opacityLabelBottomConstraint;
    NSLayoutConstraint *_opacityLabelLeadingConstraint;
    NSLayoutConstraint *_opacityLabelTrailingConstraint;
    NSLayoutConstraint *_opacityLabelCenterXConstraint;
    NSLayoutConstraint *_opacityLabelCenterYConstraint;
}

@property (retain, nonatomic) PKInk *ink;
@property (retain, nonatomic) UIImageView *colorIndicatorImageView;
@property (retain, nonatomic) UIImage *colorIndicatorImageUp;
@property (retain, nonatomic) UIImage *colorIndicatorImageRight;
@property (retain, nonatomic) UIImage *colorIndicatorImageLeft;
@property (retain, nonatomic) UIImageView *colorIndicatorContourImageView;
@property (retain, nonatomic) UIImage *colorIndicatorContourImageUp;
@property (retain, nonatomic) UIImage *colorIndicatorContourImageRight;
@property (retain, nonatomic) UIImage *colorIndicatorContourImageLeft;
@property (retain, nonatomic) UIImageView *tipIndicatorImageView;
@property (retain, nonatomic) UIImage *toolTipImageUp;
@property (retain, nonatomic) UIImage *toolTipImageRight;
@property (retain, nonatomic) UIImage *toolTipImageLeft;
@property (retain, nonatomic) UIImageView *tipIndicatorContourImageView;
@property (retain, nonatomic) UIImage *toolTipContourImageUp;
@property (retain, nonatomic) UIImage *toolTipContourImageRight;
@property (retain, nonatomic) UIImage *toolTipContourImageLeft;
@property (retain, nonatomic) UILabel *opacityLabel;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelCenterYConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultColorForInkingToolWithIdentifier:(id)arg1;

- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setInkColor:(id)arg1;
- (void)setEdgeLocation:(unsigned long long)arg1;
- (void)inkAttributesPickerDidChangeInkThickness:(id)arg1;
- (void)inkAttributesPickerDidChangeInkOpacity:(id)arg1;
- (void)_inkAttributesPickerUserDidEndDraggingSlider:(id)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setToolProperties:(id)arg1;
- (id)toolProperties;
- (long long)_uiColorUserInterfaceStyle;
- (id)_uiColor;
- (id)initWithToolIdentifier:(id)arg1 toolProperties:(id)arg2;
- (id)initWithToolIdentifier:(id)arg1;
- (void)_setToolProperties:(id)arg1 toolIdentifier:(id)arg2;
- (id)_opacityLabelFont;
- (void)_updateOpacityLabel;
- (struct CGRect)_colorIndicatorImageViewFrame;
- (void)_updateToolColorBandAndTipImageViews;
- (id)_toolColorIndicatorImageForCurrentEdgeLocation;
- (id)_toolColorIndicatorContourImageForCurrentEdgeLocation;
- (id)_toolTipImageForCurrentEdgeLocation;
- (id)_toolTipContourImageForCurrentEdgeLocation;
- (void)_reloadToolImage;
- (void)setInkWeight:(double)arg1;
- (id)attributeViewController;

@end
