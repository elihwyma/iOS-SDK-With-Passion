/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSPerSitePreferenceManager.h>

@class NSMutableDictionary, NSObject, NSString, NSURL, WBSCoalescedAsynchronousWriter, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@protocol OS_dispatch_queue;

@interface WBSUserMediaPermissionController : WBSPerSitePreferenceManager

{
    NSMutableDictionary *_cachedSettings;
    WBSCoalescedAsynchronousWriter *_saveUserMediaPermissionsWriter;
    NSObject<OS_dispatch_queue> *_loadPermissionsSynchronizationQueue;
    struct atomic<LoadingStatus> _savedStateLoadStatus;
    NSURL *_userMediaPermissionsFileURL;
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSPerSitePreference *_cameraMediaCapturePreference;
    WBSPerSitePreference *_microphoneMediaCapturePreference;
}

@property (nonatomic, readonly) WBSPerSitePreference *cameraMediaCapturePreference;
@property (nonatomic, readonly) WBSPerSitePreference *microphoneMediaCapturePreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

+ (id)sharedController;
+ (id)localizedStringForPerSitePreferenceValue:(id)arg1;

- (id)init;
- (id)_init;
- (id)_dictionaryRepresentation;
- (id)preferences;
- (void)savePendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)permissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (void)setPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4;
- (void)savePendingChangesBeforeTermination;
- (void)checkUserMediaPermissionForURL:(id)arg1 mainFrameURL:(id)arg2 frameIdentifier:(unsigned long long)arg3 decisionHandler:(CDUnknownBlockType)arg4;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (id)valuesForPreference:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)reloadPreferences;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserMediaPermissionsFileURL:(id)arg1 perSitePreferencesStore:(id)arg2;
- (void)_loadSavedPermissionsIfNecessary;
- (void)_loadSavedPermissions;
- (unsigned long long)_defaultUserMediaPermission;
- (void)_cachedSettingsDidChange;
- (id)_standardizedURLForDomain:(id)arg1;
- (unsigned long long)_permissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (_Bool)_captureDevicesAreAllDefaultsGivenPermission:(unsigned long long)arg1;
- (id)_policyForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (void)_invalidateCachedSettingsForOriginHash:(id)arg1;
- (unsigned long long)userMediaPermissionForDefaultPreferenceValues;
- (void)_waitUntilPermissionsHaveLoaded;
- (id)saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3;
- (long long)_mediaCaptureTypeForPreference:(id)arg1;
- (unsigned long long)_permissionMaskForMediaCaptureType:(long long)arg1;
- (void)_invalidateAllPermissionsForDomain:(id)arg1;
- (long long)_mediaCaptureSettingForMediaCaptureType:(long long)arg1 userMediaPermission:(unsigned long long)arg2;
- (unsigned long long)_userMediaPermissionForMediaCaptureType:(long long)arg1 mediaCaptureSetting:(long long)arg2;
- (void)removePolicyEntries:(id)arg1;
- (void)performDelayedLaunchOperations;
- (void)setPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forPolicyEntry:(id)arg3;
- (void)removeAllOriginsAddedAfterDate:(id)arg1;
- (void)resetOriginPermissions;
- (void)didCommitLoadForFrameWithIdentifier:(unsigned long long)arg1;
- (id)sortedPolicies;
- (_Bool)hasPolicyEntryForTopLevelOrigin:(id)arg1;
- (unsigned long long)permissionForDomain:(id)arg1;
- (_Bool)_isPreferenceValid:(id)arg1;

@end
