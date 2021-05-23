/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, UITableView, WFTableDataSourceTreeNode;

@interface WFTableDataSource : NSObject

{
    UITableView *_tableView;
    WFTableDataSourceTreeNode *_tree;
    NSMutableArray *_mutableSections;
}

@property (nonatomic, readonly) WFTableDataSourceTreeNode *tree;
@property (nonatomic, readonly) NSMutableArray *mutableSections;
@property (weak, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)initWithTableView:(id)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)addSection:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)removeSectionAtIndex:(long long)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)removeSection:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4;
- (id)indexPathFromTableViewIndexPath:(id)arg1;
- (id)cellIdentifierForItem:(id)arg1;
- (id)treeNodeAtTableViewIndexPath:(id)arg1;
- (id)treeNodeAtTreeIndexPath:(id)arg1;

@end
