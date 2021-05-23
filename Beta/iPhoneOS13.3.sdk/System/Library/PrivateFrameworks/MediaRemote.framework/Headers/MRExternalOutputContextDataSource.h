/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MROutputContextDataSource.h>

@class NSMutableArray, NSString;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource

{
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
}

- (id)uniqueIdentifier;
- (float)volume;
- (id)initWithUniqueIdentifier:(id)arg1;
- (id)outputDevices;
- (unsigned int)volumeControlCapabilities;
- (void)_reevaluateMasterVolumeControlCapabilities;
- (void)_reevaluateMasterVolume;
- (void)removeOutputDevices:(id)arg1;
- (float)_calculateMasterVolume;
- (unsigned int)_calculateMasterVolumeCapabilities;
- (void)updateOutputDevices:(id)arg1;
- (void)removeAllOutputDevices;
- (void)updateVolume:(float)arg1 outputDeviceUID:(id)arg2;
- (void)updateVolumeControlCapabilities:(unsigned int)arg1 outputDeviceUID:(id)arg2;

@end
