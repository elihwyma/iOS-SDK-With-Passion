/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSQLiteDatabase, NSURL;

@interface HDIDSPersistentDictionary : NSObject

{
    Class _objectClass;
    NSURL *_databaseURL;
    HDSQLiteDatabase *_database;
}

- (void)dealloc;
- (void)invalidate;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (_Bool)_openDB;
- (void)didCancel:(id)arg1;
- (id)_dataFromObject:(id)arg1;
- (id)_objectFromData:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 expires:(double)arg3;
- (void)enumerateObjectsSortedByExpirationDate:(CDUnknownBlockType)arg1;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(_Bool)arg2;
- (void)_obliterateWithReason:(id)arg1 preserveCopy:(_Bool)arg2 generateStackshot:(_Bool)arg3;
- (_Bool)_reallyOpenDB;
- (_Bool)_createSchemaWithError:(id *)arg1;
- (void)_handleError:(id)arg1 format:(id)arg2;
- (void)_recordMessage:(id)arg1 deviceID:(id)arg2 type:(int)arg3 outgoing:(_Bool)arg4 request:(_Bool)arg5 length:(long long)arg6;
- (void)_recordMappingOfRequest:(id)arg1 toResponse:(id)arg2;
- (id)initWithURL:(id)arg1 objectClass:(Class)arg2;
- (void)didSendRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4;
- (void)didReceiveRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4;
- (void)didSendResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5;
- (void)didReceiveResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5;
- (void)didFinishSending:(id)arg1;
- (void)didReceiveError:(id)arg1 forMessageID:(id)arg2;
- (id)messageIDsForPendingOutgoingMessagesWithType:(int)arg1 deviceID:(id)arg2;

@end
