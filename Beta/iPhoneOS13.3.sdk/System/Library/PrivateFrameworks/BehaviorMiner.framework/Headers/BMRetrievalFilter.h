/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface BMRetrievalFilter : NSObject

{
    long long _operand;
    long long _inclusionOperator;
    struct NSSet *_items;
    NSSet *_types;
}

@property (nonatomic) long long operand;
@property (nonatomic) long long inclusionOperator;
@property (retain, nonatomic) NSSet *items;
@property (retain, nonatomic) NSSet *types;

+ (id)filterWithOperand:(long long)arg1 inclusionOperator:(long long)arg2 items:(struct NSSet *)arg3;
+ (id)filterWithOperand:(long long)arg1 inclusionOperator:(long long)arg2 types:(id)arg3;

- (id)rulePredicate;

@end
