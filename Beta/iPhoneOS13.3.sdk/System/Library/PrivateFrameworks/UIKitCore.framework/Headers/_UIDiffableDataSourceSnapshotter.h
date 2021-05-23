/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDiffableDataSource.h>

@interface _UIDiffableDataSourceSnapshotter : _UIDiffableDataSource

- (id)snapshot;
- (void)applyDifferencesFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadFromSnapshot:(id)arg1;
- (id)emptySnapshot;
- (void)applyDifferencesFromSnapshot:(id)arg1;
- (void)applySnapshot:(id)arg1;

@end
