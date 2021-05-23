/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLAbstractHeadlineProperties.h>

@interface NFLTrendingProperties : NFLAbstractHeadlineProperties

{
    double _bylineLineHeight;
}

@property (nonatomic, readonly) double bylineLineHeight;

- (id)titleFontWithTemplate:(id)arg1;
- (id)titleFontNameWithTemplate:(id)arg1;
- (id)bylineFontWithTemplate:(id)arg1;
- (double)publisherLogoToTitleSpacingWithTemplate:(id)arg1;
- (double)spacingAboveArticle;
- (double)numberedCircleTopSpacingAboveLogoWithTemplate:(id)arg1;
- (double)numberedCircleTitleSpacingWithTemplate:(id)arg1;
- (id)bylineFontColorWithTemplate:(id)arg1;
- (double)titleToAccessorySpacingWithTemplate:(id)arg1;
- (double)_titleTopOffsetWithTemplate:(id)arg1;
- (double)ageLabelToAccessoryLabelSpacingWithTemplate:(id)arg1;
- (double)_bylineTopOffsetWithTemplate:(id)arg1;
- (double)_bylineFontSize;
- (double)titleFontSizeWithTemplate:(id)arg1;
- (id)_bylineFontNameWithTemplate:(id)arg1;

@end
