/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, PHAssetCollection, PHCollectionList, PHPhotoLibrary, PLQuery, PXAssetCountObserver, PXLabeledValue, PXSmartAlbumPhotoKitEditingContext;

@protocol PXSmartAlbumQueryDelegate;

@interface PXSmartAlbumPhotoKitQuery : NSObject

{
    NSMutableArray *_conditions;
    PHAssetCollection *_albumToEdit;
    PHCollectionList *_collectionList;
    PHPhotoLibrary *_photoLibrary;
    PXSmartAlbumPhotoKitEditingContext *_editingContext;
    PLQuery *_query;
    PXAssetCountObserver *_assetCountObserver;
    _Bool _canPersistChanges;
    NSString *_title;
    NSArray *_conjunctionValues;
    PXLabeledValue *_conjunctionValue;
    NSString *_statusString;
    id <PXSmartAlbumQueryDelegate> _delegate;
}

@property (nonatomic) _Bool canPersistChanges;
@property (retain, nonatomic) NSString *statusString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) NSArray *conjunctionValues;
@property (retain, nonatomic) PXLabeledValue *conjunctionValue;
@property (retain, nonatomic) NSArray *conditions;
@property (weak, nonatomic) id <PXSmartAlbumQueryDelegate> delegate;

+ (void)_createSmartAlbumWithTitle:(id)arg1 inCollectionList:(id)arg2 query:(id)arg3 photoLibrary:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)_editSmartAlbum:(id)arg1 title:(id)arg2 query:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)queryWithSmartAlbum:(id)arg1 collectionList:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;

- (id)init;
- (void)_updateStatusString;
- (void)assetCountObserver:(id)arg1 didChangeNumberOfAssets:(long long)arg2;
- (id)addNewConditionAfterCondition:(id)arg1;
- (id)replaceCondition:(id)arg1 withConditionOfType:(long long)arg2;
- (void)removeCondition:(id)arg1;
- (void)persistChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)conditionDidChange:(id)arg1;
- (id)_initWithSmartAlbum:(id)arg1 collectionList:(id)arg2 photoLibrary:(id)arg3 query:(id)arg4 editingContext:(id)arg5 conditions:(id)arg6;
- (void)_updateCanPersistChanges;
- (void)_updateAssetCountObserver;
- (void)_updateQueryFromConditions;

@end
