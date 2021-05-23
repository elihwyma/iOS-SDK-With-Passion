/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputContextInternal, NSString;

@interface AVOutputContext : NSObject

{
    AVOutputContextInternal *_outputContext;
}

@property (nonatomic, readonly) struct OpaqueFigRoutingContext *figRoutingContext;
@property (nonatomic, readonly) NSString *deviceName;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)sharedAudioPresentationOutputContext;
+ (id)outputContext;
+ (id)outputContextForID:(id)arg1;
+ (Class)defaultOutputContextImplClass;
+ (id)auxiliaryOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)iTunesAudioContext;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (_Bool)outputContextExistsWithRemoteOutputDevice;
+ (id)defaultSharedOutputContext;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1;
+ (id)preferredOutputDevicesForAudioSession:(id)arg1;
+ (CDUnknownBlockType)defaultCommunicationChannelManagerCreator;
+ (CDUnknownBlockType)commChannelUUIDCommunicationChannelManagerCreator;
+ (id)outputContextWithFigRoutingContextCreator:(CDUnknownBlockType)arg1 outputDeviceTranslator:(id)arg2;
+ (id)outputContextWithFigRoutingContextCreator:(CDUnknownBlockType)arg1 volumeController:(struct OpaqueFigVolumeControllerState *)arg2;
+ (id)outputContextWithFigRoutingContextCreator:(CDUnknownBlockType)arg1 communicationChannelManagerCreator:(CDUnknownBlockType)arg2;
+ (id)outputContextWithFigRoutingContextCreator:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)contextID;
- (id)impl;
- (float)volume;
- (void)setVolume:(float)arg1;
- (id)ID;
- (_Bool)supportsMultipleOutputDevices;
- (id)outputDevices;
- (id)outputDevice;
- (_Bool)canSetVolume;
- (unsigned long long)outputDeviceFeatures;
- (id)communicationChannelDelegate;
- (id)initWithOutputContextImpl:(id)arg1;
- (id)outputContextType;
- (_Bool)getApplicationProcessID:(int *)arg1;
- (void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)supportsMultipleBluetoothOutputDevices;
- (void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)providesControlForAllVolumeFeatures;
- (void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)muteAllOutputDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)outgoingCommunicationChannel;
- (id)openCommunicationChannelWithOptions:(id)arg1 error:(id *)arg2;
- (void)outputContextImpl:(id)arg1 didChangeOutputDeviceWithInitiator:(id)arg2;
- (void)outputContextImpl:(id)arg1 didChangeOutputDevicesWithInitiator:(id)arg2;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)arg1;
- (int)applicationProcessID;
- (void)setApplicationProcessID:(int)arg1;
- (_Bool)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2;
- (void)setOutputDevice:(id)arg1 options:(id)arg2;
- (void)outputContextImpl:(id)arg1 didInitiateDestinationChange:(id)arg2;
- (void)setOutputDevices:(id)arg1;
- (void)addOutputDevice:(id)arg1;
- (void)removeOutputDevice:(id)arg1;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)arg1;
- (void)outputContextImplDidChangeVolume:(id)arg1;
- (void)outputContextImplDidChangeCanSetVolume:(id)arg1;
- (void)setCommunicationChannelDelegate:(id)arg1;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)arg1;
- (void)outputContextImpl:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
- (void)outputContextImpl:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)outputContextImpl:(id)arg1 didExpireWithReplacement:(id)arg2;

@end
