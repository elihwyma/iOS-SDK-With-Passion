/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSMapTable, NSMutableSet, NSOrderedSet, NSSet, PXSelectionSnapshot;

@protocol PHAssetCollectionDataSource;

@interface PUPhotoSelectionManager : NSObject <Swift>

{
    NSHashTable *_changeObservers;
    NSMapTable *_selectionEntriesByAssetCollection;
    NSMutableSet *_uniqueAssetSelection;
    long long _selectionChangeCount;
    long long _options;
    id <PHAssetCollectionDataSource> _dataSource;
}

@property (nonatomic, readonly) long long options;
@property (weak, nonatomic) id <PHAssetCollectionDataSource> dataSource;
@property (nonatomic, readonly) _Bool isAnyAssetSelected;
@property (nonatomic, readonly) NSSet *selectedAssets;
@property (nonatomic, readonly) NSOrderedSet *orderedSelectedAssets;
@property (nonatomic, readonly) NSDictionary *selectedAssetsByAssetCollection;
@property (nonatomic, readonly) NSArray *selectedAssetCollections;
@property (nonatomic, readonly) PXSelectionSnapshot *selectionSnapshot;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(long long)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (struct PXAssetMediaTypeCount)requestAssetsMediaTypeCount;
- (id)_selectionEntryForAssetCollection:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)selectAssetAtIndex:(unsigned long long)arg1 inAssetCollection:(id)arg2;
- (void)selectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2;
- (void)selectAllAssetsInAssetCollections:(id)arg1;
- (void)deselectAssetAtIndex:(unsigned long long)arg1 inAssetCollection:(id)arg2;
- (void)deselectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2;
- (void)deselectAllAssetsInAssetCollections:(id)arg1;
- (void)deselectAllAssets;
- (_Bool)isAssetAtIndexSelected:(unsigned long long)arg1 inAssetCollection:(id)arg2;
- (_Bool)isAnyAssetSelectedInAssetCollection:(id)arg1;
- (_Bool)isAnyAssetSelectedInAssetCollections:(id)arg1;
- (_Bool)areAllAssetsSelectedInAssetCollection:(id)arg1;
- (_Bool)areAllAssetsSelectedInAssetCollections:(id)arg1;
- (id)selectedAssetIndexesWithAssetCollectionOrdering:(id)arg1;
- (void)enumerateSelectedAssetsWithAssetCollectionOrdering:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)selectedAssetsWithAssetCollectionOrdering:(id)arg1;
- (id)localizedSelectionString;
- (void)handlePhotoLibraryChange:(id)arg1;
- (void)invalidateAllAssetIndexes;
- (void)_beginSelectionChange;
- (void)_endSelectionChange;
- (_Bool)_shouldUniqueAssets;

@end
