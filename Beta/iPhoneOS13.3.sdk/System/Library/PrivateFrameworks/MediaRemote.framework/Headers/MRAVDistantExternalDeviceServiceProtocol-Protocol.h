/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/Swift-Protocol.h>

@protocol MRAVDistantExternalDeviceServiceProtocol <Swift>

- (unsigned short)setNotifications: /* Error: Ran out of types for this method. */;
- (unsigned short)disconnect: /* Error: Ran out of types for this method. */;
- (unsigned short)setRegisteredCallbacks: /* Error: Ran out of types for this method. */;
- (unsigned short)getExternalDeviceMetadataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getCustomOriginDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getConnectionStateWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)connectWithOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)unpair;
- (unsigned short)outputDeviceVolume:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)setOutputDeviceVolume:forOutputDevice:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)outputDeviceVolumeControlCapabilities:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)modifyOutputContextOfType:addingDeviceUIDs:removingDeviceUIDs:settingDeviceUIDs:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendCustomData:withName: /* Error: Ran out of types for this method. */;
- (unsigned short)pingWithTimeout:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)sendButtonEventWithUsagePage:usage:down: /* Error: Ran out of types for this method. */;

@end
