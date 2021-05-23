/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSString, PQLConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPQLCache : NSObject

{
    PQLConnection *_pdb;
    NSHashTable *_contexts;
    NSObject<OS_dispatch_queue> *_dbQueue;
    unsigned long long _openHandles;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic) unsigned long long openHandles;
@property (nonatomic, readonly) NSHashTable *contexts;
@property (nonatomic, readonly) PQLConnection *database;
@property (nonatomic, readonly) _Bool isOpen;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSArray *createInitialTablesSQL;

- (_Bool)openWithError:(id *)arg1;
- (_Bool)closeWithError:(id *)arg1;
- (id)initWithClientContext:(id)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (id)infoToUpgradeFromVersion:(unsigned long long)arg1;
- (_Bool)_setupConnectionWithError:(id *)arg1;
- (_Bool)_truncateAndReconnectToDatabaseWithError:(id *)arg1;
- (_Bool)removeCorruptDatabaseWithError:(id *)arg1;
- (id)_newConnection:(id)arg1;
- (_Bool)_setupCacheWithError:(id *)arg1;
- (_Bool)_lockedOpenDatabase:(id *)arg1;
- (_Bool)removeDatabaseFilesWithError:(id *)arg1;
- (void)performOnDBQueue:(CDUnknownBlockType)arg1;
- (_Bool)_closeWithError:(id *)arg1 force:(_Bool)arg2;
- (_Bool)forceCloseWithError:(id *)arg1;

@end
