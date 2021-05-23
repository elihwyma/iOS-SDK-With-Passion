/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVContainer.h>

@class ICSDuration, NSSet, NSString, NSTimeZone, NSURL;

@interface CalDAVContainer : CoreDAVContainer

{
    _Bool _subscribedStripAlarms;
    _Bool _subscribedStripTodos;
    _Bool _subscribedStripAttachments;
    _Bool _isScheduleTransparent;
    _Bool _canBePublished;
    _Bool _canBeShared;
    _Bool _isMarkedUndeletable;
    _Bool _isMarkedImmutableSharees;
    _Bool _autoprovisioned;
    _Bool _overrideSupportsFreebusy;
    NSString *_calendarDescription;
    NSString *_ctag;
    NSString *_calendarColor;
    NSString *_symbolicColorName;
    NSString *_calendarOrder;
    NSString *_defaultTimedAlarms;
    NSString *_defaultAllDayAlarms;
    NSSet *_supportedCalendarComponentSet;
    ICSDuration *_subscribedRefreshRate;
    NSURL *_publishURL;
    NSURL *_prePublishURL;
    NSTimeZone *_timeZone;
    NSURL *_source;
    NSSet *_freeBusySet;
    NSURL *_scheduleDefaultCalendarURL;
    NSSet *_sharees;
    NSString *_supportedCalendarComponentSets;
    NSString *_locationCode;
    NSString *_languageCode;
    NSString *_alarms;
    long long _maxAttendees;
}

@property (nonatomic) _Bool overrideSupportsFreebusy;
@property (nonatomic, readonly) _Bool isCalendar;
@property (nonatomic, readonly) _Bool isSubscribed;
@property (nonatomic, readonly) _Bool isScheduleInbox;
@property (nonatomic, readonly) _Bool isScheduleOutbox;
@property (nonatomic, readonly) _Bool isNotification;
@property (nonatomic, readonly) _Bool isSharedOwner;
@property (nonatomic, readonly) _Bool isShared;
@property (nonatomic, readonly) _Bool isEventContainer;
@property (nonatomic, readonly) _Bool isTaskContainer;
@property (nonatomic, readonly) _Bool isJournalContainer;
@property (nonatomic, readonly) _Bool isPollContainer;
@property (nonatomic, readonly) _Bool supportsFreebusy;
@property (nonatomic, readonly) _Bool isFamilyCalendar;
@property (retain, nonatomic) NSString *calendarDescription;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) NSString *calendarColor;
@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSString *calendarOrder;
@property (retain, nonatomic) NSString *defaultTimedAlarms;
@property (retain, nonatomic) NSString *defaultAllDayAlarms;
@property (retain, nonatomic) NSSet *supportedCalendarComponentSet;
@property (nonatomic) _Bool subscribedStripAlarms;
@property (nonatomic) _Bool subscribedStripTodos;
@property (nonatomic) _Bool subscribedStripAttachments;
@property (retain, nonatomic) ICSDuration *subscribedRefreshRate;
@property (retain, nonatomic) NSURL *publishURL;
@property (retain, nonatomic) NSURL *prePublishURL;
@property (nonatomic) _Bool isScheduleTransparent;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) _Bool canBePublished;
@property (nonatomic) _Bool canBeShared;
@property (nonatomic) _Bool isMarkedUndeletable;
@property (nonatomic) _Bool isMarkedImmutableSharees;
@property (retain, nonatomic) NSURL *source;
@property (retain, nonatomic) NSSet *freeBusySet;
@property (retain, nonatomic) NSURL *scheduleDefaultCalendarURL;
@property (retain, nonatomic) NSSet *sharees;
@property (retain, nonatomic) NSString *supportedCalendarComponentSets;
@property (retain, nonatomic) NSString *locationCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) _Bool autoprovisioned;
@property (retain, nonatomic) NSString *alarms;
@property (nonatomic) long long maxAttendees;

+ (id)copyPropertyMappingsForParser;

- (id)description;
- (void)applyParsedProperties:(id)arg1;
- (void)_setTimeZoneFromProperties:(id)arg1 onCalendar:(id)arg2;
- (void)postProcessWithResponseHeaders:(id)arg1;
- (_Bool)_isComponentSupportedForString:(id)arg1;

@end
