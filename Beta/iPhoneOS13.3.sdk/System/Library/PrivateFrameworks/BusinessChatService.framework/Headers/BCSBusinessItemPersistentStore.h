/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <BusinessChatService/BCSPersistentStore.h>

@interface BCSBusinessItemPersistentStore : BCSPersistentStore

- (const char *)schema;
- (long long)schemaVersion;
- (id)databasePath;
- (id)_databasePath;
- (_Bool)deleteBusinessItem:(id)arg1 fromDatabase:(struct sqlite3 *)arg2;
- (_Bool)_insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2 fromDatabase:(struct sqlite3 *)arg3;
- (_Bool)_insertBusinessItem:(id)arg1 withTTL:(double)arg2 inDatabase:(struct sqlite3 *)arg3;
- (_Bool)_updateToLastRetrievedDate:(id)arg1 forBusinessItem:(id)arg2 inDatabase:(struct sqlite3 *)arg3;
- (id)_executeFetchPersistentBusinessItemObjectSQLQuery:(const char *)arg1 forDatabase:(struct sqlite3 *)arg2;
- (_Bool)deleteBusinessItemWithBizID:(id)arg1 fromDatabase:(struct sqlite3 *)arg2;
- (_Bool)deleteBusinessItemWithPhoneNumber:(id)arg1 fromDatabase:(struct sqlite3 *)arg2;
- (_Bool)_executeDeleteBusinessItemSQLQuery:(const char *)arg1 forDatabase:(struct sqlite3 *)arg2;
- (_Bool)insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2 fromDatabase:(struct sqlite3 *)arg3;
- (_Bool)updateTTL:(double)arg1 forBusinessItem:(id)arg2 inDatabase:(struct sqlite3 *)arg3;
- (_Bool)updateLastRetrievedDateForBusinessItem:(id)arg1 inDatabase:(struct sqlite3 *)arg2;
- (id)fetchPersistentBusinessItemObjectWithBizID:(id)arg1 fromDatabase:(struct sqlite3 *)arg2;
- (id)fetchPersistentBusinessItemObjectWithPhoneNumber:(id)arg1 fromDatabase:(struct sqlite3 *)arg2;

@end
