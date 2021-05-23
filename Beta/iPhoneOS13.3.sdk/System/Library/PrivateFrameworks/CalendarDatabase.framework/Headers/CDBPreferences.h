/*
 Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

#import <NSObject.h>

@class CalPreferences;

@interface CDBPreferences : NSObject

{
    CalPreferences *_preferences;
}

@property (nonatomic, getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:) _Bool enableTravelAdvisoriesForAutomaticBehavior;
@property (readonly) _Bool has_enableTravelAdvisoriesForAutomaticBehavior;
@property (nonatomic, getter=get_suggestEventLocations, setter=set_suggestEventLocations:) _Bool suggestEventLocations;
@property (readonly) _Bool has_suggestEventLocations;
@property (nonatomic, getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:) _Bool sqlProfileLoggingEnabled;
@property (readonly) _Bool has_sqlProfileLoggingEnabled;
@property (nonatomic, getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:) _Bool suggestedLocationsTestMode;
@property (readonly) _Bool has_suggestedLocationsTestMode;
@property (nonatomic, getter=get_kCalPreferredDaysToSyncKey, setter=set_kCalPreferredDaysToSyncKey:) long long kCalPreferredDaysToSyncKey;
@property (readonly) _Bool has_kCalPreferredDaysToSyncKey;
@property (nonatomic, getter=get_kCalRemindersPreferredDaysToSyncKey, setter=set_kCalRemindersPreferredDaysToSyncKey:) long long kCalRemindersPreferredDaysToSyncKey;
@property (readonly) _Bool has_kCalRemindersPreferredDaysToSyncKey;
@property (nonatomic, getter=get_LastConfirmedSplashScreenVersionViewed, setter=set_LastConfirmedSplashScreenVersionViewed:) long long LastConfirmedSplashScreenVersionViewed;
@property (readonly) _Bool has_LastConfirmedSplashScreenVersionViewed;

+ (id)shared;

- (id)init;
- (unsigned long long)_version;
- (void)_setVersion:(unsigned long long)arg1;
- (_Bool)needsMigration;
- (void)migrateIfNeededWithOptions:(unsigned long long)arg1;

@end
