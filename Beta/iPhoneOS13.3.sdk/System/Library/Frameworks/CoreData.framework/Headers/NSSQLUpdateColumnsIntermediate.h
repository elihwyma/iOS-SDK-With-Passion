/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate

{
    NSArray *_propertiesToUpdate;
    NSArray *_valuesToUpdateTo;
}

- (void)dealloc;
- (_Bool)isDestination:(id)arg1 compatibleDestinationFor:(id)arg2;
- (id)generateSQLStringInContext:(id)arg1;
- (_Bool)isRelationship:(id)arg1 compatibleWith:(id)arg2;
- (id)_subqueryIntermediateForToManyKeypathWithComponents:(id)arg1 withFunction:(_Bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForKeypathWithComponents:(id)arg1 onSQLEntity:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForRelationshipUpdate:(id)arg1 sourceRelationship:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForAttributeUpdate:(id)arg1 sourceAttribute:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLToUpdateProperty:(id)arg1 fromMultiStepKeypathComponents:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLToUpdateProperty:(id)arg1 fromSingleStepKeypath:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForRelationshipUpdate:(id)arg1 destination:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForAttributeUpdate:(id)arg1 value:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLToUpdateProperty:(id)arg1 fromKeypath:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLToUpdateProperty:(id)arg1 fromSubquery:(id)arg2 inContext:(id)arg3;
- (id)initWithProperties:(id)arg1 values:(id)arg2 inScope:(id)arg3;
- (_Bool)isUpdateColumnsScoped;
- (id)governingAliasForKeypathExpression:(id)arg1;

@end
