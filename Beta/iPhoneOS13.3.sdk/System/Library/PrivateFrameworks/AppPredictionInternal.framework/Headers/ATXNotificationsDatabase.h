/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString, _PASSqliteDatabase;

@protocol OS_dispatch_queue;

@interface ATXNotificationsDatabase : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    _PASSqliteDatabase *_db;
    _Bool _dbInitialized;
}

@property (nonatomic, readonly) _PASSqliteDatabase *db;

- (id)init;
- (long long)currentSchemaVersion;
- (id)createSchema;
- (_Bool)migrate;
- (long long)latestVersion;
- (id)initWithDefaultPath:(id)arg1;
- (id)initWithDbPath:(id)arg1;
- (void)_startDatabase;
- (void)_disconnectFromDb;
- (_Bool)_configureDatabase;
- (id)createCustomSchema;
- (void)_initializeSchemaVersion:(long long)arg1;
- (void)_runMigration;
- (_Bool)_initializeTables;
- (long long)countRowsOfTable:(id)arg1;

@end
