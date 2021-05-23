/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSURL, NSUndoManager, NSUserDefaults, VSDevice;

@interface VSPreferences : NSObject

{
    NSUndoManager *_undoManager;
    NSUserDefaults *_userDefaults;
    NSUserDefaults *_globalUserDefaults;
    VSDevice *_device;
}

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSUserDefaults *globalUserDefaults;
@property (retain, nonatomic) VSDevice *device;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (copy, nonatomic, readonly) NSURL *overridingAppBootURL;
@property (nonatomic, readonly) _Bool shouldDisableRequestTimeouts;
@property (nonatomic, readonly) _Bool shouldAlwaysAllowRemoteInspection;
@property (nonatomic, readonly) _Bool shouldSkipSetup;
@property (nonatomic) long long cachedAvailabilityStatus;
@property (nonatomic) long long cachedDeveloperProviderStatus;
@property (nonatomic) long long cachedStoreProviderStatus;
@property (nonatomic, readonly) _Bool hasSentWelcomeMessage;

- (id)metricUserID;
- (id)metricUserIDLastGenerated;
- (void)setMetricUserID:(id)arg1;
- (void)_updateValue:(id)arg1 forKey:(id)arg2;
- (void)_updateShouldSkipSetupWithNumber:(id)arg1;
- (void)noteShouldSkipSetup;
- (void)removeSkipSetupPreset;
- (void)noteDidSendWelcomeMessage;
- (_Bool)hasChosenDesiredApp;
- (void)noteDesiredApp:(id)arg1;
- (_Bool)isInSTBMode;
- (_Bool)shouldIgnoreExtendedValidation;
- (_Bool)allowInsecureAuthContext;
- (void)noteIsInSTBMode:(_Bool)arg1;
- (_Bool)setTopBoxInfoIsSetTopBoxOverride;
- (id)setTopBoxInfoProviderIdOverride;
- (id)setTopBoxInfoProviderDisplayNameOverride;
- (id)setTopBoxInfoAppAdamIdOverride;
- (id)setTopBoxInfoBundleIdentifierOverride;
- (void)setIgnoreSetTopBoxProfile:(_Bool)arg1;
- (_Bool)ignoreSetTopBoxProfile;

@end
