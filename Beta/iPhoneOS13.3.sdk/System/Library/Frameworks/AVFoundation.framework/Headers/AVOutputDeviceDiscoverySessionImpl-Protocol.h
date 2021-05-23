/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/Swift-Protocol.h>

@class AVAudioSession, AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@protocol AVOutputDeviceDiscoverySessionImpl <Swift>

@property (weak) AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession;
@property (retain, nonatomic) AVAudioSession *targetAudioSession;
@property (nonatomic, readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (nonatomic, readonly) _Bool devicePresenceDetected;

- (unsigned short)outputDeviceDiscoverySessionDidChangeDiscoveryMode: /* Error: Ran out of types for this method. */;

@end
