/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>

@class NSIndexSet, NSString, PLFilteredAlbum, PLIndexMapper;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification

{
    PLFilteredAlbum *_album;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerChangeNotification *_backingNotification;
}

@property (retain, nonatomic, readonly) NSIndexSet *updatedFilteredIndexes;
@property (copy, nonatomic) NSIndexSet *filteredIndexes;
@property (retain, nonatomic, readonly) PLIndexMapper *indexMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)init;
- (id)object;
- (id)album;
- (id)_changedObjects;
- (_Bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (_Bool)titleDidChange;
- (_Bool)keyAssetDidChange;
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (_Bool)shouldReload;
- (_Bool)countDidChange;
- (id)_diffDescription;

@end
