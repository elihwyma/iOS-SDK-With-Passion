/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NSArray;

@interface NFLHorizontalSubBatchLayout : NFLSubBatchLayout

{
    NSArray *_components;
}

@property (copy, nonatomic) NSArray *components;

- (_Bool)isValid;
- (double)rank;
- (unsigned long long)rowSpan;
- (id)initWithFeedSettings:(id)arg1 components:(id)arg2;
- (id)tileInfosUsed;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)singleComponentLayouts;
- (id)initWithFeedSettings:(id)arg1;

@end
