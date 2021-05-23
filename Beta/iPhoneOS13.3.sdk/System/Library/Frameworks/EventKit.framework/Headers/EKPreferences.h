/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class CalPreferences, NSArray;

@interface EKPreferences : NSObject

{
    CalPreferences *_preferences;
}

@property (nonatomic) double travelEngineThrottlePeriod;
@property (nonatomic) _Bool refiringReminderAlarmsEnabled;
@property (nonatomic) _Bool useShortReminderSnoozeInterval;
@property (nonatomic) _Bool useShortReminderRefireInterval;
@property (nonatomic) _Bool alwaysSetArrivedAndSettledForReminders;
@property (nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property (readonly) _Bool bypassSplashScreen;
@property (nonatomic) _Bool showDeclinedEvents;
@property (nonatomic) _Bool alertInviteeDeclines;
@property (nonatomic, readonly) NSArray *deselectedCalendarIdentifiers;
@property (nonatomic, readonly) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic, readonly) NSArray *deselectedCalendarSyncIdentifiers;
@property (retain, nonatomic) NSArray *selectedCalendarIdentifiers;

+ (id)shared;

- (id)init;
- (void)_setDeselectedCalendars_iOS:(id)arg1;
- (void)_setDeselectedCalendarIdentifiers:(id)arg1;
- (void)_setDeselectedCalendarSyncIdentifiers:(id)arg1;
- (void)_setDeselectedCalendarSyncHashes:(id)arg1;
- (void)setDeselectedCalendars:(id)arg1;

@end
