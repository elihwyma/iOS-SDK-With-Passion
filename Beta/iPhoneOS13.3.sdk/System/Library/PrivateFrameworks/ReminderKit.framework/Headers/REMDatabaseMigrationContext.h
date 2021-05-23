/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSError, NSString, REMStore, REMStoreContainerToken;

@interface REMDatabaseMigrationContext : NSObject

{
    _Bool _hasPerformedEnsureAccountsExist;
    REMStoreContainerToken *_containerToken;
    REMStore *_cachedStore;
    NSDate *_migrationStartDate;
    NSString *_lastReportedErrorIdentifier;
    unsigned long long _lastReportedErrorStage;
    NSError *_lastReportedError;
}

@property (nonatomic) _Bool isDatabaseMigrated;
@property (retain, nonatomic) REMStoreContainerToken *containerToken;
@property (retain, nonatomic) REMStore *cachedStore;
@property (retain, nonatomic) NSDate *migrationStartDate;
@property (nonatomic) _Bool hasPerformedEnsureAccountsExist;
@property (retain, nonatomic) NSString *lastReportedErrorIdentifier;
@property (nonatomic) unsigned long long lastReportedErrorStage;
@property (retain, nonatomic) NSError *lastReportedError;
@property (nonatomic, readonly) _Bool shouldDeleteMigratedData;

- (id)init;
- (void)dealloc;
- (id)remStore;
- (id)initWithSandboxDatabaseEnabled:(_Bool)arg1;
- (void)destroySandboxContainerIfNecessary;
- (void)_diagnosticReportWithStage:(unsigned long long)arg1 failureIdentifier:(id)arg2 error:(id)arg3;
- (void)setShouldDataAccessStopSyncingReminders:(_Bool)arg1;
- (void)_postMigrationLocalAccountCleanup;
- (_Bool)_cleanLocalDatabases:(id *)arg1;
- (id)_migrationAccountInfosFromDEPRECATEDInfoDictionaryList:(id)arg1;
- (_Bool)ensureAccountsExistWithMigrationAccountInfos:(id)arg1 error:(id *)arg2;
- (void)reportMigrationWillBegin;
- (void)reportMigrationErrorWithIdentifier:(id)arg1 atStage:(unsigned long long)arg2 error:(id)arg3 objectLocator:(id)arg4;
- (void)reportMigrationDidFinishWithSuccess:(_Bool)arg1;
- (_Bool)ensureAccountsExist:(id)arg1 error:(id *)arg2;
- (_Bool)ensureAccountsExist:(id *)arg1;

@end
