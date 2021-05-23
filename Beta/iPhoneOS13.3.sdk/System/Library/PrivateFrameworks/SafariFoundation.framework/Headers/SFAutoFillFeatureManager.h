/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFAutoFillFeatureManager : NSObject

{
    int _cachedAutoFillRestrictionValue;
    int _cachedPasswordAutoFillEffectiveValue;
}

@property (nonatomic) _Bool shouldAutoFillPasswordsFromKeychain;
@property (retain, nonatomic) NSString *preferredCredentialProviderForSaving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedFeatureManager;
+ (id)_syncManager;
+ (const struct __CFString *)autoFillPreferencesDomain;
+ (_Bool)defaultValueForPasswordAndCreditCardAutoFill;
+ (void)autoFillPreferencesDidChange;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (_Bool)shouldAutoFillPasswords;
- (void)_refreshCachedAutoFillRestrictionValues;

@end
