/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NPSDomainAccessor, NSDictionary, NSMutableDictionary, TLAccessQueue;

@interface TLVibrationManager : NSObject

{
    TLAccessQueue *_accessQueue;
    unsigned long long _specialBehaviors;
    NSMutableDictionary *_cachedSystemVibrationIdentifiers;
    NSMutableDictionary *_cachedSystemVibrationCompleteSubdirectories;
    NSDictionary *_cachedUserGeneratedVibrationPatterns;
    NSDictionary *_synchronizedVibrationPatternFromToneIdentifierMapping;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
    _Bool _needsRefresh;
    _Bool _allowsAutoRefresh;
}

@property (nonatomic, readonly) _Bool needsRefresh;
@property (nonatomic) _Bool allowsAutoRefresh;
@property (nonatomic, readonly) _Bool shouldVibrateForCurrentRingerSwitchState;
@property (nonatomic, readonly) _Bool shouldVibrateOnRing;
@property (nonatomic, readonly) _Bool shouldVibrateOnSilent;

+ (id)sharedVibrationManager;
+ (void)_handleVibrationPreferencesDidChangeNotificationForPreferencesKinds:(unsigned long long)arg1 atInitiativeOfVibrationManager:(id)arg2;
+ (void)_handleVibrateOnRingOrSilentDidChangeNotification;

- (id)init;
- (void)dealloc;
- (_Bool)refresh;
- (_Bool)vibrationWithIdentifierIsValid:(id)arg1;
- (id)nameOfVibrationWithIdentifier:(id)arg1;
- (void)_setCurrentVibrationWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1;
- (id)defaultVibrationIdentifierForAlertType:(long long)arg1;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (void)_performBlockInAccessQueue:(CDUnknownBlockType)arg1;
- (id)_newServiceConnection;
- (id)_initWithSpecialBehaviors:(unsigned long long)arg1;
- (_Bool)_isUnitTestingModeEnabled;
- (id)_userGeneratedVibrationPatterns;
- (id)currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_systemWideVibrationPatternPreferenceKeyForAlertType:(long long)arg1;
- (id)_defaultVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3;
- (id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_defaultPreferablyNonSilentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3;
- (id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 allowsNoneDefaultToAnyActualVibrationSubstitution:(_Bool)arg4;
- (id)_sanitizeVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3 correspondingToneIdentifier:(id)arg4 useDefaultVibrationAsFallback:(_Bool)arg5 allowsNoneDefaultToAnyActualVibrationSubstitution:(_Bool)arg6 didFallback:(_Bool *)arg7;
- (id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3;
- (void)_didSetVibrationPreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3;
- (id)currentVibrationIdentifierForAlertType:(long long)arg1;
- (id)patternForVibrationWithIdentifier:(id)arg1 repeating:(_Bool)arg2;
- (id)defaultVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (_Bool)_areSynchronizedVibrationsAllowedForAlertType:(long long)arg1;
- (id)_synchronizedVibrationIdentifierForToneIdentifier:(id)arg1;
- (id)_patternForSystemVibrationWithIdentifier:(id)arg1 shouldLogAssetPath:(_Bool)arg2;
- (id)_systemVibrationIdentifiersForSubdirectory:(id)arg1;
- (id)noneVibrationPattern;
- (id)_completeSystemVibrationsSubdirectoryForSubdirectory:(id)arg1;
- (id)_localizedNameForVibrationWithIdentifier:(id)arg1;
- (id)patternForVibrationWithIdentifier:(id)arg1;
- (id)_nameOfVibrationWithIdentifier:(id)arg1;
- (id)_retrieveUserGeneratedVibrationPatternsUsingService;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (_Bool)_setUserGeneratedVibrationPatternsUsingService:(id)arg1 error:(id *)arg2;
- (void)_didChangeUserGeneratedVibrationPatterns;
- (_Bool)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id *)arg2;
- (_Bool)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id *)arg1;
- (_Bool)_booleanPreferenceForKey:(struct __CFString *)arg1 defaultValue:(_Bool)arg2;
- (unsigned long long)_storedSystemVibrationDataMigrationVersion;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2;
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 didFindPersistedWatchAlertPolicy:(_Bool *)arg3;
- (id)_currentVibrationWatchAlertPolicyPreferenceKeyForAlertType:(long long)arg1 topic:(id)arg2;
- (void)_setCurrentVibrationWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (id)currentVibrationNameForAlertType:(long long)arg1;
- (id)currentVibrationPatternForAlertType:(long long)arg1;
- (id)defaultVibrationNameForAlertType:(long long)arg1;
- (id)defaultVibrationPatternForAlertType:(long long)arg1;
- (_Bool)hasSpecificDefaultVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)noneVibrationName;
- (id)allUserSelectableSystemVibrationIdentifiers;
- (id)allUserGeneratedVibrationIdentifiers;
- (_Bool)_vibrationIsSettableForAlertType:(long long)arg1;
- (id)_sanitizeVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3 correspondingToneIdentifier:(id)arg4 didFallbackToCurrentVibrationIdentifier:(_Bool *)arg5;
- (id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (_Bool)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id *)arg2;
- (unsigned long long)_numberOfUserGeneratedVibrations;
- (_Bool)_removeAllUserGeneratedVibrationsWithError:(id *)arg1;
- (_Bool)_migrateLegacySettings;
- (id)currentVibrationIdentifierForAlertType:(long long)arg1 accountIdentifier:(id)arg2;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1 accountIdentifier:(id)arg2;
- (void)_setCurrentVibrationWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;

@end
