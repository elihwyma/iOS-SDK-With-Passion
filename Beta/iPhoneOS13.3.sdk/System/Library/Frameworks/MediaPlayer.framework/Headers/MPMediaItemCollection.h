/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaEntity.h>

@class MPMediaItem, MPMediaQuery, NSArray;

@interface MPMediaItemCollection : MPMediaEntity

{
    unsigned long long _containedMediaTypes;
    _Bool _initializedContainedMediaTypes;
    NSArray *_items;
    unsigned long long _itemsCount;
    MPMediaQuery *_itemsQuery;
    MPMediaItem *_representativeItem;
}

@property (nonatomic, readonly) long long groupingType;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) MPMediaItem *representativeItem;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long mediaTypes;

+ (_Bool)supportsSecureCoding;
+ (id)titlePropertyForGroupingType:(long long)arg1;
+ (id)collectionWithItems:(id)arg1;
+ (id)sortTitlePropertyForGroupingType:(long long)arg1;
+ (id)representativePersistentIDPropertyForGroupingType:(long long)arg1;
+ (id)artworkCatalogCachePropertiesForGroupingType:(long long)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)initWithItems:(id)arg1;
- (id)artworkCatalog;
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;
- (id)multiverseIdentifier;
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithItemsQuery:(id)arg1;
- (id)itemsQuery;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)artistArtworkCatalog;
- (id)_artworkCatalogRepresentativeItem;
- (id)albumArtistArtworkCatalog;
- (_Bool)MPSD_hasDownloadableItem;
- (_Bool)MPSD_hasDownloadingItem;

@end
