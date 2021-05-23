/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface BMAprioriPatternMiner : NSObject

{
    NSMutableArray *_indexBaskets;
    NSMutableArray *_items;
}

@property (copy, nonatomic) NSMutableArray *indexBaskets;
@property (copy, nonatomic) NSMutableArray *items;

- (id)initWithBaskets:(id)arg1;
- (id)minePatternsWithMinSupport:(unsigned long long)arg1 constrainedToPatternsWithTypes:(id)arg2;
- (id)supportOfItemIndexSet:(id)arg1;
- (id)getItemIndexSetsWithMinSupport:(double)arg1 itemIndexSets:(id)arg2;

@end
