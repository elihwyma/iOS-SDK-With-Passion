/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLGenerator : NSObject

{
    NSSQLCore *_persistentStore;
}

+ (void)initialize;

- (id)initWithPersistentStore:(id)arg1;
- (id)newSQLStatementForUpdateRequest:(id)arg1;
- (id)newSQLStatmentForBinaryIndex:(id)arg1 inStore:(id)arg2;
- (id)_predicateRestrictingSuperentitiesForEntity:(id)arg1;
- (id)_predicateRestrictingToSubentitiesForEntity:(id)arg1;
- (id)_predicateForSpecificEntity:(id)arg1;
- (void)generateWhereIntermediatesInContext:(id)arg1;
- (void)generateGroupByIntermediatesForProperties:(id)arg1 inContext:(id)arg2;
- (void)generateHavingIntermediateForPredicate:(id)arg1 inContext:(id)arg2;
- (void)generateSelectIntermediateInContext:(id)arg1;
- (void)generateOrderIntermediateInContext:(id)arg1;
- (void)generateIntermediateForLimit:(unsigned long long)arg1 inContext:(id)arg2;
- (void)generateIntermediateForOffset:(unsigned long long)arg1 inContext:(id)arg2;
- (id)generateUpdateColumnsIntermediateInContext:(id)arg1;
- (id)predicateForRequestInContext:(id)arg1;
- (id)initializeContextForRequest:(id)arg1 ignoreInheritance:(_Bool)arg2 nestingLevel:(unsigned int)arg3;
- (id)initializeContextForFetchRequest:(id)arg1 ignoreInheritance:(_Bool)arg2 nestingLevel:(unsigned int)arg3 nestIsWhereScoped:(_Bool)arg4 requestContext:(id)arg5;
- (id)initializeContextForUpdateRequest:(id)arg1;
- (id)generateIntermediatesForFetchInContext:(id)arg1 countOnly:(_Bool)arg2;
- (id)generateIntermediatesForUpdateInContext:(id)arg1;
- (id)newSQLStatementForRequest:(id)arg1 ignoreInheritance:(_Bool)arg2 countOnly:(_Bool)arg3 nestingLevel:(unsigned int)arg4 nestIsWhereScoped:(_Bool)arg5 requestContext:(id)arg6;
- (id)initializeContextForIndexGeneration:(id)arg1 inStore:(id)arg2;
- (id)newSQLStatementForFetchRequest:(id)arg1 ignoreInheritance:(_Bool)arg2 countOnly:(_Bool)arg3 nestingLevel:(unsigned int)arg4 nestIsWhereScoped:(_Bool)arg5 requestContext:(id)arg6;
- (id)newSQLStatementForChangeRequest:(id)arg1;

@end
