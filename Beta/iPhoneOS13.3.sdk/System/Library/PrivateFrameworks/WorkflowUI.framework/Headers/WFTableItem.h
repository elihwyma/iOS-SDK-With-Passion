/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, WFTableItemTreeNode, WFTableSection;

@interface WFTableItem : NSObject

{
    _Bool _selectable;
    _Bool _expanded;
    Class _cellClass;
    long long _style;
    long long _accessoryType;
    NSMutableArray *_mutableChildren;
    WFTableItemTreeNode *_node;
}

@property (nonatomic, readonly) NSMutableArray *mutableChildren;
@property (nonatomic, readonly) WFTableItemTreeNode *node;
@property (weak, nonatomic, readonly) WFTableSection *section;
@property (nonatomic, readonly) Class cellClass;
@property (nonatomic, readonly) long long style;
@property (nonatomic) long long accessoryType;
@property (nonatomic, getter=isSelectable) _Bool selectable;
@property (copy, nonatomic) NSArray *children;
@property (nonatomic, getter=isExpanded) _Bool expanded;

+ (id)itemWithPrimaryText:(id)arg1;
+ (id)itemWithPrimaryText:(id)arg1 image:(id)arg2;
+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2;
+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 image:(id)arg3;
+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3;
+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 image:(id)arg4;
+ (id)itemWithStyle:(long long)arg1 representedObject:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3;
+ (id)itemWithCellClass:(Class)arg1 representedObject:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3;

- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)removeFromParent;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (id)initWithCellClass:(Class)arg1 style:(long long)arg2;
- (void)updateChildren;
- (void)configureCell:(id)arg1;
- (id)nextItemInSection;

@end
