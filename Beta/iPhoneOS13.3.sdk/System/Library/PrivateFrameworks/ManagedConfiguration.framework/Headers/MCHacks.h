/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCHacks : NSObject

+ (id)sharedHacks;

- (id)quantizedGracePeriodInSeconds:(id)arg1;
- (id)quantizedAutoLockInSeconds:(id)arg1;
- (_Bool)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg1;
- (_Bool)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)arg1;
- (_Bool)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)arg1;
- (_Bool)_applyHeuristicsToRestrictions:(id)arg1 forProfile:(id)arg2 outError:(id *)arg3;
- (id)permittedAutoLockNumbers;
- (id)_permittedGracePeriodNumbers;
- (id)_selectLargestNumberFromSortedArray:(id)arg1 equalToOrLessThanNumber:(id)arg2;
- (_Bool)isJapanSKU;
- (id)profileTrustEvaluators;
- (void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4;
- (void)_applyImpliedSettingsToSettingsDictionary:(id)arg1 currentSettings:(id)arg2 restrictions:(id)arg3;
- (void)_applyHeuristicsToEffectiveUserSettings:(id)arg1;
- (void)_applyMandatorySettingsToEffectiveUserSettings:(id)arg1;
- (void)_applyHeuristicsToGranfatheredRestrictionPayloadKeys:(id)arg1;
- (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)arg1;
- (id)_deviceSpecificDefaultSettings;
- (void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)arg1;
- (void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)arg1;
- (_Bool)isGreenTea;
- (_Bool)isSetupBuddyDone;

@end
