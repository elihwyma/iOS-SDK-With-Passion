/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/Swift-Protocol.h>

@protocol MCXPCProtocol <Swift>

- (unsigned short)checkInWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)checkCarrierProfileAndForceReinstallation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)allowedOpenInAppBundleIDs:originatingAppBundleID:originatingIsManaged:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)allowedImportFromAppBundleIDs:importingAppBundleID:importingIsManaged:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setAutoCorrectionAllowed:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setSmartPunctuationAllowed:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setPredictiveKeyboardAllowed:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setContinuousPathKeyboardAllowed:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setKeyboardShortcutsAllowed:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setSpellCheckAllowed:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setAllowedURLStrings:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addAllowedURLString:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addBookmark:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)waitForMigrationIncludingPostRestoreMigration:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyDeviceUnlockedAndPasscodeRequiredWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyDeviceUnlockedWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultAppBundleIDForCommunicationServiceType:forAccountWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isProfileInstalledWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)installProfileData:interactive:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)queueProfileDataForInstallation:originalFileName:originatingBundleID:transitionToUI:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)popProfileDataFromHeadOfInstallationQueueWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)peekProfileDataFromPurgatoryForDeviceType:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateProfileIdentifier:interactive:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProfileWithIdentifier:installationType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeUninstalledProfileWithIdentifier:installationType:targetDeviceType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProtectedProfileWithIdentifier:installationType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)applyRestrictionDictionary:appsAndOptions:clientType:clientUUID:localizedClientDescription:localizedWarningMessage:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)changePasscode:oldPasscode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPasscodeWithEscrowKeybagData:secret:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)resetPasscodeMetadataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeOrphanedClientRestrictionsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)managedSystemConfigurationServiceIDsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)managedWiFiNetworkNamesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)migrateWithContext:passcodeWasSetInBackup:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)migrateCleanupMigratorWithContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setParametersForSettingsByType:configurationUUID:toSystem:user:passcode:credentialSet:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeBoolSetting:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeValueSetting:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)openSensitiveURL:unlock:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)storeCertificateData:forIPCUIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)installProvisioningProfileData:managingProfileIdentifer:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProvisioningProfileWithUUID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyStartComplianceTimer:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyHaveSeenComplianceMessageWithLastLockDate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)recomputeUserComplianceWarningWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)recomputePerClientUserComplianceWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAllSettingsToDefaultsIsUserInitiated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserInfo:forClientUUID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)managedAppIDsWithFlags:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeExpiredProfilesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)storeProfileData:configurationSource:purpose:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)profileDataStoredForPurpose:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)markStoredProfileForPurposeAsInstalled:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)rereadManagedAppAttributesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)cloudConfigurationMachineInfoDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)cloudConfigurationStoreDetails:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)createActivationLockBypassCodeWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)storeActivationRecord:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserBookmarks:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)stashUserBookmarks:withLabel:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)unstashUserBookmarksFromLabel:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeWebContentFilterUserBlacklistedURLString:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)stashBlacklistURLStringsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)unstashBlacklistURLStringsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)stashWhitelistURLStringsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)unstashWhitelistURLStringsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:hostAppBundleID:accountIsManaged:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)hasMailAccountsWithFilteringEnabled:sourceAccountManagement:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setupAssistantDidFinishCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)validateAppBundleIDs:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)recomputeProfileRestrictionsWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)shutDownWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)showFeaturePromptForSetting:configurationUUID:promptOptions:promptIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelFeaturePromptWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)mayShareToMessagesForOriginatingAppBundleID:originatingAccountIsManaged:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)mayShareToAirDropForOriginatingAppBundleID:originatingAccountIsManaged:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isPasscodeCompliantWithNamedPolicy:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)createMDMUnlockTokenIfNeededWithPasscode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)managingOrganizationInformationWithCompletion: /* Error: Ran out of types for this method. */;

@end
