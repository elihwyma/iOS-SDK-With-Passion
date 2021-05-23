/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservationSource.h>

@class NSISEngine, NSISLinearExpression, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface _NSISLinearExpressionObservable : NSObservationSource

{
    NSNumber *_lastValue;
    NSISLinearExpression *_expression;
    NSISEngine *_associatedEngine;
    NSMutableArray *_variableObservations;
    id _changeTransactionObservation;
    _Bool _valueIsDirtied;
}

+ (id)observableForExpression:(id)arg1 inEngine:(id)arg2;

- (void)dealloc;
- (id)initWithExpression:(id)arg1 inEngine:(id)arg2;
- (void)receiveObservedValue:(id)arg1 fromVariable:(id)arg2;
- (id)addObserverBlock:(CDUnknownBlockType)arg1;
- (void)emitValueIfNeeded;
- (void)_lazilyObserveVariablesIfNeeded;
- (id)addObserver:(id)arg1;
- (_Bool)_overrideUseFastBlockObservers;

@end
