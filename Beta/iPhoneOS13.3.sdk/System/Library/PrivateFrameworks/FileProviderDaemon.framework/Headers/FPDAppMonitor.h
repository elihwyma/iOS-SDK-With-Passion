/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPAppRegistry, FPDServer, NSDictionary;

@protocol OS_dispatch_queue;

@interface FPDAppMonitor : NSObject

{
    NSDictionary *_defaultProviderByAppBundleID;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _didChangeProvidersToken;
    int _didChangeDefaultProviderToken;
    _Bool _monitoring;
    FPAppRegistry *_appRegistry;
    FPDServer *_server;
}

@property (weak, nonatomic, readonly) FPDServer *server;
@property (getter=isMonitoring) _Bool monitoring;
@property (copy, nonatomic, readonly) FPAppRegistry *appRegistry;

- (void)startMonitoring;
- (void)stopMonitoring;
- (id)initWithServer:(id)arg1;
- (void)dumpStateTo:(id)arg1;
- (int)_registerForNotification:(const char *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_updateDefaultProviderDomainID;
- (void)_updateDefaultProviderByAppBundleID;
- (void)_didRegisterApps:(id)arg1;
- (void)_didUnregisterApps:(id)arg1;
- (void)_didChangeLocale:(id)arg1;
- (void)_didChangeListOfProviders;
- (void)_didChangeDefaultSaveLocationInUserDefaults;
- (void)_populateListOfMonitoredApps;
- (id)_appMetadataIfMonitoringIsNeeded:(id)arg1;

@end
