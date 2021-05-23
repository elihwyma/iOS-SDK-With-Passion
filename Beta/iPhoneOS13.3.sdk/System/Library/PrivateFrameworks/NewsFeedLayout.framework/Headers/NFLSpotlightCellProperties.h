/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLAbstractHeadlineProperties.h>

@interface NFLSpotlightCellProperties : NFLAbstractHeadlineProperties

{
    double _accessoryLineHeight;
}

@property (nonatomic, readonly) double accessoryLineHeight;

- (long long)numberOfSegments;
- (id)titleFont;
- (double)titleFontSize;
- (id)accessoryFont;
- (double)horizontalTextSpacing;
- (double)titleToAccessoryViewSpacingWithTemplate:(id)arg1;
- (double)imageToTitleSpacing;
- (double)titleToExcerptSpacing;
- (double)excerptToAccessorySpacing;
- (double)titleRightMargin;
- (double)accessoryViewToBottomSpacing;
- (double)imageAspectRatio;
- (double)_titleTopOffsetWithTemplate:(id)arg1;

@end
