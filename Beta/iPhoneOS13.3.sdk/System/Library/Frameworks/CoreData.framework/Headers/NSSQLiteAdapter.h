/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSSQLCore, NSSQLModel;

__attribute__((visibility("hidden")))
@interface NSSQLiteAdapter : NSObject

{
    NSSQLCore *_sqlCore;
    NSSQLModel *_model;
    struct __CFDictionary *_cachedDeleteTriggersByEntity;
    int _lock;
}

+ (id)generateSubselectForColumn:(id)arg1 givenObjects:(id)arg2;
+ (id)generateStatementForCheckingUniquePropertiesOnObjects:(id)arg1 usingSQLCore:(id)arg2;
+ (id)generateStatementForCheckingMulticolumnConstraint:(id)arg1 onObjects:(id)arg2 usingSQLCore:(id)arg3;

- (void)dealloc;
- (id)sqlCore;
- (void)_useModel:(id)arg1;
- (id)newSelectStatementWithFetchRequest:(id)arg1 ignoreInheritance:(_Bool)arg2;
- (id)generateDeleteStatementsForRequest:(id)arg1 error:(id *)arg2;
- (id)initWithSQLCore:(id)arg1;
- (id)newCreateTableStatementForEntity:(id)arg1;
- (id)newCreateTableStatementForManyToMany:(id)arg1;
- (id)newDropTableStatementForTableNamed:(id)arg1;
- (id)newStatementWithSQLString:(id)arg1;
- (unsigned char)sqlTypeForExpressionConstantValue:(id)arg1;
- (id)newRenameTableStatementFromManyToMany:(id)arg1 toManyToMany:(id)arg2 orToRandomSpot:(id)arg3;
- (id)newCopyAndInsertStatementForManyToMany:(id)arg1 toManyToMany:(id)arg2 intermediateTableName:(id)arg3 invertColumns:(_Bool)arg4;
- (id)newSimplePrimaryKeyUpdateStatementForEntity:(id)arg1;
- (id)newComplexPrimaryKeyUpdateStatementForEntity:(id)arg1;
- (id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inToMany:(id)arg2;
- (id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inManyToMany:(id)arg2;
- (id)newStatementWithEntity:(id)arg1;
- (id)newGeneratorWithStatement:(id)arg1;
- (id)_statementForFetchRequestContext:(id)arg1 ignoreInheritance:(_Bool)arg2 countOnly:(_Bool)arg3 nestingLevel:(unsigned int)arg4;
- (id)newStatementWithoutEntity;
- (id)generateBatchDeleteUpdateHistoryStatementEntity:(id)arg1 andRelationship:(id)arg2 useInverse:(_Bool)arg3;
- (id)generateBatchDeleteUpdateHistoryStatementEntity:(id)arg1 andRelationship:(id)arg2;
- (id)typeStringForColumn:(id)arg1;
- (void)_generateFragmentsForEntity:(id)arg1 inArray:(id)arg2;
- (id)typeStringForSQLType:(unsigned char)arg1;
- (id)newCreateIndexStatementForColumnWithName:(id)arg1 inTableWithName:(id)arg2;
- (id)newDropIndexStatementForColumnWithName:(id)arg1 inTableWithName:(id)arg2;
- (id)newCreateIndexStatementForColumn:(id)arg1;
- (id)newCreateIndexStatementForCorrelationTable:(id)arg1;
- (id)generateBinaryIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2;
- (id)generateRTreeIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2;
- (id)newCreateIndexStatementsForEntity:(id)arg1 defaultIndicesOnly:(_Bool)arg2;
- (id)newDropIndexStatementForColumn:(id)arg1;
- (id)newDropIndexStatementForCorrelationTable:(id)arg1;
- (id)generateDropBinaryIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2;
- (id)generateDropRTreeIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2;
- (id)newDropIndexStatementsForEntity:(id)arg1 defaultIndicesOnly:(_Bool)arg2;
- (id)createSQLStatementsForTriggerAttribute:(id)arg1 withSQLEntity:(id)arg2;
- (id)createSQLStatementsForRTreeTriggersForLocationAttribute:(id)arg1 withSQLEntity:(id)arg2 existingRtreeTables:(id)arg3;
- (_Bool)generateCorrelationTableTriggerStatementsForRelationship:(id)arg1 existing:(struct __CFDictionary *)arg2 correlationTableTriggers:(struct __CFDictionary *)arg3 error:(id *)arg4;
- (_Bool)generateTriggerForEntity:(id)arg1 alreadyCreated:(struct __CFDictionary *)arg2 correlations:(struct __CFDictionary *)arg3 batchHistory:(struct __CFDictionary *)arg4 fragments:(id)arg5 error:(id *)arg6;
- (_Bool)generateBatchDeleteUpdateHistoryTriggerForEntity:(id)arg1 andRelationship:(id)arg2 batchHistory:(struct __CFDictionary *)arg3 error:(id *)arg4;
- (id)createCleanupSQLForRelationship:(id)arg1 existing:(struct __CFDictionary *)arg2 correlationTableTriggers:(struct __CFDictionary *)arg3 batchHistory:(struct __CFDictionary *)arg4 error:(id *)arg5;
- (id)generateTriggerStatementsForEntity:(id)arg1 usingRelationshipCleanupSQL:(id)arg2 error:(id *)arg3;
- (id)generateDeleteHistoryTriggerForEntity:(id)arg1 error:(id *)arg2;
- (id)_cachedTriggersForEntity:(id)arg1;
- (id)_generateExternalDataRefStatementsForEntities:(id)arg1 inRequestContext:(id)arg2;
- (void)_cacheTriggers:(id)arg1 forEntity:(id)arg2;
- (id)sqliteVersion;
- (id)newInsertStatementWithRow:(id)arg1;
- (id)newUpdateStatementWithRow:(id)arg1 originalRow:(id)arg2 withMask:(struct __CFBitVector *)arg3;
- (id)newConstrainedValuesUpdateStatementWithRow:(id)arg1;
- (id)newDeleteStatementWithRow:(id)arg1;
- (id)newSelectStatementWithFetchRequestContext:(id)arg1 ignoreInheritance:(_Bool)arg2;
- (id)newCountStatementWithFetchRequestContext:(id)arg1;
- (id)newCorrelationInsertStatementForRelationship:(id)arg1;
- (id)newCorrelationDeleteStatementForRelationship:(id)arg1;
- (id)newCorrelationMasterReorderStatementForRelationship:(id)arg1;
- (id)newCorrelationMasterReorderStatementPart2ForRelationship:(id)arg1;
- (id)newCorrelationReorderStatementForRelationship:(id)arg1;
- (id)newCreateTempTableStatementForEntity:(id)arg1 withAttributesToConstrain:(id)arg2;
- (id)newCreatePrimaryKeyTableStatement;
- (id)newPrimaryKeyInitializeStatementForEntity:(id)arg1 withInitialMaxPK:(long long)arg2;
- (id)newDropTableStatementOrFailForTableNamed:(id)arg1;
- (id)newRenameTableStatementFrom:(id)arg1 to:(id)arg2;
- (id)newCreateIndexStatementForColumns:(id)arg1 name:(id)arg2;
- (id)newCreateIndexStatementsForEntity:(id)arg1;
- (id)newDropIndexStatementsForEntity:(id)arg1;
- (id)newCreateTriggersForEntity:(id)arg1 existingRtreeTables:(id)arg2;

@end
