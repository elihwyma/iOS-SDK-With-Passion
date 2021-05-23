/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class NSIndexSet, NSString, PLFilteredAlbumList, PLIndexMapper;

@interface PLFilteredAlbumListChangeNotification : PLAssetContainerListChangeNotification

{
    PLFilteredAlbumList *_albumList;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerListChangeNotification *_backingNotification;
}

@property (retain, nonatomic, readonly) NSIndexSet *updatedFilteredIndexes;
@property (copy, nonatomic) NSIndexSet *filteredIndexes;
@property (retain, nonatomic, readonly) PLIndexMapper *indexMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)init;
- (id)object;
- (id)_changedObjects;
- (_Bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (_Bool)shouldReload;
- (_Bool)countDidChange;
- (id)_diffDescription;
- (id)albumList;
- (id)initWithFilteredAlbumList:(id)arg1 albumListChangeNotification:(id)arg2;

@end
