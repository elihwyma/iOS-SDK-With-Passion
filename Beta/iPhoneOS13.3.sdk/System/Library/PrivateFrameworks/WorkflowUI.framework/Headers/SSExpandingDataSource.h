/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/SSSectionedDataSource.h>

@interface SSExpandingDataSource : SSSectionedDataSource

{
    CDUnknownBlockType _collapsedSectionCountBlock;
}

@property (copy, nonatomic) CDUnknownBlockType collapsedSectionCountBlock;

- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2;
- (void)removeItemAtIndexPath:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (_Bool)isSectionExpandedAtIndex:(long long)arg1;
- (_Bool)isItemVisibleAtIndexPath:(id)arg1;
- (id)expandedSectionIndexes;
- (unsigned long long)numberOfCollapsedRowsInSection:(long long)arg1;
- (void)toggleSectionAtIndex:(long long)arg1;
- (void)setSection:(id)arg1 expanded:(_Bool)arg2;
- (void)setSectionAtIndex:(long long)arg1 expanded:(_Bool)arg2;
- (void)appendItems:(id)arg1 toSection:(long long)arg2;
- (void)insertItems:(id)arg1 atIndexes:(id)arg2 inSection:(long long)arg3;
- (void)replaceItemAtIndexPath:(id)arg1 withItem:(id)arg2;
- (void)removeItemsInRange:(struct _NSRange)arg1 inSection:(long long)arg2;
- (void)removeItemsAtIndexes:(id)arg1 inSection:(long long)arg2;

@end
