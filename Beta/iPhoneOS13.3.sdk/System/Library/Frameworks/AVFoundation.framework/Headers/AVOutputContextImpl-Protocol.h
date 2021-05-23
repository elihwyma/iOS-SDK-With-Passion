/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/Swift-Protocol.h>

@class AVOutputContext, AVOutputContextCommunicationChannel, AVOutputDevice, NSArray, NSString;

@protocol AVOutputContextImpl <Swift>

@property (weak) AVOutputContext *parentOutputContext;
@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSString *outputContextType;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;
@property (copy, nonatomic, readonly) NSString *associatedAudioDeviceID;
@property (readonly) _Bool supportsMultipleOutputDevices;
@property (readonly) _Bool supportsMultipleBluetoothOutputDevices;
@property (readonly) NSArray *outputDevices;
@property (readonly) _Bool providesControlForAllVolumeFeatures;
@property (readonly) float volume;
@property (readonly) _Bool canSetVolume;
@property (nonatomic, readonly) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;

+ (unsigned short)sharedAudioPresentationOutputContext;
+ (unsigned short)platformDependentScreenOrVideoContext;
+ (unsigned short)auxiliaryOutputContext;
+ (unsigned short)sharedSystemAudioContext;
+ (unsigned short)sharedSystemScreenContext;
+ (unsigned short)iTunesAudioContext;
+ (unsigned short)defaultSharedOutputContextImpl;
+ (unsigned short)outputContextImplForControllingOutputDeviceGroupWithID:options: /* Error: Ran out of types for this method. */;
+ (unsigned short)outputContextImplForID:type: /* Error: Ran out of types for this method. */;
+ (unsigned short)resetOutputDeviceForAllOutputContexts;
+ (unsigned short)outputContextExistsWithRemoteOutputDevice;

- (unsigned short)setVolume: /* Error: Ran out of types for this method. */;
- (unsigned short)outputContextDidChangeApplicationProcessID: /* Error: Ran out of types for this method. */;
- (unsigned short)setOutputDevice:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setOutputDevices:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addOutputDevice:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeOutputDevice:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)pausePlaybackOnAllOutputDevicesWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)muteAllOutputDevicesWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)openCommunicationChannelWithOptions:error: /* Error: Ran out of types for this method. */;

@end
