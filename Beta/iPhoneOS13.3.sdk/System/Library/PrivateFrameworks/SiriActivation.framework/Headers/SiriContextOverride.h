/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SiriContextOverride : NSObject

{
    NSString *_currentSpokenLanguageCode;
    NSNumber *_unlockedSinceBoot;
    NSNumber *_deviceIsBlocked;
    NSNumber *_deviceIsPasscodeLocked;
    NSNumber *_pocketStateShouldPreventVoiceTrigger;
    NSNumber *_pad;
    NSNumber *_smartCoverClosed;
    NSNumber *_accessibilityShortcutEnabled;
    NSNumber *_carDNDActive;
    NSNumber *_connectedToCarPlay;
    NSNumber *_connectedToTrustedCarPlay;
    NSNumber *_siriIsEnabled;
    NSNumber *_siriIsRestricted;
    NSNumber *_siriIsSupported;
}

@property (retain, nonatomic) NSString *currentSpokenLanguageCode;
@property (retain, nonatomic) NSNumber *unlockedSinceBoot;
@property (retain, nonatomic) NSNumber *deviceIsBlocked;
@property (retain, nonatomic) NSNumber *deviceIsPasscodeLocked;
@property (retain, nonatomic) NSNumber *pocketStateShouldPreventVoiceTrigger;
@property (retain, nonatomic) NSNumber *pad;
@property (retain, nonatomic) NSNumber *smartCoverClosed;
@property (retain, nonatomic) NSNumber *accessibilityShortcutEnabled;
@property (retain, nonatomic) NSNumber *carDNDActive;
@property (retain, nonatomic) NSNumber *connectedToCarPlay;
@property (retain, nonatomic) NSNumber *connectedToTrustedCarPlay;
@property (retain, nonatomic) NSNumber *siriIsEnabled;
@property (retain, nonatomic) NSNumber *siriIsRestricted;
@property (retain, nonatomic) NSNumber *siriIsSupported;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)currentSpokenLanguageCodeForSystemState:(id)arg1;
- (_Bool)hasUnlockedSinceBootForSystemState:(id)arg1;
- (_Bool)deviceIsBlockedForSystemState:(id)arg1;
- (_Bool)deviceIsPasscodeLockedForSystemState:(id)arg1;
- (_Bool)pocketStateShouldPreventVoiceTriggerForSystemState:(id)arg1;
- (_Bool)isPadForSystemState:(id)arg1;
- (_Bool)smartCoverClosedForSystemState:(id)arg1;
- (_Bool)accessibilityShortcutEnabledForSystemState:(id)arg1;
- (_Bool)carDNDActiveForSystemState:(id)arg1;
- (_Bool)isConnectedToCarPlayForSystemState:(id)arg1;
- (_Bool)isConnectedToTrustedCarPlayForSystemState:(id)arg1;
- (_Bool)siriIsEnabledForSystemState:(id)arg1;
- (_Bool)siriIsRestrictedForSystemState:(id)arg1;
- (_Bool)siriIsSupportedForSystemState:(id)arg1;
- (void)overrideCurrentSpokenLanguageCode:(id)arg1;
- (void)overrideHasUnlockedSinceBoot:(_Bool)arg1;
- (void)overrideDeviceIsBlocked:(_Bool)arg1;
- (void)overrideDeviceIsPasscodeLocked:(_Bool)arg1;
- (void)overridePocketStateShouldPreventVoiceTrigger:(_Bool)arg1;
- (void)overrideIsPad:(_Bool)arg1;
- (void)overrideSmartCoverClosed:(_Bool)arg1;
- (void)overrideAccessibilityShortcutEnabled:(_Bool)arg1;
- (void)overrideCarDNDActive:(_Bool)arg1;
- (void)overrideConnectedToTrustedCarPlay:(_Bool)arg1;
- (void)overrideConnectedToCarPlay:(_Bool)arg1;
- (void)overrideSiriIsEnabled:(_Bool)arg1;
- (void)overrideSiriIsRestricted:(_Bool)arg1;
- (void)overrideSiriIsSupported:(_Bool)arg1;

@end
