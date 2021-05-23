/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFAccessibilityState, AFAudioPlaybackRequest, AFClientConfiguration, NSString;

@interface _AFClientConfigurationMutation : NSObject

{
    AFClientConfiguration *_baseModel;
    AFAccessibilityState *_accessibilityState;
    long long _deviceRingerSwitchState;
    _Bool _isDeviceInSetupFlow;
    _Bool _isDeviceInCarDNDMode;
    _Bool _isDeviceInStarkMode;
    float _outputVolume;
    AFAudioPlaybackRequest *_tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest *_twoShotAudioPlaybackRequest;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasAccessibilityState:1;
        unsigned int hasDeviceRingerSwitchState:1;
        unsigned int hasIsDeviceInSetupFlow:1;
        unsigned int hasIsDeviceInCarDNDMode:1;
        unsigned int hasIsDeviceInStarkMode:1;
        unsigned int hasOutputVolume:1;
        unsigned int hasTapToSiriAudioPlaybackRequest:1;
        unsigned int hasTwoShotAudioPlaybackRequest:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setOutputVolume:(float)arg1;
- (void)setAccessibilityState:(id)arg1;
- (void)setDeviceRingerSwitchState:(long long)arg1;
- (void)setIsDeviceInStarkMode:(_Bool)arg1;
- (void)setIsDeviceInCarDNDMode:(_Bool)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setIsDeviceInSetupFlow:(_Bool)arg1;
- (void)setTapToSiriAudioPlaybackRequest:(id)arg1;
- (void)setTwoShotAudioPlaybackRequest:(id)arg1;

@end
