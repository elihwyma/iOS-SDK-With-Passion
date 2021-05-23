/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <NewsFeedLayout/Swift-Protocol.h>

@class NFLHeadlineTileInfo, NSArray, NSString;

@protocol NFLFeedTileInfo <Swift>

@property (nonatomic, readonly) unsigned long long tileInfoType;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool pageable;
@property (nonatomic, readonly, getter=isSelectable) _Bool selectable;
@property (nonatomic, readonly) unsigned long long bookmarkOffsetType;
@property (nonatomic, readonly) NSArray *underlyingFeedElements;
@property (nonatomic, readonly) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property (copy, nonatomic, readonly) NSString *groupIdentifier;

- (unsigned short)updatedTileInfoWithNewHeadline: /* Error: Ran out of types for this method. */;

@end
