/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLSortedAlbumList;

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification

{
    PLSortedAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_backingNotification;
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)init;
- (id)description;
- (id)object;
- (id)_changedObjects;
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (_Bool)shouldReload;
- (_Bool)countDidChange;
- (id)albumList;
- (id)initWithSortedAlbumList:(id)arg1 albumListChangeNotification:(id)arg2;

@end
