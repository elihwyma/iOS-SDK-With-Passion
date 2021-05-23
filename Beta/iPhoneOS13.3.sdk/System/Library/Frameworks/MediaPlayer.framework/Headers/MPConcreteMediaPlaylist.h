/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaPlaylist.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPMediaQuery, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <Swift>

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_properties;
    MPMediaQuery *_itemsQuery;
    void *_clusterPlaylist;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeAllItems;
- (id)items;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)representativeItem;
- (unsigned long long)mediaTypes;
- (_Bool)_allowsEditing;
- (id)mediaLibrary;
- (void)addItemWithProductID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addMediaItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)existsInLibrary;
- (void)removeFirstItem;
- (id)multiverseIdentifier;
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (id)valuesForProperties:(id)arg1;
- (id)itemsQuery;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)initWithProperties:(id)arg1 itemsQuery:(id)arg2;
- (void)_updateLibraryForPlaylistEdit:(id)arg1;
- (void)replaceItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceItemsWithPersistentIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appendItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appendItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)populateWithSeedItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id *)arg2;
- (id)geniusClusterItemsWithCount:(unsigned long long)arg1 error:(id *)arg2;
- (void)endGeneratingGeniusClusterItems;

@end
