/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSOrderedSet, NSString, NSUUID, UICollectionView, UITableView, _UIDataSourceSnapshotter, _UIDiffableDataSourceViewUpdater;

@protocol OS_dispatch_queue;

@interface __UIDiffableDataSource : NSObject <Swift>

{
    UITableView *_tableView;
    UICollectionView *_collectionView;
    _Bool _isSnapshot;
    int _outstandingApplyCount;
    CDUnknownBlockType _tableViewCellProvider;
    CDUnknownBlockType _supplementaryViewProvider;
    CDUnknownBlockType _supplementaryReuseIdentifierProvider;
    CDUnknownBlockType _supplementaryViewConfigurationHandler;
    CDUnknownBlockType _collectionViewCellProvider;
    CDUnknownBlockType _tableViewCellConfigurationHandler;
    CDUnknownBlockType _reuseIdentifierProvider;
    CDUnknownBlockType _collectionViewCellConfigurationHandler;
    _UIDiffableDataSourceViewUpdater *_viewUpdater;
    NSUUID *_dataSourceGeneration;
    NSObject<OS_dispatch_queue> *_applyQueue;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    unsigned long long _mutationQueueSource;
    NSOrderedSet *_identifiers;
    NSOrderedSet *_sections;
    _UIDataSourceSnapshotter *_dataSourceSnapshot;
    NSMutableArray *_pendingSnapshotUpdates;
}

@property (copy, nonatomic) CDUnknownBlockType tableViewCellConfigurationHandler;
@property (copy, nonatomic) CDUnknownBlockType reuseIdentifierProvider;
@property (copy, nonatomic) CDUnknownBlockType collectionViewCellConfigurationHandler;
@property (retain, nonatomic) _UIDiffableDataSourceViewUpdater *viewUpdater;
@property (retain, nonatomic) NSUUID *dataSourceGeneration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *applyQueue;
@property (nonatomic, readonly) int outstandingApplyCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *snapshotQueue;
@property unsigned long long mutationQueueSource;
@property (retain, nonatomic) NSOrderedSet *identifiers;
@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) _UIDataSourceSnapshotter *dataSourceSnapshot;
@property (nonatomic, readonly) _Bool isSnapshot;
@property (nonatomic, readonly) NSMutableArray *pendingSnapshotUpdates;
@property (nonatomic) long long tableViewDefaultRowAnimation;
@property (weak, nonatomic, readonly) UITableView *tableView;
@property (copy, nonatomic) CDUnknownBlockType tableViewCellProvider;
@property (weak, nonatomic, readonly) UICollectionView *collectionView;
@property (copy, nonatomic) CDUnknownBlockType supplementaryViewProvider;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;
@property (nonatomic, readonly) NSArray *itemIdentifiers;
@property (copy, nonatomic) CDUnknownBlockType supplementaryReuseIdentifierProvider;
@property (copy, nonatomic) CDUnknownBlockType supplementaryViewConfigurationHandler;
@property (copy, nonatomic) CDUnknownBlockType collectionViewCellProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)snapshot;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfItemsInSection:(id)arg1;
- (id)initWithDataSourceGeneration:(id)arg1 sectionIdentifiers:(id)arg2 identifiers:(id)arg3 dataSourceSnapshot:(id)arg4;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)deleteItemsWithIdentifiers:(id)arg1;
- (void)deleteAllItems;
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)reloadItemsWithIdentifiers:(id)arg1;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)reloadSectionsWithIdentifiers:(id)arg1;
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)initWithViewUpdatesSink:(id)arg1;
- (_Bool)_isDiffableDataSource;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 reuseIdentifierProvider:(CDUnknownBlockType)arg3 cellConfigurationHandler:(CDUnknownBlockType)arg4 dataSourceGeneration:(id)arg5 sectionIdentifiers:(id)arg6 identifiers:(id)arg7 dataSourceSnapshot:(id)arg8 dataSource:(id)arg9;
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 reuseIdentifierProvider:(CDUnknownBlockType)arg3 cellConfigurationHandler:(CDUnknownBlockType)arg4 dataSourceGeneration:(id)arg5 sectionIdentifiers:(id)arg6 identifiers:(id)arg7 dataSourceSnapshot:(id)arg8 dataSource:(id)arg9;
- (void)_commitUpdate:(id)arg1;
- (void)_commitStateAtomicallyWithIdentifiers:(id)arg1 sections:(id)arg2 dataSourceSnapshot:(id)arg3 shouldAdvanceGenerationalUUID:(_Bool)arg4 shouldCopy:(_Bool)arg5;
- (id)_snapshotWithHandlerAtomic:(CDUnknownBlockType)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_pendingReloadUpdatesForDataSource:(id)arg1;
- (void)_commitNewDataSource:(id)arg1 withViewUpdates:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_commitUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_canApplySnapshotUpdateWithoutDiffing:(id)arg1;
- (void)reloadFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadFromSnapshot:(id)arg1;
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1 dataSource:(id)arg2 ignoreInvalidItems:(_Bool)arg3;
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1;
- (long long)_numberOfSectionsForCollectionView:(id)arg1;
- (long long)_numberOfItemsInSection:(long long)arg1 collectionView:(id)arg2;
- (id)_cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)_viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3;
- (long long)_numberOfSectionsForTableView:(id)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1 tableView:(id)arg2;
- (id)_cellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 dataSource:(id)arg3;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;
- (void)appendSectionWithIdentifier:(id)arg1;
- (void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (id)emptySnapshot;
- (void)applyDifferencesFromSnapshot:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(_Bool)arg2;
- (void)applySnapshot:(id)arg1;
- (long long)_numberOfSectionsForCollectionViewDeprecatedSPI:(id)arg1;
- (long long)_numberOfItemsInSectionDeprecatedSPI:(long long)arg1 collectionView:(id)arg2;
- (id)_cellForItemAtIndexPathDeprecatedSPI:(id)arg1 collectionView:(id)arg2;
- (id)_viewForSupplementaryElementOfKindDeprecatedSPI:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3;
- (long long)_numberOfSectionsForTableViewDeprecatedSPI:(id)arg1;
- (long long)_numberOfRowsInSectionDeprecatedSPI:(long long)arg1 tableView:(id)arg2;
- (id)_cellForRowAtIndexPathDeprecatedSPI:(id)arg1 tableView:(id)arg2;

@end
