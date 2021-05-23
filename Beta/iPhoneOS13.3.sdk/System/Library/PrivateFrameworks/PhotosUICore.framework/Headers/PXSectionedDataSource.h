/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXIndexPathSet;

@protocol OS_os_log;

@interface PXSectionedDataSource : NSObject <Swift>

{
    unsigned long long _identifier;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *sectionedDataSourceLog;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) _Bool containsAnyItems;
@property (nonatomic, readonly) _Bool containsMultipleItems;
@property (nonatomic, readonly) struct PXSimpleIndexPath firstSectionIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath lastSectionIndexPath;
@property (nonatomic, readonly) PXIndexPathSet *allSectionIndexPaths;
@property (nonatomic, readonly) struct PXSimpleIndexPath firstItemIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath lastItemIndexPath;
@property (nonatomic, readonly) PXIndexPathSet *allItemIndexPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)emptyDataSource;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (unsigned long long)totalItemCount;
- (id)inputForItem:(id)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (_Bool)couldObjectReferenceAppear:(id)arg1;
- (void)prefetchIndexPaths:(id)arg1;
- (void)prefetchSections:(id)arg1;
- (Class)objectReferenceClassForSection;
- (Class)objectReferenceClassForItem;
- (Class)objectReferenceClassForSubItem;
- (id)objectReferenceForObjectReference:(id)arg1;
- (struct PXSimpleIndexPath)convertIndexPath:(struct PXSimpleIndexPath)arg1 fromSectionedDataSource:(id)arg2;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath)arg1 untilEndIndexPath:(struct PXSimpleIndexPath)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)indexPathSetForItemsInIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)itemIndexPathsForSections:(id)arg1;
- (id)indexPathSetFromIndexPath:(struct PXSimpleIndexPath)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2;
- (id)fetchAllItemObjects;
- (long long)_numberOfAssetsWithMaximum:(long long)arg1;

@end
