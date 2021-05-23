/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDSQLiteDatabase, NSMutableDictionary, NSMutableSet, NSNumber, NSSet;

@interface HDDataEntityDeletionContext : NSObject

{
    HDProfile *_profile;
    NSMutableDictionary *_deleteStatementsByClassName;
    NSMutableDictionary *_deletedObjectProvenanceIDsByOriginalProvenanceID;
    NSMutableDictionary *_localSourceIDsByOriginalSourceID;
    NSMutableSet *_deletedObjectTypeSet;
    _Bool _insertDeletedObjects;
    _Bool _callWillDeleteFromDatabase;
    HDSQLiteDatabase *_database;
    CDUnknownBlockType _recursiveDeleteAuthorizationBlock;
    NSNumber *_lastInsertedDeletedObjectPersistentID;
    unsigned long long _deletedObjectCount;
}

@property (nonatomic, readonly) HDSQLiteDatabase *database;
@property (copy, nonatomic) CDUnknownBlockType recursiveDeleteAuthorizationBlock;
@property (nonatomic) _Bool insertDeletedObjects;
@property (nonatomic) _Bool callWillDeleteFromDatabase;
@property (nonatomic, readonly) NSNumber *lastInsertedDeletedObjectPersistentID;
@property (copy, nonatomic, readonly) NSSet *deletedObjectTypeSet;
@property (nonatomic, readonly) unsigned long long deletedObjectCount;

- (void)finish;
- (id)initWithProfile:(id)arg1 database:(id)arg2;
- (_Bool)deleteObjectWithPersistentID:(long long)arg1 entityClass:(Class)arg2 error:(id *)arg3;
- (_Bool)deleteObjectWithPersistentID:(long long)arg1 objectUUID:(id)arg2 entityClass:(Class)arg3 objectType:(id)arg4 provenanceIdentifier:(id)arg5 deletionDate:(id)arg6 error:(id *)arg7;
- (_Bool)_deleteAssociatedObjectsForPersistentID:(long long)arg1 entityClass:(Class)arg2 deletionDate:(id)arg3 error:(id *)arg4;
- (id)_provenanceIDForDeletedObjectWithOriginalProvenanceID:(id)arg1 error:(id *)arg2;
- (id)_localSourceIDForSourceID:(id)arg1 error:(id *)arg2;

@end
