/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSArray, NSDate, NSString, _SYSharedServiceDB;

@protocol OS_dispatch_queue;

@interface NMSWindowData : NSObject

{
    NSString *_path;
    struct __CFString *_loggingFacility;
    NSObject<OS_dispatch_queue> *_syncQ;
    struct sqlite3 *_db;
    _SYSharedServiceDB *_sharedDB;
    struct sqlite3_stmt *_addMessageInFlight;
    struct sqlite3_stmt *_getMessageLength;
    struct sqlite3_stmt *_removeMessageInFlight;
    struct sqlite3_stmt *_getNextExpireDate;
    struct sqlite3_stmt *_getExpiredMessageIDs;
    struct sqlite3_stmt *_getBytesInFlight;
    struct sqlite3_stmt *_getCountInFlight;
    struct sqlite3_stmt *_pushPendingMessage;
    struct sqlite3_stmt *_getPendingMessage;
    struct sqlite3_stmt *_popPendingMessage;
    struct sqlite3_stmt *_countPendingMessages;
}

@property (nonatomic, readonly) NSArray *expiredMessageIDs;
@property (nonatomic, readonly) unsigned long long lengthOfAllMessagesInFlight;
@property (nonatomic, readonly) unsigned long long countOfAllMessagesInFlight;
@property (nonatomic, readonly) NSDate *dateOfNextMessageExpiry;
@property (nonatomic, readonly) unsigned long long countOfPendingMessages;

- (id)init;
- (void)dealloc;
- (void)_prepareStatements;
- (_Bool)_openDBForceRecreate:(_Bool)arg1;
- (void)removeAllMessages;
- (id)initWithPath:(id)arg1 logFacility:(struct __CFString *)arg2;
- (void)_ensureSchema;
- (void)_withDB:(CDUnknownBlockType)arg1;
- (int)_getSchemaVersion;
- (_Bool)_syncTransaction:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithSharedDBForServiceName:(id)arg1;
- (void)addMessageWithID:(id)arg1 ofLength:(unsigned long long)arg2 timeoutTime:(double)arg3;
- (unsigned long long)removeAndReturnLengthOfMessageWithID:(id)arg1;
- (unsigned long long)removeAndReturnLengthOfMessagesWithIDs:(id)arg1;
- (void)pushPendingMessageData:(id)arg1 timeToLive:(double)arg2;
- (id)popPendingMessage;
- (struct sqlite3 *)dbRef;

@end
