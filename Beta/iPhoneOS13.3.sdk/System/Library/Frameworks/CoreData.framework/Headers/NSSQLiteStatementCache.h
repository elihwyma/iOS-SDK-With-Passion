/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSQLEntity, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface NSSQLiteStatementCache : NSObject

{
    NSSQLEntity *_entity;
    NSSQLiteStatement *_insertStatementCache;
    NSSQLiteStatement *_deletionStatementCache;
    NSSQLiteStatement *_faultingStatementCache;
    NSMutableDictionary *_toManyRelationshipStatementCache;
    struct __CFDictionary *_correlationInsertCache;
    struct __CFDictionary *_correlationDeleteCache;
    struct __CFDictionary *_correlationMasterReorderCache;
    struct __CFDictionary *_correlationMasterReorderCachePart2;
    struct __CFDictionary *_correlationReorderCache;
}

- (void)dealloc;
- (id)initWithEntity:(id)arg1;
- (void)clearCachedStatements;
- (void)cacheInsertStatement:(id)arg1;
- (void)cacheDeletionStatement:(id)arg1;
- (void)_clearSaveGeneratedCachedStatements;
- (void)cacheFaultingStatement:(id)arg1;
- (struct __CFDictionary *)createCorrelationCacheDictionary;
- (void)insertOrReplaceStatement:(id)arg1 forRelationship:(id)arg2 inDictionary:(struct __CFDictionary *)arg3;
- (id)insertStatement;
- (id)deletionStatement;
- (id)faultingStatement;
- (id)correlationInsertStatementForRelationship:(id)arg1;
- (void)cacheCorrelationInsertStatement:(id)arg1 forRelationship:(id)arg2;
- (id)correlationMasterReorderStatementForRelationship:(id)arg1;
- (void)cacheCorrelationMasterReorderStatement:(id)arg1 forRelationship:(id)arg2;
- (id)correlationMasterReorderStatementPart2ForRelationship:(id)arg1;
- (void)cacheCorrelationMasterReorderStatementPart2:(id)arg1 forRelationship:(id)arg2;
- (id)correlationReorderStatementForRelationship:(id)arg1;
- (void)cacheCorrelationReorderStatement:(id)arg1 forRelationship:(id)arg2;
- (id)correlationDeleteStatementForRelationship:(id)arg1;
- (void)cacheCorrelationDeleteStatement:(id)arg1 forRelationship:(id)arg2;
- (id)preparedFaultingCachesForRelationship:(id)arg1;
- (void)cacheFaultingStatement:(id)arg1 andFetchRequest:(id)arg2 forRelationship:(id)arg3;

@end
