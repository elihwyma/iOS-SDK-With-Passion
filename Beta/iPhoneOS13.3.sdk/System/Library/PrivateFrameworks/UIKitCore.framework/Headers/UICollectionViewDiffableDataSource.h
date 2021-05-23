/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, __UIDiffableDataSource;

@interface UICollectionViewDiffableDataSource : NSObject

{
    __UIDiffableDataSource *_impl;
}

@property (retain, nonatomic) __UIDiffableDataSource *impl;
@property (copy, nonatomic) CDUnknownBlockType supplementaryViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)snapshot;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (void)applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)initWithViewUpdatesSink:(id)arg1;
- (_Bool)_isDiffableDataSource;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2;
- (void)_applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
