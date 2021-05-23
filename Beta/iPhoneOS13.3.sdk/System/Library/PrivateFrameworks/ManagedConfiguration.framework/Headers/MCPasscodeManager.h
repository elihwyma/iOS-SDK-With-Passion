/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCPasscodeManager : NSObject

+ (id)sharedManager;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1;
+ (id)localizedDescriptionOfDefaultNewPasscodePolicyFromRestrictions:(id)arg1;
+ (int)unlockScreenTypeForRestrictions:(id)arg1;
+ (_Bool)isDeviceUnlocked;
+ (int)defaultNewPasscodeEntrySimplePasscodeType;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 outSimplePasscodeType:(int *)arg2;
+ (int)unlockScreenTypeForRestrictions:(id)arg1 outSimplePasscodeType:(int *)arg2;
+ (id)_localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1 shouldBeDefault:(_Bool)arg2;
+ (_Bool)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(_Bool)arg3 outError:(id *)arg4;
+ (id)characteristicsDictionaryFromPasscode:(id)arg1;
+ (_Bool)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id *)arg3;
+ (id)deviceLockedError;
+ (id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3 customIterations:(unsigned int)arg4;
+ (id)generateSalt;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1;

- (id)passcodeExpiryDateOutError:(id *)arg1;
- (_Bool)unlockDeviceWithPasscode:(id)arg1 outError:(id *)arg2;
- (_Bool)isDeviceLocked;
- (_Bool)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id *)arg2;
- (void)lockDeviceImmediately:(_Bool)arg1;
- (_Bool)isPasscodeSet;
- (_Bool)passcode:(id)arg1 compliesWithPolicyCheckHistory:(_Bool)arg2 outError:(id *)arg3;
- (void)passcodeExpiryDateCompletionBlock:(CDUnknownBlockType)arg1;
- (int)currentUnlockScreenType;
- (int)currentUnlockSimplePasscodeType;
- (int)newPasscodeEntryScreenType;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)arg1;
- (int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)arg1;
- (int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)arg1;
- (void)lockDevice;
- (_Bool)isPasscodeCompliantWithNamedPolicy:(id)arg1 outError:(id *)arg2;
- (id)_wrongPasscodeError;
- (id)_privatePasscodeDict;
- (id)_publicPasscodeDict;
- (int)_newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)arg1 shouldBeMinimum:(_Bool)arg2;
- (_Bool)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id *)arg3;
- (id)_passcodeCharacteristics;
- (id)localizedDescriptionOfPasscodePolicy;
- (id)localizedDescriptionOfDefaultNewPasscodePolicy;
- (_Bool)isCurrentPasscodeCompliantOutError:(id *)arg1;

@end
