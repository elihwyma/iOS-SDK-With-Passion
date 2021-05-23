/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSMutableArray;

@interface GKBehavior : NSObject

{
    NSMutableArray *_goals;
    NSMutableArray *_weights;
}

@property (readonly) long long goalCount;

+ (id)behaviorWithGoal:(id)arg1 weight:(float)arg2;
+ (id)behaviorWithGoals:(id)arg1;
+ (id)behaviorWithGoals:(id)arg1 andWeights:(id)arg2;
+ (id)behaviorWithWeightedGoals:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)weights;
- (MISSING_TYPE *)getTotalForce:(double)arg1 agent:(id)arg2;
- (float)weightForGoal:(id)arg1;
- (id)initWithGoal:(id)arg1 weight:(float)arg2;
- (void)setWeight:(float)arg1 forGoal:(id)arg2;
- (id)initWithGoals:(id)arg1;
- (id)initWithGoals:(id)arg1 andWeights:(id)arg2;
- (id)initWithWeightedGoals:(id)arg1;
- (id)goals;
- (void)removeGoal:(id)arg1;
- (void)removeAllGoals;

@end
