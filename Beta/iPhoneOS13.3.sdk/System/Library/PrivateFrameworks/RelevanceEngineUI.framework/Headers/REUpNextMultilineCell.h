/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngineUI/REUpNextBaseCell.h>

@class NSArray, REUpNextAccessoryView, REUpNextImageView, UIFont, UILabel, UILayoutGuide, UIVisualEffectView;

@interface REUpNextMultilineCell : REUpNextBaseCell

{
    UILayoutGuide *_contentLayoutGuide;
    UILayoutGuide *_descriptionTextLayoutGuide;
    UILayoutGuide *_bodyImageSizingLayoutGuide;
    _Bool _showingHeader;
    _Bool _showingHeaderImage;
    _Bool _showingThreeLineLayout;
    _Bool _showingAccessory;
    _Bool _showingDescriptionImage;
    _Bool _usingStretchableImage;
    unsigned int _headerImageEdge;
    UILabel *_headerLabel;
    UILabel *_descriptionLine1Label;
    UILabel *_descriptionLine2Label;
    UIVisualEffectView *_headerImageEffectView;
    UIVisualEffectView *_headerVisualEffectView;
    UIVisualEffectView *_descriptionLine1EffectView;
    UIVisualEffectView *_descriptionLine2EffectView;
    REUpNextImageView *_headerImage;
    REUpNextAccessoryView *_accessoryView;
    REUpNextImageView *_descriptionImageView;
    UIFont *_standardFont;
    UIFont *_italicFont;
    UIFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withDescriptionAccessoryConstraints;
    NSArray *_withoutDescriptionAccessoryConstraints;
    NSArray *_withDescriptionImageViewConstraints;
    NSArray *_withStretchableDescriptionImageViewConstraints;
    NSArray *_withoutDescriptionImageViewConstraints;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)defaultTextColorDidChange;
- (void)_updateHeaderColor;
- (void)configureWithContent:(id)arg1;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;

@end
