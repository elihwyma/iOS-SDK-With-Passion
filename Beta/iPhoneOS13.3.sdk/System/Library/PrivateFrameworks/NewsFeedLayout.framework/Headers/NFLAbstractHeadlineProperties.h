/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLAbstractCellProperties.h>

@interface NFLAbstractHeadlineProperties : NFLAbstractCellProperties

@property (nonatomic, readonly) double accessoryViewToSharrowPadding;
@property (nonatomic, readonly) double extraYOffsetForSharrow;
@property (nonatomic, readonly) double sharrowHeight;
@property (nonatomic, readonly) double sharrowWidth;

- (long long)rowSpan;
- (double)publisherLogoHeight;
- (id)titleFontWithTemplate:(id)arg1;
- (id)titleFontNameWithTemplate:(id)arg1;
- (double)titleLineHeightWithTemplate:(id)arg1 font:(id)arg2;
- (id)bylineFontWithTemplate:(id)arg1;
- (id)bylineFontNameWithTemplate:(id)arg1;
- (double)publisherLogoToTitleSpacingWithTemplate:(id)arg1;
- (id)bylineFontColorWithTemplate:(id)arg1;
- (double)titleToAccessorySpacingWithTemplate:(id)arg1;
- (double)imageToTitleSpacing;
- (double)titleToExcerptSpacing;
- (double)excerptToAccessorySpacing;
- (double)accessoryViewToBottomSpacing;
- (double)_titleTopOffsetWithTemplate:(id)arg1;
- (double)ageLabelToAccessoryLabelSpacingWithTemplate:(id)arg1;
- (id)excerptFontWithTemplate:(id)arg1;
- (id)excerptFontNameWithTemplate:(id)arg1;
- (double)excerptLineHeightWithTemplate:(id)arg1 font:(id)arg2;
- (_Bool)allowsExcerpt;
- (_Bool)allowsExcerptInForYou;
- (double)_excerptTopOffsetWithTemplate:(id)arg1;
- (double)_bylineTopOffsetWithTemplate:(id)arg1;
- (double)_titleFontSizeWithTemplate:(id)arg1;
- (double)_excerptFontSizeWithTemplate:(id)arg1;
- (double)_bylineFontSize;
- (_Bool)allowsExcerptWithFeedSettings:(id)arg1;
- (double)titleToExcerptSpacingWithTemplate:(id)arg1;
- (double)segmentViewHeight;
- (double)excerptToAccessorySpacingWithTemplate:(id)arg1;

@end
