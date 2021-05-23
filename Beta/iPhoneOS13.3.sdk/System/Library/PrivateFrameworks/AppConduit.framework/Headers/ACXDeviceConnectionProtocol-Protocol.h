/*
 Image: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
 */

#import <AppConduit/Swift-Protocol.h>

@protocol ACXDeviceConnectionProtocol <Swift>

- (unsigned short)installAllApplications;
- (unsigned short)cancelPendingInstallations;
- (unsigned short)fetchApplicationWithContainingApplicationBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchWatchAppBundleIDForCompanionAppBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchInstalledApplicationsForDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchInstalledComplicationsForDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)activeComplicationsForDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchInstalledCompatibleApplicationsForDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchInfoForApplicationWithBundleID:forDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)retryPendingAppInstallationsOnDeviceWithPairingID: /* Error: Ran out of types for this method. */;
- (unsigned short)installApplication:withProvisioningProfileInfo:forTestFlight:onDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)installApplicationAtURL:onDeviceWithPairingID:installOptions:size:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeApplication:fromDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getAlwaysInstallForDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)enableObservers;
- (unsigned short)disableObservers;
- (unsigned short)installProvisioningProfileWithData:onDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProvisioningProfileWithID:fromDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchProvisioningProfilesForDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchProvisioningProfilesForApplicationWithBundleID:forDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updatePreferencesForApplicationWithIdentifier:preferences:writingToPreferencesLocation:forDeviceWithPairingID:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setUpdatePendingForCompanionApp:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelUpdatePendingForCompanionApp:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLocallyAvailableWatchAppBundleIDsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchInstalledWatchAppBundleIDsForDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLocallyAvailableWatchAppWithBundleID:forDeviceWithPairingID:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchInstalledWatchAppWithBundleID:forDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:forDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)applicationIsInstalledOnDeviceWithPairingID:withBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)applicationIsInstalledOnDeviceWithPairingID:withCompanionBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)applicationIsInstalledOnAnyPairedDeviceWithBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)applicationIsInstalledOnAnyPairedDeviceWithCompanionBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchApplicationDatabaseSyncInformationForDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLocalizedValuesFromAllDevicesForInfoPlistKeys:forAppWithBundleID:fetchingFirstMatchingLocalizationInList:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchInstallableSystemAppBundleIDsForDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchInstallableSystemAppWithBundleID:forDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)systemAppIsInstallableOnDeviceWithPairingID:withBundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)installRequestFailedForApp:forDeviceWithPairingID:failureReason:wasUserInitiated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)acknowledgeTestFlightInstallBegunForApp:forDeviceWithPairingID:completion: /* Error: Ran out of types for this method. */;

@end
