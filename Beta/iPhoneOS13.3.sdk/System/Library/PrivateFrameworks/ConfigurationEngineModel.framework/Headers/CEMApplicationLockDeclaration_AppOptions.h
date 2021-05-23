/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMApplicationLockDeclaration_AppOptions : CEMPayloadBase

{
    NSNumber *_payloadDisableTouch;
    NSNumber *_payloadDisableDeviceRotation;
    NSNumber *_payloadDisableVolumeButtons;
    NSNumber *_payloadDisableRingerSwitch;
    NSNumber *_payloadDisableSleepWakeButton;
    NSNumber *_payloadDisableAutoLock;
    NSNumber *_payloadEnableVoiceOver;
    NSNumber *_payloadEnableZoom;
    NSNumber *_payloadEnableInvertColors;
    NSNumber *_payloadEnableAssistiveTouch;
    NSNumber *_payloadEnableSpeakSelection;
    NSNumber *_payloadEnableMonoAudio;
}

@property (copy, nonatomic) NSNumber *payloadDisableTouch;
@property (copy, nonatomic) NSNumber *payloadDisableDeviceRotation;
@property (copy, nonatomic) NSNumber *payloadDisableVolumeButtons;
@property (copy, nonatomic) NSNumber *payloadDisableRingerSwitch;
@property (copy, nonatomic) NSNumber *payloadDisableSleepWakeButton;
@property (copy, nonatomic) NSNumber *payloadDisableAutoLock;
@property (copy, nonatomic) NSNumber *payloadEnableVoiceOver;
@property (copy, nonatomic) NSNumber *payloadEnableZoom;
@property (copy, nonatomic) NSNumber *payloadEnableInvertColors;
@property (copy, nonatomic) NSNumber *payloadEnableAssistiveTouch;
@property (copy, nonatomic) NSNumber *payloadEnableSpeakSelection;
@property (copy, nonatomic) NSNumber *payloadEnableMonoAudio;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithDisableTouch:(id)arg1 withDisableDeviceRotation:(id)arg2 withDisableVolumeButtons:(id)arg3 withDisableRingerSwitch:(id)arg4 withDisableSleepWakeButton:(id)arg5 withDisableAutoLock:(id)arg6 withEnableVoiceOver:(id)arg7 withEnableZoom:(id)arg8 withEnableInvertColors:(id)arg9 withEnableAssistiveTouch:(id)arg10 withEnableSpeakSelection:(id)arg11 withEnableMonoAudio:(id)arg12;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
