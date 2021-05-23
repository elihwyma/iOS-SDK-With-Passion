/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class NSArray, NSString, NSUserDefaults;

@protocol OS_dispatch_queue;

@interface ATDeviceSettings : NSObject

{
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_bundleIdentifier;
}

@property (nonatomic, readonly) _Bool isDeviceLinkClient;
@property (copy, nonatomic, readonly) NSString *libraryIdentifier;
@property (copy, nonatomic, readonly) NSString *serviceName;
@property (copy, nonatomic, readonly) NSString *serviceDomain;
@property (copy, nonatomic, readonly) NSString *serviceType;
@property (copy, nonatomic, readonly) NSString *interfaceName;
@property (copy, nonatomic, readonly) NSArray *dataClassesNeedingSync;
@property (nonatomic, readonly) double pairingSyncCompletionTime;
@property (nonatomic) double lastAuthenticationDialogResponseTime;
@property (nonatomic, readonly) _Bool useNetServicesConnection;
@property (nonatomic, readonly) _Bool fairPlayEnabled;
@property (nonatomic, readonly) _Bool grappaEnabled;
@property (nonatomic, readonly) _Bool restoreBatchingEnabled;
@property (nonatomic, readonly) unsigned long long restoreBatchSize;
@property (nonatomic, readonly) _Bool useNewDownloadService;
@property (nonatomic, readonly) _Bool watchProxyDownloadsDisabled;
@property (nonatomic, readonly) _Bool useNewRestoreService;

+ (id)sharedInstance;

- (id)init;
- (void)synchronize;
- (id)endpointInfo;
- (id)hostInfoForLibrary:(id)arg1;
- (void)removeEndpointInfoForLibrary:(id)arg1;
- (void)setPairingSyncCompletionTime:(double)arg1;
- (void)setSyncPending:(_Bool)arg1 forDataClass:(id)arg2;
- (void)setHostInfo:(id)arg1 forLibrary:(id)arg2;
- (_Bool)isSyncPendingForDataClass:(id)arg1;
- (id)syncStateForLibrary:(id)arg1 dataClass:(id)arg2;
- (int)activeRestoreType;
- (void)setHasCompletedDataMigration:(_Bool)arg1;
- (_Bool)hasCompletedDataMigration;
- (void)setActiveRestoreType:(int)arg1;
- (void)setEndpointInfo:(id)arg1;
- (id)_endpointInfoForLibrary:(id)arg1;
- (void)_setEndpointInfo:(id)arg1 forLibrary:(id)arg2;
- (void)setCurrentInstallDisposition:(id)arg1;
- (id)getCurrentInstallDisposition;
- (void)setPreExistingStoreIdentifiers:(id)arg1;
- (id)getPreExistingStoreIdentifiers;
- (void)setSyncState:(id)arg1 forLibrary:(id)arg2 dataClass:(id)arg3;
- (id)lastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2;
- (void)updateLastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2;
- (void)setVersion:(unsigned long long)arg1 forDataclass:(id)arg2;
- (unsigned long long)versionForDataclass:(id)arg1;

@end
