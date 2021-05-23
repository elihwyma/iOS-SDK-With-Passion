/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MROutputContextDataSource : NSObject

{
    float _volume;
    unsigned int _volumeControlCapabilities;
    NSArray *_outputDevices;
    NSString *_uniqueIdentifier;
}

@property (nonatomic, readonly) float volume;
@property (nonatomic, readonly) _Bool isAirPlaying;
@property (nonatomic, readonly) unsigned int volumeControlCapabilities;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (id)description;
- (id)outputDeviceForUID:(id)arg1;
- (void)notifyOutputDeviceAdded:(id)arg1;
- (void)notifyOutputDeviceRemoved:(id)arg1;
- (void)notifyVolumeDidChange:(float)arg1 outputDevice:(id)arg2;
- (void)notifyVolumeCapabilitiesDidChange:(unsigned int)arg1 outputDevice:(id)arg2;

@end
