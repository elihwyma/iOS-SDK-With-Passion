/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/_HMCameraControl.h>

@class HMCharacteristic;

__attribute__((visibility("hidden")))
@interface _HMCameraAudioControl : _HMCameraControl

{
    HMCharacteristic *_mute;
    HMCharacteristic *_volume;
}

@property (nonatomic, readonly) HMCharacteristic *mute;
@property (nonatomic, readonly) HMCharacteristic *volume;

- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;

@end
