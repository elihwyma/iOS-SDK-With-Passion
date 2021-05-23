/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLAbstractHeadlineProperties.h>

@interface NFLPremiumCellProperties : NFLAbstractHeadlineProperties

{
    double _accessoryLineHeight;
}

@property (nonatomic, readonly) double accessoryLineHeight;

- (double)horizontalTextSpacing;
- (double)imageToPublisherLogoSpacing;
- (double)titleToAccessoryViewSpacingWithTemplate:(id)arg1;
- (double)publisherLogoToTitleSpacingWithTemplate:(id)arg1;
- (double)accessoryViewToBottom;
- (double)imageAspectRatios;
- (double)_titleTopOffsetWithTemplate:(id)arg1;

@end
