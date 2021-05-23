/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputContext, AVOutputContextCommunicationChannel, AVOutputDevice, AVWeakReference, NSArray, NSDictionary, NSString;

@protocol AVFigRoutingContextCommunicationChannelManager, AVFigRoutingContextOutputDeviceTranslator, OS_dispatch_queue;

@interface AVFigRoutingContextOutputContextImpl : NSObject

{
    CDUnknownBlockType _routingContextCreator;
    id <AVFigRoutingContextOutputDeviceTranslator> _deviceTranslator;
    struct OpaqueFigVolumeControllerState *_volumeController;
    CDUnknownBlockType _commChannelManagerCreator;
    struct OpaqueFigRoutingContext *_routingContext;
    id <AVFigRoutingContextCommunicationChannelManager> _commChannelManager;
    AVWeakReference *_weakObserver;
    AVOutputContext *_parentContext;
    _Bool _usesRouteConfigUpdatedNotification;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    NSDictionary *_destinationChangesForRouteChangeIDs;
}

@property (nonatomic, readonly) struct OpaqueFigRoutingContext *figRoutingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (id)sharedAudioPresentationOutputContext;
+ (id)platformDependentScreenOrVideoContext;
+ (id)auxiliaryOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)iTunesAudioContext;
+ (id)defaultSharedOutputContextImpl;
+ (id)outputContextImplForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2;
+ (id)outputContextImplForID:(id)arg1 type:(id)arg2;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (_Bool)outputContextExistsWithRemoteOutputDevice;
+ (id)routingContextFactory;
+ (struct OpaqueFigRoutingContext *)copySystemVideoRoutingContext;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)outputContextDidChangeApplicationProcessID:(id)arg1;
- (void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)muteAllOutputDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)openCommunicationChannelWithOptions:(id)arg1 error:(id *)arg2;
- (void)_routeChangeStartedWithID:(id)arg1;
- (id)initWithFigRoutingContextCreator:(CDUnknownBlockType)arg1;
- (id)initWithFigRoutingContext:(struct OpaqueFigRoutingContext *)arg1 routingContextReplacementBlock:(CDUnknownBlockType)arg2;
- (id)initWithRoutingContextUUID:(id)arg1 type:(id)arg2;
- (id)initWithFigRoutingContext:(struct OpaqueFigRoutingContext *)arg1 routingContextReplacementBlock:(CDUnknownBlockType)arg2 outputDeviceTranslator:(id)arg3 volumeController:(struct OpaqueFigVolumeControllerState *)arg4 communicationChannelManagerCreator:(CDUnknownBlockType)arg5;
- (id)routingContextUUID;
- (void)_routeConfigUpdateStartedWithID:(struct __CFString *)arg1;
- (void)_routeConfigUpdateEndedWithID:(struct __CFString *)arg1 reason:(struct __CFString *)arg2;
- (const struct __CFDictionary *)_createSelectRouteOptionsForSetOutputDeviceOptions:(id)arg1;
- (void)_sendCommand:(struct __CFString *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_routeChangeEndedWithID:(id)arg1 reason:(struct __CFString *)arg2;
- (void)_currentRouteChanged;
- (void)_groupConfigurationChanged;
- (void)_routeConfigUpdatedWithID:(struct __CFString *)arg1 reason:(struct __CFString *)arg2 initiator:(const struct __CFString *)arg3;
- (void)_systemPickerVideoRouteChanged;
- (void)_canUseForRoutingContextDidChangeForRoutingContextWIthID:(struct __CFString *)arg1;
- (void)_masterVolumeDidChangeForRoutingContextWithID:(struct __CFString *)arg1;
- (void)_canSetMasterVolumeDidChangeForRoutingContextWithID:(struct __CFString *)arg1;
- (void)_remoteControlChannelAvailabilityChanged;
- (void)communicationChannelManager:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
- (void)communicationChannelManager:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)_serverConnectionDied;

@end
