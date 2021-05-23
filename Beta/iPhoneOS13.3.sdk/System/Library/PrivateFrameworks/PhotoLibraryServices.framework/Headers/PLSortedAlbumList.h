/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSString;

@protocol NSObject><NSCopying, PLAlbumContainer;

@interface PLSortedAlbumList : NSObject

{
    struct NSObject *_backingAlbumList;
    struct __CFArray *_toBackingMap;
    struct __CFArray *_fromBackingMap;
    CDUnknownBlockType _sortComparator;
    NSMutableOrderedSet *_weak_albums;
}

@property (retain, nonatomic) NSObject<PLAlbumContainer> *backingAlbumList;
@property (retain, nonatomic) NSMutableOrderedSet *_albums;
@property (copy, nonatomic) CDUnknownBlockType sortComparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (nonatomic, readonly) unsigned long long albumsCount;
@property (nonatomic, readonly) _Bool isFolder;
@property (copy, nonatomic, readonly) CDUnknownBlockType albumsSortingComparator;
@property (nonatomic, readonly) int filter;
@property (nonatomic, readonly) unsigned long long unreadAlbumsCount;
@property (retain, nonatomic, readonly) NSString *_prettyDescription;
@property (retain, nonatomic, readonly) NSString *_typeDescription;
@property (copy, nonatomic, readonly) id <NSObject><NSCopying> cachedIndexMapState;

- (void)dealloc;
- (_Bool)isEmpty;
- (id)identifier;
- (id)managedObjectContext;
- (id)photoLibrary;
- (_Bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (Class)derivedChangeNotificationClass;
- (id)containers;
- (_Bool)canEditContainers;
- (id)containersRelationshipName;
- (id)albums;
- (_Bool)hasAtLeastOneAlbum;
- (short)albumListType;
- (_Bool)canEditAlbums;
- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;
- (void)setNeedsReordering;
- (_Bool)needsReordering;
- (void)updateAlbumsOrderIfNeeded;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (id)initWithAlbumList:(struct NSObject *)arg1 sortComparator:(CDUnknownBlockType)arg2;
- (void)createSortedIndexesMap;
- (unsigned long long)countOfSortedAlbums;
- (unsigned long long)indexInSortedAlbumsOfObject:(id)arg1;
- (id)objectInSortedAlbumsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSortedAlbumsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromSortedAlbumsAtIndex:(unsigned long long)arg1;
- (void)replaceObjectInSortedAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
