/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHLogger.h>

@class AWDServerConnection;

__attribute__((visibility("hidden")))
@interface AWDLogger : CHLogger

{
    AWDServerConnection *_awdServer;
}

@property (retain, nonatomic) AWDServerConnection *awdServer;

+ (id)instance;

- (id)init;
- (void)deleteAll:(unsigned long long)arg1;
- (void)uninitializedDatabaseSave;
- (void)databaseSaveError:(long long)arg1 withTableName:(id)arg2;
- (void)callAddedWithNilUuid:(unsigned long long)arg1 withCallStatus:(unsigned long long)arg2;
- (void)submitMetric:(id)arg1 withId:(unsigned int)arg2;
- (void)commCenterMigrationResult:(_Bool)arg1 withMigratedCallCount:(unsigned long long)arg2;
- (void)databaseMigrationResult:(_Bool)arg1 oldVersion:(long long)arg2 newVersion:(long long)arg3;
- (void)entitlementRejection:(int)arg1;
- (void)syncSuccess:(unsigned long long)arg1 withDownloadRecordCount:(unsigned long long)arg2;
- (void)syncFailure:(unsigned int)arg1;
- (void)bootstrapGizmo:(unsigned long long)arg1;
- (void)gizmoDatabaseMigrationFailure;

@end
