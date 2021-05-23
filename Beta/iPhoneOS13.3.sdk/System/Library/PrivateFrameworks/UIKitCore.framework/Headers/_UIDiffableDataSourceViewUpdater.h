/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UICollectionView, UITableView, _UIDataSourceSnapshotter;

@protocol _UICollectionViewUpdateItemApplying;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceViewUpdater : NSObject

{
    long long _tableViewRowAnimation;
    long long _sinkKind;
    id <_UICollectionViewUpdateItemApplying> _updatesSink;
    UICollectionView *_collectionView;
    _UIDataSourceSnapshotter *_dataSourceSnapshotter;
    UITableView *_tableView;
}

@property (weak, nonatomic) id <_UICollectionViewUpdateItemApplying> updatesSink;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long sinkKind;
@property (retain, nonatomic) _UIDataSourceSnapshotter *dataSourceSnapshotter;
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) long long tableViewRowAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCollectionView:(id)arg1;
- (id)initWithTableView:(id)arg1;
- (id)initWithCollectionViewUpdatesSink:(id)arg1;
- (void)_deleteAllItems;
- (id)targetView;
- (void)_performUpdateWithCollectionViewUpdateItems:(id)arg1 dataSourceSnapshotter:(id)arg2 updateHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_reloadData;
- (id)initWithUpdatesSink:(id)arg1 collectionView:(id)arg2 tableView:(id)arg3;
- (void)_performViewUpdates:(id)arg1;
- (void)_performInsertUpdate:(id)arg1 onCollectionView:(id)arg2;
- (void)_performInsertUpdate:(id)arg1 onTableView:(id)arg2;
- (void)_performMoveUpdate:(id)arg1 onCollectionView:(id)arg2;
- (void)_performMoveUpdate:(id)arg1 onTableView:(id)arg2;
- (void)_performDeleteUpdate:(id)arg1 onCollectionView:(id)arg2;
- (void)_performDeleteUpdate:(id)arg1 onTableView:(id)arg2;
- (void)_performReloadUpdate:(id)arg1 onCollectionView:(id)arg2;
- (void)_performReloadUpdate:(id)arg1 onTableView:(id)arg2;
- (void)_willPerformDiff:(_Bool)arg1;

@end
