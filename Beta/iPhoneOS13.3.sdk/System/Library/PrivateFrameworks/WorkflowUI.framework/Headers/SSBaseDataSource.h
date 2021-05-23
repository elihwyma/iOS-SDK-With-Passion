/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UICollectionView, UITableView, UIView;

@interface SSBaseDataSource : NSObject

{
    Class _cellClass;
    CDUnknownBlockType _cellConfigureBlock;
    CDUnknownBlockType _cellCreationBlock;
    UIView *_emptyView;
    UITableView *_tableView;
    long long _rowAnimation;
    CDUnknownBlockType _tableActionBlock;
    CDUnknownBlockType _tableDeletionBlock;
    CDUnknownBlockType _tableMoveBlock;
    UICollectionView *_collectionView;
    Class _collectionViewSupplementaryElementClass;
    CDUnknownBlockType _collectionSupplementaryCreationBlock;
    CDUnknownBlockType _collectionSupplementaryConfigureBlock;
    long long _cachedSeparatorStyle;
}

@property (nonatomic) long long cachedSeparatorStyle;
@property (weak, nonatomic) Class cellClass;
@property (copy, nonatomic) CDUnknownBlockType cellConfigureBlock;
@property (copy, nonatomic) CDUnknownBlockType cellCreationBlock;
@property (retain, nonatomic) UIView *emptyView;
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) long long rowAnimation;
@property (copy, nonatomic) CDUnknownBlockType tableActionBlock;
@property (copy, nonatomic) CDUnknownBlockType tableDeletionBlock;
@property (copy, nonatomic) CDUnknownBlockType tableMoveBlock;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) Class collectionViewSupplementaryElementClass;
@property (copy, nonatomic) CDUnknownBlockType collectionSupplementaryCreationBlock;
@property (copy, nonatomic) CDUnknownBlockType collectionSupplementaryConfigureBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)indexPathArrayWithIndexSet:(id)arg1 inSection:(long long)arg2;
+ (id)indexPathArrayWithRange:(struct _NSRange)arg1 inSection:(long long)arg2;

- (id)init;
- (void)dealloc;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (unsigned long long)numberOfItems;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)moveSectionAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2 parentView:(id)arg3 indexPath:(id)arg4;
- (void)_updateEmptyView;
- (void)insertCellsAtIndexPaths:(id)arg1;
- (void)deleteCellsAtIndexPaths:(id)arg1;
- (void)reloadCellsAtIndexPaths:(id)arg1;
- (void)moveCellAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)insertSectionsAtIndexes:(id)arg1;
- (void)deleteSectionsAtIndexes:(id)arg1;
- (void)reloadSectionsAtIndexes:(id)arg1;

@end
