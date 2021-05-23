/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSMutableSet, NSString;

@interface NSURLCacheDBReader : NSObject

{
    struct sqlite3_stmt *_sqlSelectStmt;
    struct sqlite3_stmt *_sqlSelectTimeStmt;
    struct sqlite3 *_dbReadConnection;
    struct os_unfair_lock_s _dbReadConnectionLock;
    long long _schemaVersion;
    struct os_unfair_lock_s _timeRelativeLookupLock;
    NSMutableSet *recentTimeStampLookups;
    unsigned char _performTimeRelativeLookups;
    NSString *_dbPathDirectory;
    NSString *_dbPathFile;
    NSMutableSet *_recentTimeStampLookups;
    _Bool _isDBOpen;
}

@property _Bool isDBOpen;
@property (retain) NSString *dbPathDirectory;
@property (retain) NSString *dbPathFile;
@property (retain) NSMutableSet *recentTimeStampLookups;
@property unsigned char performTimeRelativeLookups;

- (id)init;
- (void)dealloc;
- (struct _CFCachedURLResponse *)createCachedResponseForKey:(id)arg1 cacheDataPath:(id *)arg2 cacheDataFile:(id *)arg3 caller:(struct _CFURLCache *)arg4;
- (id)initWithDBPath:(id)arg1 maxSize:(long long)arg2;
- (_Bool)openAndPrepareReadCacheDB;
- (void)cleanupAndShutdown_Lock;
- (_Bool)_openDBReadConnections;
- (void)_closeDB;
- (void)_closeDBReadConnections;
- (_Bool)_prepareDBStatements;
- (_Bool)_prepareDBSelectStatements;
- (_Bool)_finalizeAllDBStatements;
- (_Bool)_finalizeDBSelectStatements;
- (void)performTimeRelativeLookupWithInitialTime:(id)arg1 caller:(struct _CFURLCache *)arg2;
- (int)stepSQLStatement:(struct sqlite3_stmt *)arg1 toCompletionWithRetry:(long long)arg2;
- (int)execSQLStatement:(const char *)arg1 onConnection:(struct sqlite3 *)arg2 toCompletionWithRetry:(long long)arg3 writeLockHeld:(_Bool)arg4;
- (id)createCachedResponseDictForTransmissionWithKey:(id)arg1 objectVersion:(long long)arg2 storagePolicy:(int)arg3 responseObjectBytes:(char *)arg4 responseObjectBytesLength:(int)arg5 protoProps:(char *)arg6 protoPropsLength:(int)arg7 receiverDataBytes:(char *)arg8 receiverDataLength:(int)arg9 requestObjectBytes:(char *)arg10 requestObjectBytesLength:(int)arg11 userInfoBytes:(const char *)arg12 useInfoLength:(int)arg13 isDataOnFS:(_Bool)arg14 cacheDirPath:(id)arg15 cacheFileName:(id)arg16;

@end
