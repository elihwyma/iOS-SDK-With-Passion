/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKFrozenReminderObject.h>

__attribute__((visibility("hidden")))
@interface EKFrozenReminderReminder : EKFrozenReminderObject

+ (Class)meltedClass;

- (id)calendar;
- (id)timeZone;
- (id)attachments;
- (id)UUID;
- (id)URL;
- (id)title;
- (id)uniqueIdentifier;
- (unsigned long long)priority;
- (id)uniqueID;
- (id)action;
- (id)creationDate;
- (id)clientLocation;
- (id)appLink;
- (id)lastModifiedDate;
- (id)organizer;
- (id)originalItem;
- (id)notes;
- (id)startDateComponents;
- (id)calendarItemIdentifier;
- (id)alarms;
- (id)attendees;
- (_Bool)hasAttendees;
- (id)calendarItemExternalIdentifier;
- (_Bool)hasRecurrenceRules;
- (id)selfAttendee;
- (id)structuredLocation;
- (id)travelStartLocation;
- (id)structuredLocationWithoutPrediction;
- (id)recurrenceRules;
- (id)detachedItems;
- (id)completionDate;
- (id)_reminder;
- (id)dueDateComponents;
- (id)remObjectID;
- (id)initNewReminderInStore:(id)arg1;
- (_Bool)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;
- (id)_copyToNewList:(id)arg1 error:(id *)arg2;
- (_Bool)_applyChanges:(id)arg1 error:(id *)arg2;
- (id)ekExceptionDates;
- (_Bool)hasNotes;
- (void)_fixAlarmUUIDsForClone:(id)arg1 from:(id)arg2;
- (_Bool)defaultAlarmRemoved;

@end
