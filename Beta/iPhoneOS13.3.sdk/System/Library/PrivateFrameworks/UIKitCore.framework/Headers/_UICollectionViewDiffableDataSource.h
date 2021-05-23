/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UICollectionView;

@interface _UICollectionViewDiffableDataSource : _UIDiffableDataSourceSnapshotter

@property (copy, nonatomic) CDUnknownBlockType supplementaryViewProvider;
@property (weak, nonatomic, readonly) UICollectionView *collectionView;
@property (copy, nonatomic) CDUnknownBlockType supplementaryReuseIdentifierProvider;
@property (copy, nonatomic) CDUnknownBlockType supplementaryConfigurationHandler;

- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;

@end
