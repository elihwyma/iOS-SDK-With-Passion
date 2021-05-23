/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, WFTableDataSource, WFTableSectionTreeNode;

@interface WFTableSection : NSObject

{
    NSString *_headerText;
    NSString *_footerText;
    WFTableSectionTreeNode *_node;
    NSMutableArray *_mutableItems;
    long long _cellStyle;
    Class _cellClass;
    CDUnknownBlockType _configurationBlock;
}

@property (nonatomic, readonly) WFTableSectionTreeNode *node;
@property (nonatomic, readonly) NSMutableArray *mutableItems;
@property (nonatomic, readonly) long long cellStyle;
@property (nonatomic, readonly) Class cellClass;
@property (nonatomic, readonly) CDUnknownBlockType configurationBlock;
@property (weak, nonatomic, readonly) WFTableDataSource *dataSource;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *headerText;
@property (retain, nonatomic) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)section;
+ (id)sectionWithItems:(id)arg1;
+ (id)sectionWithStyle:(long long)arg1 representedObjects:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3;
+ (id)sectionWithCellClass:(Class)arg1 representedObjects:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3;

- (_Bool)isEqual:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)tableView;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (void)setRepresentedObjects:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4;
- (id)initWithCellClass:(Class)arg1 cellStyle:(long long)arg2 items:(id)arg3 representedObjects:(id)arg4 configurationBlock:(CDUnknownBlockType)arg5;
- (void)updateCellForItem:(id)arg1;
- (unsigned long long)recursiveChildrenCount;

@end
