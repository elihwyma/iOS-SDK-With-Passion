/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCServerChangeState, NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCServerPersistedState : NSObject <Swift>

{
    NSMutableDictionary *_pendingMigrations;
    long long _nextRank;
    NSDate *_lastSyncDownDate;
    BRCServerChangeState *_sharedDatabaseChangeState;
    unsigned long long _minLastUsedTime;
}

@property (retain, nonatomic) NSDate *lastSyncDownDate;
@property (nonatomic) long long nextRank;
@property (retain) BRCServerChangeState *sharedDatabaseChangeState;
@property (nonatomic) unsigned long long minLastUsedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)saveToDB:(id)arg1;
- (void)initiateMigrationQueryForMangledIDs:(id)arg1 key:(id)arg2;
- (id)migrationQueryKeyForMangledID:(id)arg1 continuationCursor:(id *)arg2;
- (id)dumpMigrationQueriesForMangledID:(id)arg1;
- (void)migrationQueryForMangledID:(id)arg1 key:(id)arg2 didUpdateWithCursor:(id)arg3;
- (_Bool)mangledIDIsPendingMigration:(id)arg1;

@end
