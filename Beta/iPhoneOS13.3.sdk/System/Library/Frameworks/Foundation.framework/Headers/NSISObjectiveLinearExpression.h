/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSISEngine;

@interface NSISObjectiveLinearExpression : NSObject

{
    NSISEngine *_engine;
    struct {
        struct {
            CDStruct_183601bc **values;
            int count;
            unsigned int capacity;
        } heap;
        CDStruct_183601bc *values;
        unsigned int count;
        unsigned int tombstones;
        unsigned int size;
        unsigned short grow_shift;
    } _priorityMap;
    CDStruct_f13cc9bb _constant;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)variableCount;
- (id)initWithEngine:(id)arg1;
- (void)verifyInternalIntegrity;
- (id)initWithLinearExpression:(CDStruct_9ac54d62 *)arg1 priority:(double)arg2 engine:(id)arg3;
- (void)cleanupForReuse;
- (void)addExpression:(CDStruct_9ac54d62 *)arg1 priority:(double)arg2 times:(double)arg3 processVarNewToReceiver:(CDUnknownBlockType)arg4 processVarDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)replaceVar:(CDStruct_fcd6c539)arg1 withVarPlusDelta:(double)arg2 timesVar:(CDStruct_fcd6c539)arg3 processVarNewToReceiver:(CDUnknownBlockType)arg4 processVarDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)addVar:(CDStruct_fcd6c539)arg1 priority:(double)arg2 times:(double)arg3 processVarNewToReceiver:(CDUnknownBlockType)arg4 processVarDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)leadingPriority:(double *)arg1 andValue:(double *)arg2 forVar:(CDStruct_fcd6c539)arg3;
- (void)removeVar:(CDStruct_fcd6c539)arg1;
- (void)replaceVar:(CDStruct_fcd6c539)arg1 withExpression:(CDStruct_9ac54d62 *)arg2 processVarNewToReceiver:(CDUnknownBlockType)arg3 processVarDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (_Bool)restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:(CDStruct_fcd6c539 *)arg1;
- (_Bool)constantTermIsZero;
- (void)enumerateVars:(CDUnknownBlockType)arg1;
- (void)replaceVar:(CDStruct_fcd6c539)arg1 withVarPlusDelta:(double)arg2;
- (void)removeVariable:(id)arg1;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)addVar:(CDStruct_fcd6c539)arg1 priority:(double)arg2 times:(double)arg3;
- (void)incrementConstantWithPriority:(double)arg1 value:(double)arg2;
- (CDStruct_f13cc9bb *)priorityVectorForVar:(CDStruct_fcd6c539)arg1;
- (void)setPriorityVector:(CDStruct_f13cc9bb *)arg1 forKnownAbsentVar:(CDStruct_fcd6c539)arg2;
- (void)incrementConstantWithPriorityVector:(CDStruct_f13cc9bb *)arg1 timesScalarCoefficient:(double)arg2;
- (int)valueRestrictionForVar:(CDStruct_fcd6c539)arg1;
- (void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3;
- (id)restrictedVariableWithCoefficientOfLargestNegativeMagnitude;

@end
