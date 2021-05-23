/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject

{
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
    int _filter;
}

@property (nonatomic) int filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (nonatomic, readonly) unsigned long long albumsCount;
@property (nonatomic, readonly) _Bool isFolder;
@property (copy, nonatomic, readonly) CDUnknownBlockType albumsSortingComparator;
@property (nonatomic, readonly) unsigned long long unreadAlbumsCount;
@property (retain, nonatomic, readonly) NSString *_prettyDescription;
@property (retain, nonatomic, readonly) NSString *_typeDescription;

+ (struct NSObject *)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;

- (void)dealloc;
- (_Bool)isEmpty;
- (id)identifier;
- (id)managedObjectContext;
- (id)photoLibrary;
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
- (void)assetContainerListDidChange:(id)arg1;
- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
- (void)_invalidateAllAlbums;

@end
