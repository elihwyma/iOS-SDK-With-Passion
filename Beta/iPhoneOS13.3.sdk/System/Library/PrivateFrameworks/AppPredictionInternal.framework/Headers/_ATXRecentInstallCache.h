/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, _ATXInternalInstallNotification, _ATXInternalUninstallNotification;

@interface _ATXRecentInstallCache : NSObject

{
    double _ttl;
    _ATXInternalInstallNotification *_installNotificationMonitor;
    _ATXInternalUninstallNotification *_uninstallNotificationMonitor;
    NSMutableDictionary *_recentInstallations;
}

- (id)init;
- (void)reset;
- (id)initTrackingAppsMoreRecentThan:(double)arg1 installMonitor:(id)arg2 uninstallMonitor:(id)arg3;
- (id)initTrackingAppsMoreRecentThan:(double)arg1;
- (void)_notifiedOfInstalls:(id)arg1;
- (void)_notifiedOfUninstalls:(id)arg1;
- (id)allRecentlyInstalledApplications;
- (id)_allRecentlyInstalledApplicationsAfterExpirationDate:(id)arg1;
- (id)_getRecentInstallationsMap;

@end
