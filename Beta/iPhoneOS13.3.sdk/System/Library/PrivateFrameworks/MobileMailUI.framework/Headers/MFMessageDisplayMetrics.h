/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSObject.h>

@class ConversationFooterViewDisplayMetrics, UITraitCollection;

@interface MFMessageDisplayMetrics : NSObject

{
    UITraitCollection *_traitCollection;
    double _topToSenderBaseline;
    double _baselineToBaselineSpacing;
    double _recipientBaselineToFirstSeparator;
    double _firstSeparatorToSubjectBaseline;
    double _headerBottomPadding;
    double _statusIndicatorVerticalSpacing;
    double _footerViewButtonsAnimationOffset;
    ConversationFooterViewDisplayMetrics *_footerViewDisplayMetrics;
    struct UIEdgeInsets _layoutMargins;
    struct UIEdgeInsets _safeAreaInsets;
}

@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) struct UIEdgeInsets layoutMargins;
@property (nonatomic) struct UIEdgeInsets safeAreaInsets;
@property (retain, nonatomic) ConversationFooterViewDisplayMetrics *footerViewDisplayMetrics;
@property (nonatomic) double footerViewButtonsAnimationOffset;
@property (nonatomic, readonly) _Bool hasCompactLayout;
@property (nonatomic, readonly) _Bool hasGenerousMargins;
@property (nonatomic, readonly) _Bool prefersFlushSeparator;
@property (nonatomic, readonly) double avatarDiameterForCurrentContentSize;
@property (nonatomic, readonly) double minHorizontalSpacing;
@property (nonatomic, readonly) double topToSenderBaseline;
@property (nonatomic, readonly) double topToSenderBaselineInConversation;
@property (nonatomic, readonly) double topToSenderBaselineInConversationForMailActionHeader;
@property (nonatomic, readonly) double baselineToBaselineSpacingInConversationForMailActionHeader;
@property (nonatomic, readonly) double baselineToBaselineSpacing;
@property (nonatomic, readonly) double baselineToBaselineSpacingInConversation;
@property (nonatomic, readonly) double recipientBaselineToFirstSeparator;
@property (nonatomic, readonly) double recipientBaselineToFirstSeparatorInConversation;
@property (nonatomic, readonly) double firstSeparatorToSubjectBaseline;
@property (nonatomic, readonly) double headerBottomPadding;
@property (nonatomic, readonly) double statusIndicatorHorizontalSpacing;
@property (nonatomic, readonly) double statusIndicatorVerticalSpacing;
@property (nonatomic, readonly) double messageTopPaddingInConversation;
@property (nonatomic, readonly) double messageBottomPaddingInConversation;
@property (nonatomic, readonly) double messageTopPaddingInConversationForMailActionHeader;
@property (nonatomic, readonly) double messageBottomPaddingInConversationForMailActionHeader;
@property (nonatomic, readonly) double estimatedFooterViewHeight;
@property (nonatomic, readonly) double footerViewTopToBaseline;
@property (nonatomic, readonly) _Bool usePhoneLandscapeSymbolConfiguration;
@property (nonatomic, readonly) double cellHeightToStartScroll;
@property (nonatomic, readonly) double topToGlyphBaselineInMailActionCardHorizontalGroup;
@property (nonatomic, readonly) double baselineToBaselineSpacingInMailActionCardHorizontalGroup;
@property (nonatomic, readonly) double bottomSpacingInMailActionCardHorizontalGroup;
@property (nonatomic, readonly) double topToFirstBaselineSpacingInMailActionCardVerticalGroup;
@property (nonatomic, readonly) double bottomToLastBaselineInMailActionCardVerticalGroup;
@property (nonatomic, readonly) double mailActionCardPreferredHeightForPad;
@property (nonatomic, readonly) double mailActionCardMaximumContainerViewHeightForLargerMediumDetent;
@property (nonatomic, readonly) double mailActionCardSmallerMediumDetentCoverage;
@property (nonatomic, readonly) double mailActionCardLargerMediumDetentCoverage;
@property (nonatomic, readonly) double conversationHeaderViewCollapsedSuperTitleTopToFirstBaseline;
@property (nonatomic, readonly) double conversationHeaderViewExpandedSuperTitleTopToFirstBaseline;
@property (nonatomic, readonly) _Bool conversationHeaderViewShouldHideCollapsedSuperTitle;
@property (nonatomic, readonly) double conversationHeaderViewCollapsedTitleTopToFirstBaseline;
@property (nonatomic, readonly) double conversationHeaderViewCollapsedTitleBottomToLastBaseline;
@property (nonatomic, readonly) double conversationHeaderViewExpandedTitleTopToFirstBaseline;
@property (nonatomic, readonly) double conversationHeaderViewExpandedTitleBottomToLastBaseline;

+ (double)avatarDiameter;
+ (id)displayMetricsWithTraitCollection:(id)arg1 layoutMargins:(struct UIEdgeInsets)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3 interfaceOrientation:(long long)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (double)_scaledFloatWithValue:(double)arg1 fontStyle:(id)arg2;
- (double)_scaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 maximumContentSizeCategory:(id)arg3;
- (double)_calculateFooterViewButtonsAnimationOffset;
- (id)fontCacheKeyPrefix;
- (id)_cachedFontForStyle:(id)arg1;

@end
