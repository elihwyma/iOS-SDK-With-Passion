/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, SSSQLiteDatabase;

@interface SSVPlayActivityTable : NSObject

{
    SSSQLiteDatabase *_database;
}

@property (nonatomic) unsigned long long currentEventsRevision;
@property (copy, nonatomic, readonly) NSString *eventsRevisionVersionToken;

+ (id)databasePath;
+ (_Bool)_setupDatabase:(id)arg1;
+ (id)_eventsDatabaseTableName;
+ (id)_propertiesDatabaseTableName;

- (id)init;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 additionalRevisionsIndexSet:(id)arg5 ignoredRevisionsIndexSet:(id)arg6 error:(id *)arg7;
- (_Bool)insertPlayActivityEvent:(id)arg1 withRevision:(unsigned long long)arg2 returningError:(id *)arg3;
- (_Bool)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 returningError:(id *)arg2;
- (_Bool)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 additionalRevisionsIndexSet:(id)arg6 ignoredRevisionsIndexSet:(id)arg7 error:(id *)arg8;
- (id)revisionsIndexSetForPlayActivityEvents:(id)arg1;
- (id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;
- (_Bool)_removeDatabaseReturningError:(id *)arg1;
- (id)_valueForDatabasePropertyKey:(id)arg1;
- (_Bool)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2;
- (_Bool)_getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 shouldFilterStoreAccountID:(_Bool)arg6 additionalRevisionsIndexSet:(id)arg7 ignoredRevisionsIndexSet:(id)arg8 error:(id *)arg9;
- (id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(CDUnknownBlockType)arg1 count:(unsigned long long)arg2;

@end
