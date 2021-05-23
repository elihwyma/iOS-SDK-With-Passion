/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSPredicate, NSString, PLIndexMapper, PLManagedAlbumList, PLPhotoLibrary;

@protocol NSObject><NSCopying, PLIndexMappingCache;

@interface PLFilteredAlbumList : NSObject

{
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    NSMutableOrderedSet *_weak_albums;
    NSObject<PLIndexMappingCache> *_derivedAlbumLists[5];
    int filter;
    PLManagedAlbumList *backingAlbumList;
    NSPredicate *predicate;
}

@property (retain, nonatomic) PLManagedAlbumList *backingAlbumList;
@property (nonatomic) int filter;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSMutableOrderedSet *_albums;
@property (nonatomic, readonly) short albumListType;
@property (nonatomic, readonly) NSMutableOrderedSet *albums;
@property (nonatomic, readonly) unsigned long long unreadAlbumsCount;
@property (nonatomic, readonly) _Bool canEditAlbums;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PLIndexMapper *indexMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (nonatomic, readonly) unsigned long long albumsCount;
@property (nonatomic, readonly) _Bool isFolder;
@property (copy, nonatomic, readonly) CDUnknownBlockType albumsSortingComparator;
@property (retain, nonatomic, readonly) NSString *_prettyDescription;
@property (retain, nonatomic, readonly) NSString *_typeDescription;
@property (copy, nonatomic, readonly) NSIndexSet *filteredIndexes;
@property (copy, nonatomic, readonly) id <NSObject><NSCopying> cachedIndexMapState;

+ (id)filteredAlbumList:(id)arg1 filter:(int)arg2;

- (void)dealloc;
- (_Bool)isEmpty;
- (id)identifier;
- (id)managedObjectContext;
- (void)unregisterAllDerivedAlbums;
- (_Bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (Class)derivedChangeNotificationClass;
- (_Bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (id)containers;
- (_Bool)canEditContainers;
- (id)containersRelationshipName;
- (void)registerDerivedAlbumList:(struct NSObject *)arg1;
- (void)enumerateDerivedAlbumLists:(CDUnknownBlockType)arg1;
- (_Bool)hasAtLeastOneAlbum;
- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;
- (void)setNeedsReordering;
- (_Bool)needsReordering;
- (void)updateAlbumsOrderIfNeeded;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2;
- (void)_backingContextDidChange:(id)arg1;
- (void)_invalidateFilteredIndexes;
- (unsigned long long)countOfFilteredAlbums;
- (unsigned long long)indexInFilteredAlbumsOfObject:(id)arg1;
- (id)objectInFilteredAlbumsAtIndex:(unsigned long long)arg1;
- (id)filteredAlbumsAtIndexes:(id)arg1;
- (void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromFilteredAlbumsAtIndex:(unsigned long long)arg1;
- (void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2;
- (void)removeFilteredAlbumsAtIndexes:(id)arg1;
- (void)replaceObjectInFilteredAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;

@end
