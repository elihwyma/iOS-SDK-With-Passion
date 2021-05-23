/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NFLHeadlineTileInfo, NSArray, NSString;

@interface NFLSubscriptionPlacardTileInfo : NSObject

@property (copy, nonatomic, readonly) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long tileInfoType;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool pageable;
@property (nonatomic, readonly, getter=isSelectable) _Bool selectable;
@property (nonatomic, readonly) unsigned long long bookmarkOffsetType;
@property (nonatomic, readonly) NSArray *underlyingFeedElements;
@property (nonatomic, readonly) NFLHeadlineTileInfo *feedTileInfoForBookmarking;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)updatedTileInfoWithNewHeadline:(id)arg1;

@end
