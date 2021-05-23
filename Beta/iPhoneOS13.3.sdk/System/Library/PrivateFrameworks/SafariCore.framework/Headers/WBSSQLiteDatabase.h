/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, NSURL;

@protocol OS_dispatch_queue, WBSSQLiteDatabaseDelegate;

@interface WBSSQLiteDatabase : NSObject

{
    struct sqlite3 *_handle;
    NSObject<OS_dispatch_queue> *_queue;
    id <WBSSQLiteDatabaseDelegate> _delegate;
    NSURL *_url;
}

@property (weak, nonatomic) id <WBSSQLiteDatabaseDelegate> delegate;
@property (nonatomic, readonly) struct sqlite3 *handle;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) int lastErrorCode;
@property (nonatomic, readonly) NSString *lastErrorMessage;
@property (nonatomic, readonly) NSError *lastError;
@property (nonatomic, readonly) long long lastInsertRowID;
@property (nonatomic, readonly) long long changedRowCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;
+ (id)inMemoryDatabaseURL;
+ (id)_errorWithErrorCode:(int)arg1;
+ (id)privateOnDiskDatabaseURL;
+ (id)writeAheadLogURLForDatabaseURL:(id)arg1;
+ (id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)arg1;

- (void)dealloc;
- (int)close;
- (_Bool)executeQuery:(id)arg1 error:(id *)arg2;
- (id)fetchQuery:(id)arg1;
- (id)initWithURL:(id)arg1 queue:(id)arg2;
- (_Bool)openWithAccessType:(long long)arg1 error:(id *)arg2;
- (int)checkpointWriteAheadLogWithLogFrameCount:(int *)arg1 checkpointedFrameCount:(int *)arg2;
- (_Bool)reportErrorWithCode:(int)arg1 statement:(struct sqlite3_stmt *)arg2 error:(id *)arg3;
- (id)checkIntegrity;
- (_Bool)openWithAccessType:(long long)arg1 vfs:(id)arg2 error:(id *)arg3;
- (_Bool)openWithAccessType:(long long)arg1 protectionType:(long long)arg2 vfs:(id)arg3 error:(id *)arg4;
- (_Bool)_openWithFlags:(int)arg1 vfs:(id)arg2 error:(id *)arg3;
- (_Bool)reportErrorWithCode:(int)arg1 query:(id)arg2 error:(id *)arg3;
- (void)_reportSevereError:(id)arg1;
- (id)fetchQuery:(id)arg1 stringArguments:(id)arg2;
- (_Bool)tryToPerformTransactionInBlock:(CDUnknownBlockType)arg1;
- (_Bool)enableWAL:(id *)arg1;

@end
