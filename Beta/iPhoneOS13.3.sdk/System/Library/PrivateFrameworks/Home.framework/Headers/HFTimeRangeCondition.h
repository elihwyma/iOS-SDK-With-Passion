/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFTimeCondition.h>

@protocol HFPrimitiveTimeCondition;

@interface HFTimeRangeCondition : HFTimeCondition

{
    HFTimeCondition<HFPrimitiveTimeCondition> *_startCondition;
    HFTimeCondition<HFPrimitiveTimeCondition> *_endCondition;
}

@property (nonatomic, readonly) HFTimeCondition<HFPrimitiveTimeCondition> *startCondition;
@property (nonatomic, readonly) HFTimeCondition<HFPrimitiveTimeCondition> *endCondition;

+ (id)_primitiveTimePredicateClasses;

- (id)description;
- (id)initWithPredicate:(id)arg1;
- (id)initWithStartCondition:(id)arg1 endCondition:(id)arg2;

@end
