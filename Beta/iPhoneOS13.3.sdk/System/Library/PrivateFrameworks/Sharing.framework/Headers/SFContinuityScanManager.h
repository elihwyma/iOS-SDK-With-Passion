/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Sharing/SFXPCClient.h>

@class NSHashTable, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface SFContinuityScanManager : SFXPCClient

{
    NSMutableSet *_foundDevices;
    NSHashTable *_observers;
    unsigned long long _scanTypes;
}

@property (retain) NSMutableSet *foundDevices;
@property (retain) NSHashTable *observers;
@property unsigned long long scanTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (id)machServiceName;
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (_Bool)shouldEscapeXpcTryCatch;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)scanForTypes:(unsigned long long)arg1;
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)lostDeviceWithDevice:(id)arg1;
- (void)receivedAdvertisement:(id)arg1;
- (void)foundDeviceWithDevice:(id)arg1;
- (void)pairedDevicesChanged:(id)arg1;

@end
