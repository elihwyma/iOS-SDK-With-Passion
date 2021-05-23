/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDTimeNode.h>

@class NSMutableArray, NSString, PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDSequentialTimeNode : PDTimeNode

{
    _Bool mConcurrent;
    int mPreviousAction;
    int mNextAction;
    NSMutableArray *mPreviousConditions;
    NSMutableArray *mNextConditions;
}

@property (retain, nonatomic) PDAnimationTarget *target;
@property (nonatomic) int presetClass;
@property (nonatomic) int presetId;
@property (nonatomic) int triggerType;
@property (nonatomic) int iterateType;
@property (nonatomic) double delay;
@property (nonatomic) double direction;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) _Bool concurrent;
@property (nonatomic) int previousAction;
@property (nonatomic) int nextAction;
@property (retain, nonatomic) NSMutableArray *previousConditions;
@property (retain, nonatomic) NSMutableArray *nextConditions;

+ (unsigned long long)buildPartsFromTarget:(id)arg1;
+ (id)timeNodeUnion:(id)arg1 initWithClass:(Class)arg2;
+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1 target:(id)arg2;
+ (id)newSequentialTimeNodeGroupForAnimationInfo;
+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1;

- (id)level1ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1;
- (id)level2ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1 level1NodeIndex:(unsigned long long)arg2;
- (id)level3BehaviorAtNodeIndex:(unsigned long long)arg1 level2NodeIndex:(unsigned long long)arg2 level1NodeIndex:(unsigned long long)arg3;
- (void)setLevel2ParallelAttribute:(CDUnknownBlockType)arg1;

@end
