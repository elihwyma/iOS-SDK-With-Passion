/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/SSBaseDataSource.h>

@class NSMutableArray, NSString;

@interface SSArrayDataSource : SSBaseDataSource

{
    id _target;
    NSString *_keyPath;
    NSMutableArray *_items;
}

@property (retain, nonatomic) id target;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) NSMutableArray *items;

- (void)dealloc;
- (void)removeAllItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithItems:(id)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)clearItems;
- (id)itemAtIndexPath:(id)arg1;
- (void)removeItems:(id)arg1;
- (id)allItems;
- (void)appendItem:(id)arg1;
- (void)appendItems:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)insertItems:(id)arg1 atIndexes:(id)arg2;
- (void)moveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2;
- (void)updateItems:(id)arg1;
- (void)replaceItemAtIndex:(unsigned long long)arg1 withItem:(id)arg2;
- (void)replaceItemsInRange:(struct _NSRange)arg1 withItemsFromArray:(id)arg2;
- (void)replaceItemsAtIndexes:(id)arg1 withItemsFromArray:(id)arg2;
- (void)removeItemsInRange:(struct _NSRange)arg1;
- (id)indexPathForItemWithId:(id)arg1;
- (void)registerKVO;
- (void)unregisterKVO;

@end
