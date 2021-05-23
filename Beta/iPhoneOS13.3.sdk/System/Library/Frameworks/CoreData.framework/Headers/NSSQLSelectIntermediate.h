/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSArray, NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLSelectIntermediate : NSSQLIntermediate

{
    NSSQLEntity *_entity;
    NSString *_entityAlias;
    NSString *_correlationTarget;
    NSArray *_fetchColumns;
    _Bool _useDistinct;
    NSString *_columnAlias;
    _Bool _isCount;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (_Bool)isTargetColumnsScoped;
- (void)setFetchColumns:(id)arg1;
- (void)setUseDistinct:(_Bool)arg1;
- (void)setIsCount:(_Bool)arg1;
- (_Bool)onlyFetchesAggregates;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;
- (id)resolveVariableExpression:(id)arg1 inContext:(id)arg2;
- (id)initForCorrelationTarget:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;
- (void)setColumnAlias:(id)arg1;
- (void)setFetchEntity:(id)arg1;

@end
