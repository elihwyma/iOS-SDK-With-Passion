/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BMRuleExtractor : NSObject

{
    NSMutableDictionary *_patterns;
    NSMutableArray *_items;
    unsigned long long _basketCount;
}

@property (retain, nonatomic) NSMutableDictionary *patterns;
@property (retain, nonatomic) NSMutableArray *items;
@property unsigned long long basketCount;

- (id)initWithPatterns:(id)arg1 items:(id)arg2 basketCount:(unsigned long long)arg3;
- (void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)subsetsOfItemset:(id)arg1;
- (id)supportOfItemSet:(id)arg1;
- (struct NSSet *)itemSetForItemIndexSet:(id)arg1;

@end
