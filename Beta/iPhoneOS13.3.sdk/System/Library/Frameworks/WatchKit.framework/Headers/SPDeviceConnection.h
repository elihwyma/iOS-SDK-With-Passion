/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, NSXPCConnection;

@protocol OS_dispatch_queue, SPDeviceConnectionDelegate;

@interface SPDeviceConnection : NSObject

{
    id <SPDeviceConnectionDelegate> _delegate;
    NSXPCConnection *_serverConnection;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (retain) NSXPCConnection *serverConnection;
@property (retain) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (weak, nonatomic) id <SPDeviceConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedDeviceConnection;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setLogLevel:(id)arg1;
- (void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createXPCConnectionIfNecessary;
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)activeComplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideUserNotification;
- (void)wakeExtensionForWatchApp:(id)arg1;
- (void)receiveData:(id)arg1;
- (void)invalidateXPCConnection;
- (void)fetchInstalledApplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledComplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activeComplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)activeComplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installAllApplications;
- (void)cancelPendingInstallations;
- (long long)appInstallStateForAppConduitInstallState:(long long)arg1;
- (void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAlwaysInstall:(id)arg1;
- (void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2;
- (void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)connectionProxy:(CDUnknownBlockType)arg1 caller:(const char *)arg2;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completionWithError:(CDUnknownBlockType)arg4;
- (void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledComplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)installApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installApplication:(id)arg1 completionWithError:(CDUnknownBlockType)arg2;
- (void)removeApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAlwaysInstallWithCompletion:(CDUnknownBlockType)arg1;
- (void)showUserNotification:(long long)arg1 bundleID:(id)arg2;
- (void)showUserNotification:(long long)arg1 applicationName:(id)arg2 extensionBundleID:(id)arg3;
- (id)localeForUserNotification;
- (void)_enumerateObserversSafely:(CDUnknownBlockType)arg1;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(CDUnknownBlockType)arg3;
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProvisioningProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
