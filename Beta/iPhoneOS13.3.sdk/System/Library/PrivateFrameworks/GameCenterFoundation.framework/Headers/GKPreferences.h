/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@protocol GKPreferencesDelegate;

@interface GKPreferences : NSObject

{
    _Bool _shouldSynchronizeOnNextRead;
    _Bool _webKitInspectElementEnabled;
    NSDictionary *_overrideValues;
}

@property (nonatomic) id <GKPreferencesDelegate> preferencesDelegate;
@property (nonatomic, readonly, getter=isStoreDemoModeEnabled) _Bool storeDemoModeEnabled;
@property (nonatomic, readonly, getter=isAddingFriendsRestricted) _Bool addingFriendsRestricted;
@property (nonatomic, readonly, getter=isMultiplayerGamingRestricted) _Bool multiplayerGamingRestricted;
@property (nonatomic, readonly, getter=isAppInstallationRestricted) _Bool appInstallationRestricted;
@property (nonatomic, readonly, getter=isAccountModificationRestricted) _Bool accountModificationRestricted;
@property (nonatomic, readonly, getter=isGameCenterRestricted) _Bool gameCenterRestricted;
@property (nonatomic) _Bool _shouldSynchronizeOnNextRead;
@property (copy) NSDictionary *overrideValues;
@property (nonatomic) long long environment;
@property (retain, nonatomic) NSString *storeBagURL;
@property (nonatomic) unsigned long long mescalSetupRetries;
@property (nonatomic) unsigned long long loginDisableThreshold;
@property (nonatomic) _Bool allowUnsignedBag;
@property (nonatomic) _Bool useTestProtocols;
@property (nonatomic) _Bool forceDefaultNickname;
@property (nonatomic) double terminationInterval;
@property (nonatomic) double garbageCollectionInterval;
@property (nonatomic) double minimumCacheTTL;
@property (nonatomic) double cacheTTLOverride;
@property (nonatomic) double operationTimeout;
@property (nonatomic) double operationRetryDelay;
@property (nonatomic) unsigned long long operationRetryCount;
@property (nonatomic) double debugRequestTimeout;
@property (nonatomic, getter=isNotificationCenterEnabled) _Bool notificationCenterEnabled;
@property (nonatomic) _Bool notificationBadgesEnabled;
@property (nonatomic) _Bool notificationSoundsEnabled;
@property (nonatomic) _Bool notificationAlertsEnabled;
@property (nonatomic) _Bool verboseLogging;
@property (nonatomic) unsigned int logFilter;
@property (nonatomic, getter=isComprehensiveLoggingEnabled) _Bool comprehensiveLoggingEnabled;
@property (copy, nonatomic) NSString *testRunID;
@property (nonatomic, getter=isClipGestureEnabled) _Bool clipGestureEnabled;
@property (nonatomic) _Bool forceRelay;
@property (nonatomic) _Bool preemptiveRelay;
@property (nonatomic) long long pushEnvironment;
@property (nonatomic) long long pipeliningSetting;
@property (nonatomic) _Bool restrictToAutomatch;
@property (nonatomic) unsigned long long recentNumberOfPlayers;
@property (nonatomic) unsigned long long maxPlayersP2P;
@property (nonatomic) unsigned long long maxPlayersHosted;
@property (nonatomic) unsigned long long maxPlayersTurnBased;
@property (nonatomic) unsigned long long maxGameStateSizeTurnBased;
@property (nonatomic) unsigned long long exchangeDataMaximumSize;
@property (nonatomic) unsigned long long exchangeMaxInitiatedExchangesPerPlayer;
@property (nonatomic, readonly) _Bool HTTPShouldUsePipelining;
@property (nonatomic, readonly) unsigned long long maxDefaultPlayersP2P;
@property (nonatomic, readonly) unsigned long long maxDefaultPlayersHosted;
@property (nonatomic, readonly) unsigned long long maxDefaultPlayersTurnBased;
@property (nonatomic, readonly) unsigned long long maxDefaultGameStateSizeTurnBased;
@property (nonatomic, readonly) unsigned long long exchangeDataDefaultMaximumSize;
@property (nonatomic, readonly) unsigned long long exchangeDefaultMaxInitiatedExchangesPerPlayer;
@property (nonatomic) _Bool useInternalHeader;
@property (nonatomic, getter=isWebKitInspectElementEnabled) _Bool webKitInspectElementEnabled;
@property (nonatomic) _Bool shouldAnnotateImageUsage;
@property (nonatomic) _Bool shouldTrackAtlasImageUsage;
@property (nonatomic) _Bool shouldUseTestIcons;
@property (nonatomic) _Bool shouldLinkPlayerToICloud;
@property (nonatomic) _Bool shouldLinkPlayerToTwitter;
@property (nonatomic) _Bool shouldLinkPlayerToFacebook;
@property (nonatomic, readonly) _Bool shouldDisallowInvitesFromStrangers;
@property (nonatomic) _Bool shouldAllowNearbyMultiplayer;
@property (nonatomic) _Bool shouldAddPlayerInfoToAddressBook;
@property (nonatomic) unsigned long long maxRecentPlayersCount;
@property (nonatomic) double maxRecentPlayersTime;
@property (nonatomic) _Bool tournamentsDebuggingEnabled;
@property (nonatomic) long long tournamentState;
@property (nonatomic) long long tournamentParticipantState;
@property (nonatomic) long long tournamentPlayers;
@property (nonatomic) long long tournamentReplays;
@property (nonatomic) long long tournamentDuration;
@property (retain, nonatomic) NSDate *tournamentStartDate;
@property (retain, nonatomic) NSDate *tournamentEndDate;
@property (nonatomic) long long tournamentMinPlayers;
@property (nonatomic) long long tournamentMaxPlayers;
@property (nonatomic) long long tournamentMaxReplays;
@property (nonatomic) long long tournamentAutoDuration;
@property (nonatomic) long long tournamentCustomMinPlayers;
@property (nonatomic) long long tournamentCustomMaxPlayers;
@property (nonatomic) long long tournamentCustomMaxReplays;
@property (nonatomic) long long tournamentCustomDuration;
@property (nonatomic) long long tournamentUIAppearanceStyle;
@property (nonatomic) long long tournamentCreationMethod;
@property (nonatomic) _Bool restrictToTournamentPlayers;
@property (nonatomic) long long tournamentServer;
@property (nonatomic) _Bool tournamentDemoModeEnabled;
@property (nonatomic) long long tournamentMaxSimulatedPlayers;
@property (nonatomic) long long tournamentMaxSimulatedFriends;

+ (id)shared;
+ (id)hostNameForEnvironment:(long long)arg1;
+ (id)displayNameForEnvironment:(long long)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)synchronize;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (_Bool)isInternalBuild;
- (void)setTimeInterval:(double)arg1 forKey:(struct __CFString *)arg2;
- (double)timeIntervalForKey:(struct __CFString *)arg1 defaultValue:(double)arg2;
- (long long)integerValueForKey:(struct __CFString *)arg1 defaultValue:(long long)arg2;
- (_Bool)booleanValueForKey:(struct __CFString *)arg1 defaultValue:(_Bool)arg2;
- (_Bool)booleanValueForKey:(struct __CFString *)arg1;
- (id)preferencesValueForKey:(id)arg1;
- (id)initWithoutUIKitNotifications;
- (void)applicationWillEnterBackground:(id)arg1;
- (id)initWithUIKitNotifications;
- (void)removeOverrideForKey:(id)arg1;
- (void)_didWriteKey:(struct __CFString *)arg1;
- (void)setIntegerValue:(long long)arg1 forKey:(struct __CFString *)arg2;
- (void)setBooleanValue:(_Bool)arg1 forKey:(struct __CFString *)arg2;
- (long long)unsignedIntegerValueForKey:(struct __CFString *)arg1 defaultValue:(long long)arg2;
- (void)setUnsignedIntegerValue:(long long)arg1 forKey:(struct __CFString *)arg2;
- (id)stringValueForKey:(struct __CFString *)arg1 defaultValue:(id)arg2;
- (void)setStringValue:(id)arg1 forKey:(struct __CFString *)arg2;
- (_Bool)restrictionEnabledForKey:(id)arg1;

@end
