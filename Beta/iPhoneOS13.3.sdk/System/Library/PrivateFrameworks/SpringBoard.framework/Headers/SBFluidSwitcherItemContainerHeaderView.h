/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSUIEmojiLabelView, MTVisualStyling, NSArray, NSString, SBFluidSwitcherIconImageContainerView, SBFluidSwitcherItemContainerHeaderItem, UILabel;

@interface SBFluidSwitcherItemContainerHeaderView : UIView <Swift>

{
    SBFluidSwitcherItemContainerHeaderItem *_firstItem;
    SBFluidSwitcherIconImageContainerView *_firstIconImageView;
    UILabel *_firstTitleLabel;
    BSUIEmojiLabelView *_firstSubtitleLabelView;
    SBFluidSwitcherItemContainerHeaderItem *_secondItem;
    SBFluidSwitcherIconImageContainerView *_secondIconImageView;
    UILabel *_secondTitleLabel;
    BSUIEmojiLabelView *_secondSubtitleLabelView;
    long long _subtitleVisualStylingInterfaceStyle;
    MTVisualStyling *_subtitleVisualStyling;
    double _spacingBetweenLeadingEdgeAndIcon;
    double _spacingBetweenTrailingEdgeAndLabels;
    double _iconSideLength;
    double _spacingBetweenSnapshotAndIcon;
    double _spacingBetweenSnapshotAndDescriptionLabelBaseline;
    double _spacingBetweenTitleAndSubtitleBaseline;
    double _spacingBetweenIconAndLabel;
    double _spacingBetweenLabelAndSecondIcon;
    double _spacingBetweenBoundsCenterAndSecondIcon;
    double _textAlpha;
    NSArray *_headerItems;
}

@property (nonatomic, readonly) double preferredHeaderHeight;
@property (nonatomic) double textAlpha;
@property (copy, nonatomic) NSArray *headerItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)distanceFromBoundingLeadingEdgeToIconTrailingEdge;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_titleLabelFont;
- (id)_subtitleLabelFont;
- (void)setHeaderItems:(id)arg1 animated:(_Bool)arg2;
- (void)_applyPrototypeSettings;
- (void)_updateVisualStylingWithHeaderItems:(id)arg1;
- (void)_updateTitleAlpha;

@end
