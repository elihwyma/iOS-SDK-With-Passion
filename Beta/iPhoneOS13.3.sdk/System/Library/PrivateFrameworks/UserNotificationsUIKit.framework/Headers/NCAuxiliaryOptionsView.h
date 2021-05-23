/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class BSUIFontProvider, NSArray, NSString, NSStringDrawingContext, UILabel;

@interface NCAuxiliaryOptionsView : UIView <Swift>

{
    UILabel *_optionsSummaryLabel;
    UIView *_overlayView;
    double _widthForCachedLayoutInfo;
    unsigned long long _cachedSummaryLabelNumberOfLines;
    double _cachedSummaryLabelHeight;
    NSStringDrawingContext *_drawingContext;
    _Bool _auxiliaryOptionsVisible;
    _Bool _adjustsFontForContentSizeCategory;
    NSArray *_optionButtons;
    BSUIFontProvider *_fontProvider;
}

@property (retain, nonatomic) BSUIFontProvider *fontProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *optionsSummaryText;
@property (nonatomic) unsigned long long numberOfOptionButtons;
@property (nonatomic, readonly) NSArray *optionButtons;
@property (nonatomic) _Bool auxiliaryOptionsVisible;
@property (nonatomic) _Bool adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (unsigned long long)_summaryLabelNumberOfLinesForBoundsSize:(struct CGSize)arg1;
- (void)_configureOverlayIfNecessary;
- (void)_layoutOptionsSummaryTextLabel;
- (void)_layoutOptionsButtons;
- (void)_configureOptionsSummaryTextLabelIfNecessary;
- (void)_configureOptionsButtonsWithCount:(unsigned long long)arg1;
- (void)_updateTextAttributesForOptionsSummaryLabel;
- (void)_updateTextAttributesForOptionButton:(id)arg1;
- (id)_preferredFontForOptionsSummaryTextLabel;
- (id)_preferredFontForOptionButton;
- (id)_newOptionsButton;
- (void)_calculateOptionsSummaryLabelLayoutInfoForBoundsSize:(struct CGSize)arg1;
- (double)_summaryLabelHeightForBoundsSize:(struct CGSize)arg1;
- (struct CGSize)_optionsSummaryLabelSizeThatFits:(struct CGSize)arg1;

@end
