/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol FCHeadlineProviding;

@interface NFLHeadlineTileInfo : NSObject

{
    _Bool _aggregated;
    NSString *_groupIdentifier;
    id <FCHeadlineProviding> _headline;
    NSString *_bookmarkableIdentifier;
    NSString *_namespacedIdentifier;
}

@property (copy, nonatomic) id <FCHeadlineProviding> headline;
@property (copy, nonatomic) NSString *namespacedIdentifier;
@property (copy, nonatomic, readonly) NSString *groupIdentifier;
@property (copy, nonatomic, readonly) NSString *bookmarkableIdentifier;
@property (nonatomic, readonly, getter=isAggregated) _Bool aggregated;
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

+ (id)identifierWithBookmarkableIdentifier:(id)arg1 groupIdentifier:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)updatedTileInfoWithNewHeadline:(id)arg1;
- (id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2 aggregated:(_Bool)arg3;
- (id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2;

@end
