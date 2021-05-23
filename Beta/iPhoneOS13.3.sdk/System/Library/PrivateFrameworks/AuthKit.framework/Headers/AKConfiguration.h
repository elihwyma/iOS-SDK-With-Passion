/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface AKConfiguration : NSObject

{
    NSMutableDictionary *_cachedSettings;
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_settingsQueue;
}

@property (nonatomic) long long shouldDisablePETs;
@property (nonatomic) long long shouldFakeAuthSuccess;
@property (nonatomic) long long shouldDisablePiggybacking;
@property (nonatomic) long long shouldSuppressHSA2Suggestions;
@property (nonatomic) long long shouldAddHSA2CreateHeader;
@property (nonatomic) long long shouldAllowPhoneNumberAccounts;
@property (nonatomic) long long shouldAllowExperimentalMode;
@property (nonatomic) long long shouldAllowDemoMode;
@property (nonatomic) long long shouldAllowTestApplication;
@property (nonatomic) long long shouldEnableTestAccountMode;
@property (nonatomic) long long shouldSuppressModalSheetsInMacBuddy;
@property (nonatomic) long long shouldAlwaysShowWelcome;
@property (nonatomic) long long shouldAutocycleAppsInTiburon;
@property (nonatomic) long long shouldAutocycleAppsInWebTakeover;
@property (nonatomic) unsigned long long lastKnownIDMSEnvironment;

- (id)init;
- (void)dealloc;
- (id)configurationValueForKey:(id)arg1;
- (void)setConfigurationValue:(id)arg1 forKey:(id)arg2;

@end
