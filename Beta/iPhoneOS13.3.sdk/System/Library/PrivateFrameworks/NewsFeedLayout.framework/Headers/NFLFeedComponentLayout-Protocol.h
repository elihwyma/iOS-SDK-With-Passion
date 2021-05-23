/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/Swift-Protocol.h>

@class NSArray;

@protocol NFLFeedComponentLayout <Swift>

@property (nonatomic, readonly) double rank;
@property (copy, nonatomic, readonly) NSArray *tileInfosUsed;
@property (nonatomic, readonly) unsigned long long rowSpan;
@property (nonatomic, readonly) unsigned long long columnSpan;

- (unsigned short)layoutInfosAtRowOrigin:columnOrigin:subBatchRowOffset:feedSettings: /* Error: Ran out of types for this method. */;

@end
