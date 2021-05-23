/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/MobileCalDAVCalendar.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSTimeZone, NSURL;

@protocol CalDAVPrincipal;

@interface MobileCalDAVSubscribedCalendar : MobileCalDAVCalendar

{
    NSMutableDictionary *_properties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CalDAVPrincipal> principal;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSURL *calendarURL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSString *pushKey;
@property (retain, nonatomic) NSURL *owner;
@property (retain, nonatomic) NSString *ownerDisplayName;
@property (retain, nonatomic) NSSet *preferredCalendarUserAddresses;
@property (retain, nonatomic) NSURL *publishURL;
@property (retain, nonatomic) NSURL *prePublishURL;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (nonatomic) int order;
@property (nonatomic) int sharingStatus;
@property (retain, nonatomic) NSSet *sharees;
@property (nonatomic) _Bool isTaskContainer;
@property (nonatomic) _Bool isEventContainer;
@property (nonatomic) _Bool isSubscribed;
@property (nonatomic) _Bool isManagedByServer;
@property (nonatomic) _Bool isScheduleInbox;
@property (nonatomic) _Bool isScheduleOutbox;
@property (nonatomic) _Bool isNotification;
@property (nonatomic) _Bool isPoll;
@property (nonatomic) _Bool isEditable;
@property (nonatomic) _Bool isRenameable;
@property (nonatomic) _Bool isEnabled;
@property (nonatomic) _Bool isPublished;
@property (nonatomic) _Bool isAffectingAvailability;
@property (nonatomic) _Bool canBePublished;
@property (nonatomic) _Bool canBeShared;
@property (nonatomic) _Bool isFamilyCalendar;
@property (nonatomic) _Bool isMarkedUndeletable;
@property (nonatomic) _Bool isMarkedImmutableSharees;
@property (nonatomic) _Bool wasModifiedLocally;
@property (nonatomic) _Bool needsResync;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) NSString *syncToken;
@property (nonatomic, readonly) _Bool needsPublishUpdate;
@property (nonatomic, readonly) NSArray *syncActions;
@property (nonatomic, readonly) NSArray *shareeActions;
@property (nonatomic, readonly) NSArray *itemsToReportAsJunk;
@property (nonatomic, readonly) NSDictionary *uuidsToAddActions;
@property (nonatomic, readonly) NSDictionary *hrefsToModDeleteActions;
@property (nonatomic, readonly) NSSet *allItemURLs;
@property (nonatomic, readonly) NSArray *recurrenceSplitActions;
@property (nonatomic) long long maxAttendees;
@property (nonatomic, readonly) _Bool needsIsAffectingAvailabilityUpdate;
@property (retain, nonatomic) NSURL *subscriptionURL;
@property (nonatomic) _Bool hasAlarmFilter;
@property (nonatomic) _Bool hasAttachmentFilter;
@property (nonatomic) _Bool hasTaskFilter;
@property (nonatomic) double refreshInterval;
@property (nonatomic) _Bool autoprovisioned;
@property (retain, nonatomic) NSString *locationCode;
@property (retain, nonatomic) NSString *languageCode;

- (id)properties;
- (id)calendarURLString;
- (id)initWithCalendarURL:(id)arg1 calendar:(void *)arg2 properties:(id)arg3 principal:(id)arg4;
- (_Bool)shouldCalendarBeReadOnly;

@end
