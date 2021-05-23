/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSCache, NSHashTable;

@protocol OS_dispatch_queue;

@interface BSSqliteDatabaseConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    struct sqlite3 *_queue_dbConnection;
    NSCache *_queue_queryCache;
    NSHashTable *_queue_observers;
}

+ (int)_sqliteOpenFlagsForDataProtectionClass:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (void)close;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)performSyncWithDatabase:(CDUnknownBlockType)arg1;
- (void)performWithDatabase:(CDUnknownBlockType)arg1;
- (id)lastErrorMessage;
- (id)_initWithSqlitePath:(id)arg1 dataProtectionClass:(unsigned long long)arg2;
- (void)_closeConnection;
- (id)_sqliteErrorForResult:(int)arg1 errorMessage:(id)arg2;
- (void)_queue_close;
- (id)initWithInMemoryDatabase;
- (id)initWithFileURL:(id)arg1 dataProtectionClass:(unsigned long long)arg2;
- (id)prepareStatement:(id)arg1;
- (_Bool)truncateDatabaseAndReturnError:(out id *)arg1;

@end
