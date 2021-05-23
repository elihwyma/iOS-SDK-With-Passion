/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputContext, AVOutputContextCommunicationChannel, AVOutputDevice, AVWeakReference, NSArray, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVFigEndpointPickerOutputContextImpl : NSObject

{
    AVOutputContext *_parentContext;
    NSObject<OS_dispatch_queue> *_pickerQueue;
    struct OpaqueFigEndpointPicker *_endpointPicker;
    unsigned long long _featureForCurrentPicker;
    struct __CFString *_contextUUID;
    _Bool _isSystemPicker;
    AVWeakReference *_weakReference;
}

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
+ (struct OpaqueFigEndpointPicker *)copySystemVideoPicker;

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
- (void)setOutputDevices:(id)arg1;
- (void)_removeFigEndpointPickerNotifications;
- (void)_addFigEndpointPickerNotifications;
- (void)_handlePickerServerConnectionDiedNotification;
- (id)initWithContextUUID:(id)arg1;
- (id)initWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (id)endpointPickerUUID;

@end
