/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKComponentDataSourceAttachController, CKTransactionalComponentDataSource, CKTransactionalComponentDataSourceState, NSMapTable, NSString, UICollectionView;

@protocol CKSupplementaryViewDataSource;

@interface CKCollectionViewTransactionalDataSource : NSObject

{
    CKTransactionalComponentDataSource *_componentDataSource;
    id <CKSupplementaryViewDataSource> _supplementaryViewDataSource;
    CDUnknownFunctionPointerType _cellConfigurationFunction;
    CKTransactionalComponentDataSourceState *_currentState;
    CKComponentDataSourceAttachController *_attachController;
    NSMapTable *_cellToIndexPathMap;
    NSMapTable *_indexPathToCellMap;
    NSMapTable *_cellToItemMap;
    UICollectionView *_collectionView;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (weak, nonatomic, readonly) id <CKSupplementaryViewDataSource> supplementaryViewDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (id)modelForItemAtIndexPath:(id)arg1;
- (void)announceDidEndDisplayingCell:(id)arg1;
- (void)announceWillDisplayCell:(id)arg1;
- (void)applyChangeset:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)reloadWithMode:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)updateConfiguration:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)initWithCollectionView:(id)arg1 supplementaryViewDataSource:(id)arg2 configuration:(id)arg3 cellConfigurationFunction:(CDUnknownFunctionPointerType)arg4;
- (void)transactionalComponentDataSource:(id)arg1 didModifyPreviousState:(id)arg2 byApplyingChanges:(id)arg3;
- (void)_detachComponentLayoutForRemovedItemsAtIndexPaths:(id)arg1 inState:(id)arg2;

@end
