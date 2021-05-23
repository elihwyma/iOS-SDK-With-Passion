/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCClientZone, BRCPQLConnection, CKServerChangeToken, NSError, NSURL;

__attribute__((visibility("hidden")))
@interface BRCPendingChangesStream : NSObject

{
    NSURL *_databaseURL;
    NSError *_error;
    BRCPQLConnection *_db;
    CKServerChangeToken *_startingChangeToken;
    BRCClientZone *_clientZone;
}

- (void)dealloc;
- (void)_openDB;
- (id)saveError;
- (id)initWithServerZone:(id)arg1;
- (_Bool)enumerateRecordsOfType:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)destroyDatabase;
- (void)fetchTokenState:(CDUnknownBlockType)arg1;
- (_Bool)saveEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareIDs:(id)arg3 serverChangeToken:(id)arg4 clientChangeToken:(long long)arg5 syncStatus:(long long)arg6;
- (void)destroyDatabaseOnQueue:(_Bool)arg1;
- (void)_dbBecameCorrupted;
- (void)_createSchemaIfNecessary;
- (long long)_recordTypeFromRecordID:(id)arg1 isShare:(_Bool)arg2 isDelete:(_Bool)arg3;
- (void)_destroyDatabase;

@end
