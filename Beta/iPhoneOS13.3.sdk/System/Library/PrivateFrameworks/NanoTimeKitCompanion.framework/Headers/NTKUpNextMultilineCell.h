/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class CLKFont, NSArray, NSString, NTKColoringLabel, NTKUpNextImageView, UILayoutGuide, UIView;

@interface NTKUpNextMultilineCell : NTKUpNextBaseCell

{
    UILayoutGuide *_contentLayoutGuide;
    UILayoutGuide *_descriptionTextLayoutGuide;
    UILayoutGuide *_bodyImageSizingLayoutGuide;
    _Bool _showingHeader;
    _Bool _showingHeaderImage;
    _Bool _showingThirdLine;
    _Bool _showingDescriptionAccessory;
    _Bool _showingImageAccessory;
    _Bool _showingDescriptionImage;
    _Bool _usingStretchableImage;
    unsigned int _headerImageEdge;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKColoringLabel *_descriptionLine2Label;
    NTKUpNextImageView *_headerImage;
    UIView *_accessoryView;
    NTKUpNextImageView *_descriptionImageView;
    CLKFont *_standardFont;
    CLKFont *_italicFont;
    CLKFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withAccessoryConstraints;
    NSArray *_withoutAccessoryConstraints;
    NSArray *_withDescriptionImageViewConstraints;
    NSArray *_withStretchableDescriptionImageViewConstraints;
    NSArray *_withoutDescriptionImageViewConstraints;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)suggestedBodyImageSizeForDevice:(id)arg1;

- (void)prepareForReuse;
- (void)setPaused:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)configureWithContent:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)setFilterProvider:(id)arg1;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;

@end
