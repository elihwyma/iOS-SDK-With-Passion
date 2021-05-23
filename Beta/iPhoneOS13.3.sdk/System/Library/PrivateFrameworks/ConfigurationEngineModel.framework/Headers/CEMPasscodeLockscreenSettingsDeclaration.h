/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMPasscodeLockscreenSettingsDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAllowVoiceDialing;
    NSNumber *_payloadAllowAssistantWhileLocked;
    NSNumber *_payloadAllowLockScreenTodayView;
    NSNumber *_payloadAllowPassbookWhileLocked;
    NSNumber *_payloadAllowLockScreenNotificationsView;
    NSNumber *_payloadAllowLockScreenControlCenter;
    NSNumber *_payloadAllowLockScreenWiFiModification;
}

@property (copy, nonatomic) NSNumber *payloadAllowVoiceDialing;
@property (copy, nonatomic) NSNumber *payloadAllowAssistantWhileLocked;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenTodayView;
@property (copy, nonatomic) NSNumber *payloadAllowPassbookWhileLocked;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenNotificationsView;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenControlCenter;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenWiFiModification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAllowVoiceDialing:(id)arg2 withAllowAssistantWhileLocked:(id)arg3 withAllowLockScreenTodayView:(id)arg4 withAllowPassbookWhileLocked:(id)arg5 withAllowLockScreenNotificationsView:(id)arg6 withAllowLockScreenControlCenter:(id)arg7 withAllowLockScreenWiFiModification:(id)arg8;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
