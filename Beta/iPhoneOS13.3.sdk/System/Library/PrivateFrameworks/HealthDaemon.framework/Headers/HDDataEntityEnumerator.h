/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLiteQueryDescriptor.h>

@class HDDatabaseTransactionContext, HDProfile, NSArray, NSMutableDictionary, NSNumber, NSSet, NSString, _HKFilter;

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor

{
    HDProfile *_profile;
    NSMutableDictionary *_encodingOptions;
    _Bool _useLeftJoin;
    _Bool _ignoreEntityClassAdditionalPredicateForEnumeration;
    _Bool _improveJoinOrderingForStartDateIndexSelection;
    NSSet *_objectTypes;
    _HKFilter *_filter;
    NSSet *_restrictedSourceEntities;
    CDUnknownBlockType _authorizationFilter;
    NSNumber *_anchor;
    NSNumber *_deletedObjectsAnchor;
    NSArray *_sortDescriptors;
    HDDatabaseTransactionContext *_databaseTransactionContext;
    NSString *_lastSQL;
}

@property (nonatomic, readonly) NSSet *objectTypes;
@property (retain, nonatomic) _HKFilter *filter;
@property (retain, nonatomic) NSSet *restrictedSourceEntities;
@property (copy, nonatomic) CDUnknownBlockType authorizationFilter;
@property (retain, nonatomic) NSNumber *anchor;
@property (retain, nonatomic) NSNumber *deletedObjectsAnchor;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseTransactionContext;
@property (nonatomic) _Bool ignoreEntityClassAdditionalPredicateForEnumeration;
@property (nonatomic) _Bool improveJoinOrderingForStartDateIndexSelection;
@property (copy, nonatomic, readonly) NSString *lastSQL;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)enumerateWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addEncodingOptionsFromDictionary:(id)arg1;
- (void)setEncodingOption:(id)arg1 forKey:(id)arg2;
- (id)_initWithObjectType:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3;
- (id)_initWithObjectTypes:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3;
- (id)_initWithEntityClass:(Class)arg1 profile:(id)arg2;
- (_Bool)enumerateIncludingDeletedObjects:(_Bool)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)_enumerateObjectsOnDatabase:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)_setOrderingTermsOnDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)_prepareDescriptor:(id)arg1 error:(id *)arg2;
- (id)_joinClauseForProperties:(id)arg1;
- (id)encodingOptionForKey:(id)arg1;

@end
