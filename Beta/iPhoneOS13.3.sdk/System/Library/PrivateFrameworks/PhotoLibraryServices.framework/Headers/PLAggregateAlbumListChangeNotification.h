/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLAggregateAlbumList;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification

{
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    unsigned long long _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3;

- (void)dealloc;
- (id)object;
- (id)insertedObjects;
- (id)insertedIndexes;
- (id)deletedIndexes;
- (id)deletedObjects;
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (_Bool)shouldReload;
- (void)enumerateMovesWithBlock:(CDUnknownBlockType)arg1;
- (id)changedIndexes;
- (id)changedIndexesRelativeToSnapshot;
- (id)changedObjects;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;
- (struct NSObject *)albumList;
- (id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3;

@end
