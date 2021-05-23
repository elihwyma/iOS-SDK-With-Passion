/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSObject.h>

@interface DABehaviorOptions : NSObject

+ (void)initialize;
+ (_Bool)isAppleInternalInstall;
+ (void)_startListeningForNotifications;
+ (_Bool)CFNetworkLogging;
+ (_Bool)compressRequests;
+ (_Bool)isCustomerInstall;
+ (id)DAManagedDefaultForKey:(id)arg1;
+ (_Bool)_shouldForceCookies:(_Bool *)arg1;
+ (_Bool)useContactsFramework;
+ (id)_daManagedDefaultsPath;
+ (id)DAManagedDefaults;
+ (_Bool)setDAManagedDefaults:(id)arg1;
+ (_Bool)ignoreSupportedCommands;
+ (int)refreshThrottleTime;
+ (_Bool)ignoreBadLDAPCerts;
+ (double)defaultEASTaskTimeoutOutWasFound:(_Bool *)arg1;
+ (double)defaultDAVProbeTimeout;
+ (id)whitelistedEASProtocols;
+ (_Bool)cookiesEnabled;
+ (_Bool)calDAVRemindersForAll;
+ (_Bool)promptForAllCerts;
+ (_Bool)enablePromptForServerTrust;
+ (_Bool)useThunderhillBetaServers;
+ (_Bool)perfLogging;
+ (id)APSEnv;
+ (_Bool)allIMAPServersSupportNotesSearch;
+ (_Bool)completelyIgnoreNotes;
+ (_Bool)writeOutBrokenCancelationRequests;
+ (_Bool)sendMeCardEverywhere;
+ (_Bool)isInHoldingPattern;
+ (_Bool)babysitterEnabled;
+ (_Bool)alwaysUseCalendarHomeSync;
+ (_Bool)useContactsFramerwork;
+ (_Bool)earlyPingEnabled;
+ (_Bool)customAutoDV2UserAgentEnabled;
+ (id)holidayCalendarURL;
+ (double)holidayCalendarRefreshInterval;
+ (int)numForgivable401s;
+ (_Bool)isEASParsingLogEnabled;
+ (_Bool)orphanCheckEnabled;
+ (_Bool)addDAManagedDefaults:(id)arg1;
+ (void)removeDAManagedDefaults:(id)arg1;

@end
