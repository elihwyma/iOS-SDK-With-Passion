/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSArray, NSMapTable, NSString, NSUUID, PSYInitialSyncStateObserver;

@protocol OS_dispatch_queue;

@interface ICNanoPairedDeviceStatusMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callBackQueue;
    NSMapTable *_observers;
    PSYInitialSyncStateObserver *_initialSyncStateObserver;
    NSString *_pairingIDPropertyName;
    _Bool _isInitialSyncComplete;
}

@property (copy, nonatomic, readonly) NSArray *allPairedDevicePairingIDs;
@property (copy, nonatomic, readonly) NSUUID *activePairedDevicePairingID;
@property (copy, nonatomic, readonly) NSUUID *pairedDevicePairingID;
@property (nonatomic) _Bool isInitialSyncComplete;
@property (nonatomic, readonly, getter=isMediaSyncingSupported) _Bool mediaSyncingSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)dealloc;
- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)_allObservers;
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;
- (void)deviceBecameActive:(id)arg1;
- (id)_activePairedDevice;
- (void)_handlePairedDeviceChangedNotification;

@end
