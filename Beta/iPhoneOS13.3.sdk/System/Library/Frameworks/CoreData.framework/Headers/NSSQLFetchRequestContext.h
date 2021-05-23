/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSArray, NSDictionary, NSFaultHandler, NSFetchRequest, NSMutableArray, NSMutableSet, NSSQLEntity, NSSQLModel, NSSQLiteStatement, NSString, _PFFetchPlanHeader;

__attribute__((visibility("hidden")))
@interface NSSQLFetchRequestContext : NSSQLStoreRequestContext

{
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    NSString *_fileBackedFuturesDirectory;
    NSSQLModel *_sqlModel;
    NSSQLEntity *_sqlEntity;
    NSFaultHandler *_faultHandler;
    _PFFetchPlanHeader *_fetchPlan;
    NSSQLiteStatement *_statement;
    NSMutableSet *_objectIDsToRegister;
    NSMutableSet *_objectsToAwaken;
    NSMutableArray *_resultFaultsThatWereFired;
    NSSQLFetchRequestContext *_parentContext;
    int _fileProtectionLevel;
    _Bool _isFaultRequest;
    NSFetchRequest *_originalRequest;
    _Bool _shouldUseBatches;
    _Bool _storeIsUbiquitized;
    _Bool _isUsingCachedStatement;
    NSMutableArray *_concurrentFetchingPipelineRows;
    NSDictionary *_prefetchingSubstitutionVariables;
}

@property (nonatomic, readonly) NSSQLFetchRequestContext *parentContext;
@property (nonatomic, readonly) NSFetchRequest *request;
@property (retain, nonatomic) NSSQLiteStatement *fetchStatement;
@property (nonatomic, readonly) NSFetchRequest *originalRequest;
@property (nonatomic, readonly) _Bool storeIsUbiquitized;
@property (nonatomic, readonly) NSString *externalDataReferencesDirectory;
@property (nonatomic, readonly) NSString *externalDataLinksDirectory;
@property (nonatomic, readonly) NSString *fileBackedFuturesDirectory;
@property (nonatomic, readonly) int fileProtectionLevel;
@property (nonatomic, readonly) NSSQLModel *sqlModel;
@property (nonatomic, readonly) NSSQLEntity *sqlEntityForFetchRequest;
@property (nonatomic, readonly) NSFaultHandler *faultHandler;
@property (nonatomic, readonly) _PFFetchPlanHeader *fetchPlan;
@property (nonatomic, readonly) NSArray *objectIDsToRegisterWithContext;
@property (nonatomic, readonly) NSArray *objectsToAwaken;
@property (nonatomic) _Bool isFaultRequest;
@property (nonatomic, readonly) _Bool shouldUseBatches;
@property (nonatomic) _Bool isUsingCachedStatement;
@property (retain, nonatomic) NSDictionary *prefetchingSubstitutionVariables;
@property (retain, nonatomic, readonly) NSArray *faultsThatWereFired;

- (void)dealloc;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (_Bool)executeRequestCore:(id *)arg1;
- (void)executePrologue;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (void)executeEpilogue;
- (id)ubiquitousExternalReferenceLocationForUUID:(id)arg1;
- (void)addFaultsThatWereFired:(id)arg1;
- (id)_createStatement;
- (id)initWithRequest:(id)arg1 connection:(id)arg2 context:(id)arg3 sqlCore:(id)arg4 parentContext:(id)arg5;
- (void)_setupBindVariablesForCachedStatement:(id)arg1 usingValues:(id)arg2;
- (id)cachedStatement;
- (void)cacheStatement:(id)arg1;
- (void)_fireFaultsForValue:(id)arg1;
- (void)_preparePredicate:(id)arg1;
- (void)persistRows:(id)arg1;
- (id)createChildContextForNestedFetchRequest:(id)arg1;
- (void)addObjectIDsToRegister:(id)arg1;
- (void)addObjectsToAwaken:(id)arg1;

@end
