/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSISEngine;

@interface NSISLinearExpression : NSObject

{
    NSISEngine *engine;
    CDStruct_9ac54d62 linExp;
}

@property double constant;
@property (readonly) NSISEngine *engine;

+ (void)initialize;
+ (id)newExpressionWithCapacity:(unsigned long long)arg1 engine:(id)arg2;
+ (id)newExpressionWithCapacity:(unsigned long long)arg1;
+ (id)acquireFromPoolForUseCase:(long long)arg1;
+ (id)acquireFromPoolForUseCase:(long long)arg1 engine:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)scaleBy:(double)arg1;
- (unsigned long long)variableCount;
- (void)addVariable:(id)arg1 coefficient:(double)arg2;
- (id)variablesArray;
- (double)incrementConstant:(double)arg1;
- (void)addExpression:(id)arg1 times:(double)arg2;
- (id)initWithEngine:(id)arg1;
- (void)verifyInternalIntegrity;
- (void)enumerateVariablesAndCoefficients:(CDUnknownBlockType)arg1;
- (id)initWithInlineCapacity:(unsigned long long)arg1 engine:(id)arg2;
- (void)removeVariable:(id)arg1;
- (double)coefficientForVariable:(id)arg1;
- (void)setCoefficient:(double)arg1 forVariable:(id)arg2;
- (void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3;
- (void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (_Bool)isConstant;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(CDUnknownBlockType)arg4 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)enumerateVariables:(CDUnknownBlockType)arg1;
- (_Bool)enumerateVariablesAndCoefficientsUntil:(CDUnknownBlockType)arg1;
- (void)returnToPool;
- (id)copyContentsAndReturnToPool;

@end
