/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet;

@interface WFActionSearchRankedCollection : NSObject

{
    NSMutableOrderedSet *_itemsWithExactNameMatch;
    NSMutableOrderedSet *_itemsWithNameMatch;
    NSMutableOrderedSet *_itemsWithCategoryMatch;
    NSMutableOrderedSet *_itemsWithKeywordMatch;
}

- (id)init;
- (id)orderedSetForType:(unsigned long long)arg1;
- (void)addItem:(id)arg1 forType:(unsigned long long)arg2;
- (void)prioritizeItem:(id)arg1 type:(unsigned long long)arg2;
- (id)rankedItems;

@end
