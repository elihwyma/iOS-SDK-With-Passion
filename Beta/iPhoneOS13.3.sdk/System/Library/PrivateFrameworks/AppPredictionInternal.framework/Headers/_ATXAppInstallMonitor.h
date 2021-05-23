/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDictionary, _ATXAppInfoManager;

@protocol OS_dispatch_queue;

@interface _ATXAppInstallMonitor : NSObject

{
    _ATXAppInfoManager *_appInfoManager;
    NSDictionary *_assetData;
    NSObject<OS_dispatch_queue> *_installQueue;
    CDUnknownBlockType _updateCompletionBlock;
}

+ (id)removeIntersectionBetweenSet:(id)arg1 set:(id)arg2;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)train;
- (_Bool)restoreInProgress;
- (id)initWithAppInfoManager:(id)arg1;
- (void)synchronousUpdateWithUninstallWaitTime:(unsigned long long)arg1 andBackdate:(_Bool)arg2;
- (void)synchronousUpdateAndBackdate:(_Bool)arg1;
- (void)noSyncUpdateWithWaitTime:(unsigned long long)arg1 andBackdate:(_Bool)arg2;
- (void)receivedStateChangeNotification:(id)arg1;
- (void)receivedInstallNotification:(id)arg1;
- (void)_receivedInstallNotificationWithApps:(id)arg1 placeholderInstallNotification:(_Bool)arg2;
- (void)receivedUninstallNotification:(id)arg1;
- (void)_receivedUninstallNotificationWithApps:(id)arg1 placeholderUninstallNotification:(_Bool)arg2;
- (void)handleInstallationOfApps:(id)arg1 andBackdate:(_Bool)arg2;
- (void)handleUninstallationOfApps:(id)arg1;
- (id)_fetchInstalledApps;
- (id)_fetchAllAppsFromDatastore;
- (id)_fetchAllAppsWithInstallDateFromDatastore;
- (void)setUpdateCompletionBlock:(CDUnknownBlockType)arg1;

@end
