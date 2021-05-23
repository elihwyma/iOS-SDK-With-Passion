/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/Swift-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, NSTimeZone, NSURL;

@protocol CalDAVPrincipal;

@protocol CalDAVCalendar <Swift>

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

- (unsigned short)setEtag:forItemAtURL: /* Error: Ran out of types for this method. */;
- (unsigned short)setScheduleTag:forItemAtURL: /* Error: Ran out of types for this method. */;
- (unsigned short)setURL:forResourceWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)etagsForItemURLs: /* Error: Ran out of types for this method. */;
- (unsigned short)updateResourcesFromServer: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteResourcesAtURLs: /* Error: Ran out of types for this method. */;
- (unsigned short)hasCalendarUserAddressEquivalentToURL: /* Error: Ran out of types for this method. */;

@end
