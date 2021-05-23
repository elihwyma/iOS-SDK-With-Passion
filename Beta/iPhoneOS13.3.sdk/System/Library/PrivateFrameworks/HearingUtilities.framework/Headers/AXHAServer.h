/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <HCServer.h>

@class NSArray, NSMutableDictionary, NSString;

@protocol AXHAServerDelegate;

@interface AXHAServer : HCServer

{
    NSMutableDictionary *_responseBlocks;
    _Bool _hearingAidReachableForAudioTransfer;
    _Bool _hearingAidConnectedOrReachable;
    NSArray *_availableHearingAids;
    NSArray *_availableControllers;
    NSString *_hearingDeviceName;
    NSString *_connectedDeviceName;
    NSMutableDictionary *_updates;
}

@property (copy, nonatomic) NSArray *availableHearingAids;
@property (retain, nonatomic) NSArray *availableControllers;
@property (nonatomic) _Bool hearingAidConnectedOrReachable;
@property (nonatomic) _Bool hearingAidReachableForAudioTransfer;
@property (retain, nonatomic) NSString *hearingDeviceName;
@property (retain, nonatomic) NSString *connectedDeviceName;
@property (retain, nonatomic) NSMutableDictionary *updates;
@property (nonatomic, readonly) _Bool hearingAidReachable;
@property (weak, nonatomic) id <AXHAServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)resetConnection;
- (void)registerResponseBlock:(CDUnknownBlockType)arg1 forUUID:(id)arg2;
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (_Bool)shouldRestartOnInterruption;
- (void)startServerWithDelegate:(id)arg1;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3;
- (void)availableDevicesDidUpdate:(id)arg1;
- (void)deviceDidUpdateProperty:(id)arg1;
- (void)liveListenDidUpdate:(id)arg1;
- (void)environmentalDosimetryDidUpdate:(id)arg1;
- (void)registerUpdateBlock:(id)arg1 forIdentier:(unsigned long long)arg2 withListener:(id)arg3;
- (void)_registerListener:(id)arg1 forAvailableDeviceHandler:(CDUnknownBlockType)arg2 beginSearching:(_Bool)arg3;
- (void)unregisterUpdateListener:(id)arg1;
- (void)registerListener:(id)arg1 forAvailableDeviceHandler:(CDUnknownBlockType)arg2;
- (void)registerPassiveListener:(id)arg1 forAvailableDeviceHandler:(CDUnknownBlockType)arg2;
- (void)registerListener:(id)arg1 forPropertyUpdateHandler:(CDUnknownBlockType)arg2;
- (void)connectToControllerWithID:(id)arg1;
- (void)requestHearingAidConnectionWithReason:(long long)arg1;
- (void)cancelHearingAidConnectionRequest;
- (void)registerListener:(id)arg1 forLiveListenLevelsHandler:(CDUnknownBlockType)arg2;
- (void)startLiveListen;
- (void)stopLiveListen;
- (void)registerListener:(id)arg1 forLiveDosimetryUpdates:(_Bool)arg2 withDoseHandler:(CDUnknownBlockType)arg3;
- (void)unregisterDoseHandler:(id)arg1;

@end
