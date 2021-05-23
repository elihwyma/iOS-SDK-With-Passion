/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRSupportedProtocolMessages, NSString, _MRDeviceInfoMessageProtobuf, _MROriginProtobuf;

__attribute__((visibility("hidden")))
@interface MRExternalDevice : NSObject

{
    _Bool _valid;
    _Bool _usingSystemPairing;
    unsigned int _connectionState;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly) _MROriginProtobuf *customOrigin;
@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, readonly) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic) _Bool wantsNowPlayingNotifications;
@property (nonatomic) _Bool wantsNowPlayingArtworkNotifications;
@property (nonatomic) _Bool wantsVolumeNotifications;
@property (nonatomic) _Bool wantsOutputDeviceNotifications;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) unsigned int connectionState;
@property (nonatomic, readonly, getter=isPaired) _Bool paired;
@property (nonatomic, getter=isUsingSystemPairing) _Bool usingSystemPairing;

- (id)_init;
- (void)disconnect:(id)arg1;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connectWithOptions:(unsigned int)arg1;
- (void)unpair;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
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
- (void)sendClientUpdatesConfigMessage;
- (id)errorForCurrentState;
- (id)currentClientUpdatesConfigMessage;

@end
