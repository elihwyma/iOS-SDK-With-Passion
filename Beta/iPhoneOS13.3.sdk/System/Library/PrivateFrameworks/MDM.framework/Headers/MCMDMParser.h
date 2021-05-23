/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <ManagedConfiguration/MCTunnelParser.h>

@class CATOperationQueue, MCMDMServer, NSString;

@interface MCMDMParser : MCTunnelParser

{
    _Bool _isChaperoned;
    _Bool _isMDM;
    MCMDMServer *_server;
    NSString *_managingProfileIdentifier;
    CATOperationQueue *_operationQueue;
}

@property (retain, nonatomic) NSString *managingProfileIdentifier;
@property (retain, nonatomic) CATOperationQueue *operationQueue;
@property (weak, nonatomic) MCMDMServer *server;
@property (nonatomic, readonly) _Bool isChaperoned;
@property (nonatomic) _Bool isMDM;

+ (id)malformedRequestErrorResult;
+ (id)_MCKeysToDMFKeys;
+ (id)_DMFKeysToMCKeys;
+ (id)_stringForAppState:(unsigned long long)arg1;
+ (_Bool)_dmfAction:(unsigned long long *)arg1 fromMDMActionString:(id)arg2;
+ (unsigned long long)_shouldUseDelayWithRequest:(id)arg1;
+ (id)_errorFromDMFSoftwareUpdateError:(id)arg1;
+ (id)_resolvedInstallActionStringForAction:(unsigned long long)arg1;
+ (id)_statusFromError:(id)arg1 action:(unsigned long long)arg2;
+ (id)errorChainFromError:(id)arg1;
+ (id)_updateDictionaryFromUpdate:(id)arg1;
+ (id)_errorWithDomain:(id)arg1 code:(long long)arg2 descriptionKey:(id)arg3 underlyingError:(id)arg4 type:(id)arg5;
+ (_Bool)_useDelayFlagAllowed;

- (id)_originator;
- (id)_profileList:(id)arg1 filterFlags:(int)arg2;
- (id)_installProfile:(id)arg1 accessRights:(int)arg2 installationType:(long long)arg3;
- (id)_removeProfileWithIdentifier:(id)arg1 forInstalledProfilesWithFilterFlags:(int)arg2;
- (id)_restrictions:(id)arg1 withProfileFilterFlags:(int)arg2;
- (id)_allCommands;
- (id)_profileList:(id)arg1;
- (id)_installProfile:(id)arg1 accessRights:(int)arg2;
- (id)_removeProfile:(id)arg1;
- (id)_restrictions:(id)arg1;
- (id)_allowedDeviceQueriesForAccessRights:(int)arg1;
- (void)_aggregateLogCommandForRequest:(id)arg1;
- (id)_invalidRequestTypeError:(id)arg1;
- (id)_unavailableCommandsWhileLocked;
- (id)_unavailableCommandsBeforeFirstUnlock;
- (id)_unavailableCommandsWhileInAppWhitelistModes;
- (id)_invalidRequestTypeInSingleAppModeError:(id)arg1;
- (id)unavailableCommandsDuringBuddy;
- (id)unavailableCommandsWhileInMDMLostMode;
- (id)_invalidRequestTypeInMDMLostModeError:(id)arg1;
- (id)_notNetworkTetheredError;
- (id)_deviceInformationWithRequest:(id)arg1 allowedQueries:(id)arg2;
- (id)_deviceInformationWithRequest:(id)arg1 accessRights:(int)arg2;
- (void)_processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_notAuthorizedError;
- (id)_deviceLock:(id)arg1;
- (id)_restartDevice:(id)arg1;
- (id)_shutDownDevice:(id)arg1;
- (void)_enableLostMode:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_playLostModeSound:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_disableLostMode:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_deviceLocation:(id)arg1;
- (id)_clearPasscode:(id)arg1;
- (id)_requestUnlockToken:(id)arg1;
- (id)_eraseDevice:(id)arg1;
- (id)_certificateList:(id)arg1;
- (id)_provisioningProfileList:(id)arg1;
- (id)_installProvisioningProfile:(id)arg1;
- (id)_removeProvisioningProfile:(id)arg1;
- (id)_installedApplicationList:(id)arg1;
- (id)_securityInfo:(id)arg1;
- (id)_settings:(id)arg1 accessRights:(int)arg2;
- (void)_installApplication:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_validateApplications:(id)arg1;
- (id)_applyRedemptionCode:(id)arg1 assertion:(id)arg2;
- (id)_managedApplicationList:(id)arg1;
- (id)_managedApplicationConfiguration:(id)arg1;
- (id)_managedApplicationAttributes:(id)arg1;
- (id)_managedApplicationFeedback:(id)arg1;
- (id)_removeApplication:(id)arg1;
- (void)_requestMirroringRequest:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_stopMirroringRequest:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_inviteToProgramRequest:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_activationLockBypassCodeRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_clearActivationLockBypassCodeRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_clearRestrictionsPasswordRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_installMedia:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_managedMediaList:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_removeMedia:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_deviceConfigured:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_scheduleOSUpdate:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_scheduleOSUpdateScan:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_availableOSUpdates:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_statusOfOSUpdates:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_userList:(id)arg1;
- (id)_logOutUser:(id)arg1;
- (id)_deleteUser:(id)arg1;
- (id)_triggerDiagnostics:(id)arg1;
- (id)_refreshCellularPlans:(id)arg1;
- (id)_deviceNotInMDMLostModeError;
- (id)_serviceSubscriptionPropertiesWithDMFKeysMappedToMCKeys:(id)arg1;
- (id)_serviceSubscriptionsWithDMFKeysMappedToMCKeys:(id)arg1;
- (_Bool)_isProvisioningProfileUUIDManaged:(id)arg1;
- (id)_handleFetchAppsRequest:(id)arg1 managedOnly:(_Bool)arg2 deleteFeedback:(_Bool)arg3 advanceTransientStates:(_Bool)arg4 propertyKeys:(id)arg5 block:(CDUnknownBlockType)arg6;
- (unsigned long long)_profileInstallationStyleForRequest:(id)arg1;
- (id)_removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;
- (_Bool)_isProfileIdentifierManaged:(id)arg1;
- (id)_allSettingsItems;
- (_Bool)_isManagedAppFromManagementInformation:(id)arg1;
- (_Bool)_isManagedApp:(id)arg1;
- (id)_notManagedErrorAppID:(id)arg1;
- (id)_handleSetAppManagementInfoRequest:(id)arg1 outAdditionalResponseKeys:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)_malformedRequestError;
- (id)_performSetDeviceName:(id)arg1;
- (id)_performSetWallpaper:(id)arg1;
- (id)_performSetDataRoaming:(id)arg1;
- (id)_performSetVoiceRoaming:(id)arg1;
- (id)_performSetBluetooth:(id)arg1;
- (id)_performSetPersonalHotspot:(id)arg1;
- (id)_performSetAppConfig:(id)arg1 outAdditionalResponseKeys:(id *)arg2;
- (id)_performSetAppAttributes:(id)arg1 outAdditionalResponseKeys:(id *)arg2;
- (id)_performSetMaximumResidentUsers:(id)arg1;
- (id)_performSetDiagnosticSubmission:(id)arg1;
- (id)_performSetAppAnalytics:(id)arg1;
- (id)_performSetGracePeriod:(id)arg1;
- (id)_performSetOrganizationInfo:(id)arg1;
- (id)_performSetMDMOptions:(id)arg1;
- (_Bool)_validateSetting:(id)arg1 accessRights:(int)arg2 outError:(id *)arg3;
- (id)_performSetting:(id)arg1 outAdditionalResponseKeys:(id *)arg2 outRestartAppleTVApp:(_Bool *)arg3;
- (void)_performInstallApplicationRequestWithManifestURL:(id)arg1 iTunesStoreIDObj:(id)arg2 bundleId:(id)arg3 flagsObj:(id)arg4 attributes:(id)arg5 configuration:(id)arg6 manageChangeStr:(id)arg7 purchaseMethodValue:(int)arg8 personaID:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (id)_appAlreadyInstalledErrorWithiTunesStoreID:(id)arg1;
- (id)_appAlreadyInstalledErrorWithBundleID:(id)arg1;
- (id)_appAlreadyQueuedErrorWithiTunesStoreID:(id)arg1;
- (id)_appAlreadyQueuedErrorWithBundleID:(id)arg1;
- (id)_licenseNotFoundErrorWithiTunesStoreID:(id)arg1 underlyingError:(id)arg2;
- (id)_licenseNotFoundErrorWithBundleID:(id)arg1 underlyingError:(id)arg2;
- (id)_cannotValidateAppIDErrorUnderlyingError:(id)arg1;
- (id)_invalidManifestErrorWithURL:(id)arg1 underlyingError:(id)arg2;
- (_Bool)_identifiersIsStringArray:(id)arg1;
- (id)_stringForBookState:(unsigned long long)arg1;
- (_Bool)_rejectSoftwareUpdateBecauseUserLoggedInCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_dmfScheduleOSUpdate:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_rejectSoftwareUpdateBecauseOfMalformedRequestCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_softwareUpdatesNotPermittedWithLoggedInUserError;
- (id)initWithManagingProfileIdentifier:(id)arg1;
- (void)processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_appStoreDisabledError;
- (void)_mdmScheduleOSUpdate:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_responseForMalformedUpdateRequest;

@end
