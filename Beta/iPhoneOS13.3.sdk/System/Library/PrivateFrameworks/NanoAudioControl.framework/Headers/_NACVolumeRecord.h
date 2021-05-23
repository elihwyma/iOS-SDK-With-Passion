/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _NACVolumeRecord : NSObject

{
    NSMutableSet *_observers;
    _Bool _volumeControlAvailable;
    _Bool _volumeWarningEnabled;
    _Bool _muted;
    float _volumeValue;
    float _EUVolumeLimit;
    long long _volumeWarningState;
}

@property (nonatomic) float volumeValue;
@property (nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property (nonatomic, getter=isVolumeWarningEnabled) _Bool volumeWarningEnabled;
@property (nonatomic) long long volumeWarningState;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic) float EUVolumeLimit;
@property (nonatomic, readonly) NSMutableSet *observers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
