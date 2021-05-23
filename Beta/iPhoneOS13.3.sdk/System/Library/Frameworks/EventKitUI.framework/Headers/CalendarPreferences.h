/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class CalPreferences, NSArray, NSDate, NSNumber, NSString;

@interface CalendarPreferences : NSObject

{
    CalPreferences *_preferences;
    _Bool _drawDebugViewColors;
}

@property (nonatomic) _Bool showWeekNumbers;
@property (nonatomic) _Bool weekViewStartsOnToday;
@property (nonatomic) _Bool showListView;
@property (nonatomic) _Bool showMonthDividedListView;
@property (nonatomic) _Bool viewedTimeZoneAutomatic;
@property (nonatomic) _Bool requestSyncOnApplicationLaunch;
@property (nonatomic) _Bool drawDebugViewColors;
@property (nonatomic) _Bool immediateAlarmCreation;
@property (nonatomic) _Bool showEventsInPhoneMonthView;
@property (nonatomic) _Bool showExperimentalUI;
@property (nonatomic) _Bool showDetailedListView;
@property (nonatomic) _Bool disableContinuity;
@property (nonatomic) _Bool swipeToDeleteEnabled;
@property (nonatomic) _Bool largeListViewDisclosingEventDetails;
@property (nonatomic) _Bool showWindowDebugButton;
@property (nonatomic, getter=isShortResumeToTodayTimeout) _Bool shortResumeToTodayTimeout;
@property (nonatomic) _Bool hideInlineDayViewInEventDetails;
@property (nonatomic) _Bool disableTodayPushes;
@property (nonatomic) _Bool enableAvatars;
@property (nonatomic) _Bool enableMultiwindowAsserts;
@property (nonatomic) unsigned long long promptForCommentWhenDeclining;
@property (nonatomic) unsigned long long debugOccurrenceViewIconOverload;
@property (retain, nonatomic) NSArray *calendarUUIDsExcludedFromNotifications;
@property (retain, nonatomic) NSNumber *weekStart;
@property (retain, nonatomic) NSNumber *lastSuspendTime;
@property (retain, nonatomic) NSNumber *lastViewedDate;
@property (retain, nonatomic) NSNumber *lastViewMode;
@property (retain, nonatomic) NSNumber *dayViewHourScale;
@property (retain, nonatomic) NSNumber *weekViewHourScale;
@property (retain, nonatomic) NSString *sourceIdentifierForSelectedIdentity;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSString *overlayCalendarID;
@property (retain, nonatomic) NSDate *simulatedCurrentDate;
@property (retain, nonatomic) NSNumber *locationSearchResultLimit;
@property (nonatomic) _Bool eventAutocompleteEnabled;
@property (nonatomic) _Bool upNextSimpleModeEnabled;
@property (retain, nonatomic) NSString *upNextTitle;
@property (retain, nonatomic) NSDate *upNextStartTime;
@property (nonatomic) double upNextDuration;
@property (retain, nonatomic) NSString *upNextLocation;
@property (retain, nonatomic) NSString *upNextColor;
@property (nonatomic) _Bool highColorCarplayEnabled;
@property (retain, nonatomic) NSNumber *dayViewFirstVisibleSecond;
@property (nonatomic, readonly) NSArray *deselectedCalendarSyncHashes;

+ (id)sharedPreferences;

- (id)init;

@end
