/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSTimer;

@interface TIPreferencesController : NSObject

{
    NSMutableDictionary *_configuredDomains;
    NSMutableDictionary *_configuredPreferences;
    NSMutableDictionary *_cachedMCRestrictedValue;
    NSTimer *_synchronizePreferencesTimer;
    _Bool isInternalInstall;
    _Bool _inhibitGlobalNotification;
    _Bool _ignoreNextSyncNotification;
}

@property (nonatomic) _Bool isInternalInstall;
@property (nonatomic) _Bool ignoreNextSyncNotification;
@property (nonatomic) _Bool inhibitGlobalNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *inputModeSelectionSequence;
@property (nonatomic) _Bool predictionEnabled;
@property (nonatomic) _Bool automaticMinimizationEnabled;
@property (nonatomic) _Bool keyboardShownByTouch;
@property (nonatomic) struct CGPoint keyboardPosition;
@property (nonatomic) struct CGPoint floatingKeyboardPosition;
@property (nonatomic) unsigned long long floatingKeyboardDockedEdge;

+ (id)sharedPreferencesController;
+ (void)registerPreferredLanguagesForInputModes:(id)arg1 replacingInputModes:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (id)valueForKey:(int)arg1;
- (_Bool)boolForKey:(int)arg1;
- (void)didTriggerOneTimeAction:(id)arg1;
- (_Bool)oneTimeActionCompleted:(id)arg1;
- (_Bool)boolForPreferenceKey:(id)arg1;
- (void)_configureKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3;
- (id)valueForPreferenceKey:(id)arg1;
- (void)_configureDomain:(id)arg1 notification:(id)arg2;
- (void)updateLastUsedInputMode:(id)arg1;
- (void)updateEnabledDictationLanguages:(id)arg1;
- (_Bool)allEnabledInputModesAreValid;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)_configurePreferences;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (void)updateInputModes:(id)arg1;
- (void)updateLastUsedLayout:(id)arg1;
- (void)updateLastUsedKeyboards:(id)arg1;
- (void)updateEnableProKeyboard:(_Bool)arg1;
- (void)updateKeyboardHandBias:(id)arg1;
- (void)updateDidPerformFirstReachableKeyboardInteraction;
- (void)updateLastUsedDictationLanguages:(id)arg1;
- (_Bool)isPreferenceKeyLockedDown:(id)arg1;
- (void)updateKeyboardIsSplit:(_Bool)arg1 locked:(_Bool)arg2;
- (void)updateKeyboardIsFloating:(_Bool)arg1;
- (void)preferencesChangedCallback:(id)arg1;
- (void)managedKeyboardSettingDidChange:(id)arg1;
- (void)_configureDomains;
- (void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3;
- (void)performWithWriteability:(_Bool)arg1 operations:(CDUnknownBlockType)arg2;
- (void)clearSynchronizePreferencesTimer;
- (void)synchronizeDomainIfNeedsGet:(id)arg1;
- (int)MCValueForManagedPreferenceKey:(id)arg1;
- (void)setValue:(id)arg1 forManagedPreferenceKey:(id)arg2;
- (_Bool)isKeyLockedDown:(int)arg1;
- (_Bool)_isOneTimeAction:(id)arg1;
- (void)didSeeHardwareKeyboard:(id)arg1;
- (void)didUnseeHardwareKeyboard:(id)arg1;

@end
