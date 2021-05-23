/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRExternalDevice.h>

@class MRAVDistantExternalDeviceMetadata, NSObject, NSString, NSXPCConnection, NSXPCListenerEndpoint, _MROriginProtobuf;

@protocol OS_dispatch_queue;

@interface MRDistantExternalDevice : MRExternalDevice

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRAVDistantExternalDeviceMetadata *_externalDeviceMetadata;
    NSXPCConnection *_hostedExternalDeviceConnection;
    unsigned long long _callbacks;
    unsigned long long _deviceNotifications;
    unsigned int _connectionState;
    _MROriginProtobuf *_customOrigin;
    _Bool _isValid;
    _Bool _hasEverAttemptedToConnect;
    CDUnknownBlockType _connectionStateCallback;
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;
    CDUnknownBlockType _nameCallback;
    NSObject<OS_dispatch_queue> *_nameCallbackQueue;
    CDUnknownBlockType _customDataCallback;
    NSObject<OS_dispatch_queue> *_customDataCallbackQueue;
    CDUnknownBlockType _volumeCallback;
    NSObject<OS_dispatch_queue> *_volumeCallbackQueue;
}

@property (copy, nonatomic) CDUnknownBlockType connectionStateCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType nameCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nameCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType customDataCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *customDataCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType volumeCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, readonly) _Bool hasEverAttemptedToConnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serviceInterface;
+ (id)_notificationSerialQueue;

- (void)dealloc;
- (id)name;
- (_Bool)isValid;
- (long long)port;
- (id)hostName;
- (unsigned int)connectionState;
- (id)deviceInfo;
- (_Bool)isPaired;
- (void)disconnect:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)supportedMessages;
- (void)connectWithOptions:(unsigned int)arg1;
- (void)unpair;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(id)arg2;
- (void)hostedExternalDeviceNameDidChange:(id)arg1;
- (void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2;
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;
- (void)hostedExternalDeviceEndpointDidChange:(id)arg1;
- (void)_handleDeviceInfoDidChange:(id)arg1;
- (void)_updateHostedDeviceDesiredNotifications;
- (id)_hostedExternalDeviceConnection;
- (void)_onSerialQueue_synchronousLoadExternalDeviceMetadataIfNecessary;
- (void)_updateHostedDeviceDesiredCallbacks;
- (id)initWithExternalDeviceListenerEndpoint:(id)arg1;
- (_Bool)wantsNowPlayingNotifications;
- (void)setWantsNowPlayingNotifications:(_Bool)arg1;
- (_Bool)wantsVolumeNotifications;
- (void)setWantsVolumeNotifications:(_Bool)arg1;
- (_Bool)wantsOutputDeviceNotifications;
- (void)setWantsOutputDeviceNotifications:(_Bool)arg1;
- (_Bool)isUsingSystemPairing;
- (id)customOrigin;
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setVolumeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;

@end
