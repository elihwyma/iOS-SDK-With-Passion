/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Security/SFAnalytics.h>

@class NSDate, NSMutableArray, NSObject;

@protocol OS_dispatch_queue;

@interface LocalKeychainAnalytics : SFAnalytics

{
    _Bool _probablyInClassD;
    NSMutableArray *_pendingReports;
    NSObject<OS_dispatch_queue> *_queue;
    int _notificationToken;
    NSDate *_backupStartTime;
    int _backupType;
}

+ (id)databasePath;

- (id)init;
- (_Bool)canPersistMetrics;
- (void)processPendingMessages;
- (void)reportKeychainUpgradeFrom:(int)arg1 to:(int)arg2 outcome:(int)arg3 error:(id)arg4;
- (void)reportKeychainUpgradeOutcome:(int)arg1 attributes:(id)arg2;
- (void)reportKeychainBackupStartWithType:(int)arg1;
- (void)reportKeychainBackupEnd:(_Bool)arg1 error:(id)arg2;

@end
