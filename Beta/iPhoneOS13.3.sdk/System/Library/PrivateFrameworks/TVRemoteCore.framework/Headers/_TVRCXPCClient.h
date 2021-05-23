/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection;

@protocol TVRCXPCRequestProtocol;

@interface _TVRCXPCClient : NSObject

{
    NSXPCConnection *_xpcConnection;
    id <TVRCXPCRequestProtocol> _remoteObject;
    NSMutableDictionary *_eventObserversByID;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id <TVRCXPCRequestProtocol> remoteObject;
@property (retain, nonatomic) NSMutableDictionary *eventObserversByID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)fulfillAuthChallengeForDeviceWithIdentifier:(id)arg1 withLocallyEnteredCode:(id)arg2;
- (void)cancelAuthChallengeForDeviceWithIdentifier:(id)arg1;
- (void)_setupConnectionIfNeeded;
- (void)openConnectionToDeviceWithIdentifier:(id)arg1;
- (void)closeConnectionToDeviceWithIdentifier:(id)arg1 withType:(unsigned long long)arg2;
- (void)sendButtonEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendTouchEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendGameControllerEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendInputText:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendInputReturnKeyToDeviceWithIdentifier:(id)arg1;
- (void)sendInputTextPayload:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)setVoiceRecorderAutomaticRecording:(_Bool)arg1 forDeviceWithIdentifier:(id)arg2;
- (void)startVoiceRecordingForDeviceWithIdentifier:(id)arg1;
- (void)stopVoiceRecordingForDeviceWithIdentifier:(id)arg1;
- (void)beginDeviceQuery;
- (void)endDeviceQuery;
- (void)fetchActiveMREndpointUIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2 options:(id)arg3 response:(CDUnknownBlockType)arg4;
- (void)_broadcastStateUpdateToDevices:(id)arg1;
- (void)_disconnectAllDevices;
- (void)_postInvalidationNotification;
- (void)deviceUpdatedState:(id)arg1;
- (void)deviceWithState:(id)arg1 encounteredAuthChallengeOfType:(long long)arg2 attributes:(long long)arg3 codeToEnterOnDevice:(id)arg4;
- (void)deviceQueryUpdatedDiscoveredDevices:(id)arg1;
- (void)addEventObserver:(id)arg1 forDeviceWithIdentifier:(id)arg2;
- (void)removeEventObserver:(id)arg1 forDeviceWithIdentifier:(id)arg2;

@end
