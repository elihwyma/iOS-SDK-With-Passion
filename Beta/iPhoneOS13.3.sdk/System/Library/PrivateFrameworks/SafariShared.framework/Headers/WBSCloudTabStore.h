/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, WBSCloudTabDevice;

@protocol OS_dispatch_queue, WBSCloudTabStoreDelegate;

@interface WBSCloudTabStore : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_syncedCloudTabDevicesFromKVS;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromKVS;
    _Bool _hasAttemptedToRemoveCurrentDeviceFromKVS;
    _Bool _isFetchingDataFromCloudKit;
    _Bool _hasAttemptedToFetchDevicesAtLeastOnce;
    NSMutableArray *_syncedCloudTabDevicesFromCloudKit;
    WBSCloudTabDevice *_currentDevice;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromCloudKit;
    NSError *_lastFetchError;
    _Bool _syncAgentIsAvailable;
    id <WBSCloudTabStoreDelegate> _wbsDelegate;
}

@property (nonatomic, readonly) _Bool atLeastOneOtherActiveDeviceIsRegistered;
@property (weak, nonatomic) id <WBSCloudTabStoreDelegate> wbsDelegate;
@property (nonatomic, readonly) _Bool syncAgentIsAvailable;
@property (nonatomic, readonly) long long uniqueDeviceMultiplicity;
@property (nonatomic, readonly) _Bool currentDeviceIsRegisteredInCloudKit;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentationOfCurrentDeviceInCloudKit;
@property (nonatomic, readonly) NSError *lastFetchError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *syncedCloudTabDevices;
@property (copy, nonatomic, readonly) NSDate *dateOfLastCloudTabDevicesUpdate;

+ (id)errorWithCode:(long long)arg1;
+ (id)_debugErrorMessageForCode:(long long)arg1;

- (id)init;
- (void)synchronizeCloudTabDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_syncAgentProxyConnectionWasInvalidated:(id)arg1;
- (void)createSyncedCloudTabDevicesAndCloseRequestsFromKVS;
- (id)_devicesByRemovingThisDeviceAndDevicesWithNoTabs:(id)arg1;
- (id)_keyValueStoreDictionaryRepresentation:(long long)arg1;
- (void)_addDeviceDictionaryFromKVS:(id)arg1 deviceUUID:(id)arg2;
- (void)_addCloseRequestDictionary:(id)arg1 toDeviceUUIDsToCloseRequestsDictionary:(id)arg2 requestUUID:(id)arg3;
- (void)_pruneOrphanedCloseRequestsFromKVS;
- (id)_devicesByRemovingDevicesFromKVSWithOutstandingCloseRequests:(id)arg1;
- (void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2;
- (id)_currentDeviceUUID;
- (_Bool)_deviceIsStoredInCloudKit:(id)arg1;
- (_Bool)_writeCloseRequestForTab:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(_Bool)arg3;
- (void)_tabWasClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(_Bool)arg3 syncedCloudTabDevices:(id)arg4;
- (_Bool)_closeTabs:(id)arg1 onDevice:(id)arg2;
- (void)_closeRequestedTabIfPossible:(id)arg1;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)arg1 fetchedCloseRequests:(id)arg2 error:(id)arg3;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)arg1 fetchedCloseRequests:(id)arg2 fetchedDevicesBySyncing:(_Bool)arg3 error:(id)arg4;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3;
- (void)_tabsWereClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(_Bool)arg3 syncedCloudTabDevices:(id)arg4;
- (unsigned long long)_indexOfDevice:(id)arg1 inSyncedCloudTabDevices:(id)arg2;
- (id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg1 closeRequestsForDevice:(id)arg2;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromKVS;
- (void)pruneExpiredDevicesFromKVS;
- (_Bool)closeTab:(id)arg1 onDevice:(id)arg2;
- (_Bool)closeTabs:(id)arg1 onDevice:(id)arg2;
- (_Bool)closeAllTabsOnDevice:(id)arg1;
- (void)handleCloseTabRequestsFromKVS;
- (void)saveCurrentCloudTabDeviceDictionaryToCloudKit:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pruneExpiredDevicesFromCloudKit;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg1;
- (void)handleCloseTabRequestsFromCloudKit;
- (void)deleteAllDevicesFromCloudKit;

@end
