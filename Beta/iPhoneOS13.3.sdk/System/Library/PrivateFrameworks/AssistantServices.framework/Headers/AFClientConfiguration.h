/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFAccessibilityState, AFAudioPlaybackRequest;

@interface AFClientConfiguration : NSObject <Swift>

{
    _Bool _isDeviceInSetupFlow;
    _Bool _isDeviceInCarDNDMode;
    _Bool _isDeviceInStarkMode;
    float _outputVolume;
    AFAccessibilityState *_accessibilityState;
    long long _deviceRingerSwitchState;
    AFAudioPlaybackRequest *_tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest *_twoShotAudioPlaybackRequest;
}

@property (copy, nonatomic, readonly) AFAccessibilityState *accessibilityState;
@property (nonatomic, readonly) long long deviceRingerSwitchState;
@property (nonatomic, readonly) _Bool isDeviceInSetupFlow;
@property (nonatomic, readonly) _Bool isDeviceInCarDNDMode;
@property (nonatomic, readonly) _Bool isDeviceInStarkMode;
@property (nonatomic, readonly) float outputVolume;
@property (copy, nonatomic, readonly) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest;
@property (copy, nonatomic, readonly) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithAccessibilityState:(id)arg1 deviceRingerSwitchState:(long long)arg2 isDeviceInSetupFlow:(_Bool)arg3 isDeviceInCarDNDMode:(_Bool)arg4 isDeviceInStarkMode:(_Bool)arg5 outputVolume:(float)arg6 tapToSiriAudioPlaybackRequest:(id)arg7 twoShotAudioPlaybackRequest:(id)arg8;

@end
