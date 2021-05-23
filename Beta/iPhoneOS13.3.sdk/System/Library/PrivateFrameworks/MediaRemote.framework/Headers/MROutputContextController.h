/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MROutputContextDataSource.h>

@class MRAVOutputContext, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MROutputContextController : MROutputContextDataSource

{
    MRAVOutputContext *_outputContext;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    _Bool _localVolumeInitialized;
    _Bool _localVolumeControlCapabilitiesInitialized;
    NSMutableDictionary *_outputDeviceVolume;
    NSObject<OS_dispatch_queue> *_serialQueue;
    float _localVolume;
    unsigned int _localVolumeControlCapabilities;
}

@property (nonatomic) float localVolume;
@property (nonatomic) unsigned int localVolumeControlCapabilities;
@property (nonatomic, readonly) NSString *localDeviceUID;

+ (id)sharedOutputContextController;

- (void)dealloc;
- (id)description;
- (id)uniqueIdentifier;
- (void)_registerNotifications;
- (float)volume;
- (id)outputDevices;
- (id)initWithOutputContext:(id)arg1;
- (id)setVolume:(float)arg1 outputDeviceUID:(id)arg2;
- (float)volumeForOutputDeviceUID:(id)arg1;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)arg1;
- (unsigned int)volumeControlCapabilities;
- (void)_inititalizeVolume;
- (id)_onSerialQueue_localOutputDevice;
- (_Bool)_onSerialQueue_isLocalOutputDevice:(id)arg1;
- (void)_onSerialQueue_reevaluateMasterVolume;
- (void)_onSerialQueue_reevaluateMasterVolumeControlCapabilities;
- (float)_onSerialQueue_calculateMasterVolume;
- (unsigned int)_onSerialQueue_calculateMasterVolumeCapabilities;
- (void)_handleLocalDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceAddedNotification:(id)arg1;
- (void)_handleOutputDeviceRemovedNotification:(id)arg1;

@end
