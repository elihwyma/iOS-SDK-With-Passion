/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PLCoreOperator : NSObject

{
    NSMutableDictionary *_operators;
}

@property (retain) NSMutableDictionary *operators;

+ (void)registerOperator:(Class)arg1;
+ (id)registeredOperators;
+ (id)registeredOperatorsOfSuperClassType:(Class)arg1;

- (id)init;
- (void)dealloc;
- (void)log;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependanciesWithBlock:(CDUnknownBlockType)arg1;
- (void)startOperatorsOfSuperClassType:(Class)arg1;
- (id)tablesToTrimConditionsForTrimDate:(id)arg1;

@end
