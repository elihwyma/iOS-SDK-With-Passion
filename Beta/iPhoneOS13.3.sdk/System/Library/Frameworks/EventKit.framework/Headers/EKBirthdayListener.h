/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class CalLimitingQueue;

@protocol OS_dispatch_queue;

@interface EKBirthdayListener : NSObject

{
    CalLimitingQueue *_updateQueue;
    NSObject<OS_dispatch_queue> *_updateJobQueue;
    _Bool _needsReset;
}

+ (id)sharedListener;
+ (id)eventStoreProvider;

- (void)reset;
- (id)initSingleton;
- (id)eventStore;
- (void)_localeChanged;
- (void)contactsReset;
- (void)contactsInserted:(id)arg1 updated:(id)arg2 deleted:(id)arg3;
- (_Bool)areBirthdaysEnabled;
- (id)birthdayCalendarsInStore:(id)arg1;
- (void)resetAllBirthdaysInStore:(id)arg1;
- (void)disableBirthdayCalendarsInStore:(id)arg1;
- (void)checkForFailures;
- (void)insertEventWithContact:(id)arg1 forDateComponents:(id)arg2 intoCalendar:(id)arg3 inStore:(id)arg4;
- (id)birthdayCalendarsCreateIfNeeded:(_Bool)arg1 inStore:(id)arg2 originalIdentifier:(id)arg3 originalAlarms:(id)arg4 ignoreAlarms:(_Bool)arg5;
- (id)allContactsWithBirthdays;
- (void)_insertEventsForContact:(id)arg1 intoCalendar:(id)arg2 inStore:(id)arg3;
- (void)addBirthdayCalendars;
- (void)disableBirthdayCalendars;

@end
