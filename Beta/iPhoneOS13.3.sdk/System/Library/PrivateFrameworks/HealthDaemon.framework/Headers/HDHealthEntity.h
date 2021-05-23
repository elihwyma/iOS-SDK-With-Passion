/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLiteEntity.h>

@interface HDHealthEntity : HDSQLiteEntity

+ (id)databaseName;
+ (long long)protectionClass;
+ (id)protectedDatabaseName;
+ (_Bool)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (_Bool)performReadTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long *)arg6 healthDatabase:(id)arg7 error:(id *)arg8 block:(CDUnknownBlockType)arg9;
+ (_Bool)enumerateProperties:(id)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4 enumerationHandler:(CDUnknownBlockType)arg5;
+ (id)propertyForSyncProvenance;
+ (_Bool)performWriteTransactionWithHealthDatabase:(id)arg1 context:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4 inaccessibilityHandler:(CDUnknownBlockType)arg5;
+ (_Bool)performReadTransactionWithHealthDatabase:(id)arg1 context:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
+ (_Bool)performReadTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)maxRowIDForPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)defaultForeignKey;
+ (id)propertyForSyncAnchor;
+ (id)anyWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (id)predicateForSyncWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4;
+ (id)updateSQLForTimeOffsetWithBindingCount:(unsigned long long *)arg1;
+ (_Bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
+ (long long)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)columnNamesForTimeOffset;
+ (_Bool)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)insertOrReplaceEntity:(_Bool)arg1 healthDatabase:(id)arg2 properties:(id)arg3 error:(id *)arg4 bindingHandler:(CDUnknownBlockType)arg5;
+ (_Bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 syncEntityClass:(Class)arg3 session:(id)arg4 syncAnchorRange:(struct HDSyncAnchorRange)arg5 orderingTerms:(id)arg6 limit:(unsigned long long)arg7 lastSyncAnchor:(long long *)arg8 healthDatabase:(id)arg9 error:(id *)arg10 block:(CDUnknownBlockType)arg11;
+ (id)_syncQueryWithDatabase:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 limit:(unsigned long long)arg4 anchorProperty:(id)arg5;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 syncEntityClass:(Class)arg3 session:(id)arg4 orderingTerms:(id)arg5 limit:(unsigned long long)arg6 healthDatabase:(id)arg7 error:(id *)arg8;
+ (id)_syncQueryDescriptorWithPredicate:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned long long)arg3 anchorProperty:(id)arg4;
+ (_Bool)_isNilDatabase:(id)arg1 error:(id *)arg2;
+ (id)_transactionContextForWriting:(_Bool)arg1 baseContext:(id)arg2;
+ (_Bool)performWriteTransactionWithHealthDatabase:(id)arg1 context:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
+ (_Bool)updateProperties:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4 bindingHandler:(CDUnknownBlockType)arg5;
+ (id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;

- (_Bool)getValuesForProperties:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (id)valueForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
- (_Bool)updateProperties:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3 bindingHandler:(CDUnknownBlockType)arg4;
- (id)stringForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
- (id)dateForProperty:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)setDate:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)stringForProperty:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)setString:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)numberForProperty:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)setNumber:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)foreignKeyEntity:(Class)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (_Bool)setForeignKeyEntity:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id *)arg4;

@end
