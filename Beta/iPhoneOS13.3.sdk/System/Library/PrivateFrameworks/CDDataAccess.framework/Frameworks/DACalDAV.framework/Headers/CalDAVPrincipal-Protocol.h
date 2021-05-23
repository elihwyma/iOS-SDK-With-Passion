/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/Swift-Protocol.h>

@class NSDateComponents, NSDictionary, NSNumber, NSSet, NSString, NSURL;

@protocol CalDAVAccount, CoreDAVTaskManager;

@protocol CalDAVPrincipal <Swift>

@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, readonly) id <CalDAVAccount> account;
@property (nonatomic, readonly) id <CoreDAVTaskManager> taskManager;
@property (retain, nonatomic) NSSet *preferredCalendarUserAddresses;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSURL *calendarHomeURL;
@property (retain, nonatomic) NSString *calendarHomeSyncToken;
@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSURL *defaultCalendarURL;
@property (retain, nonatomic) NSURL *notificationCollectionURL;
@property (retain, nonatomic) NSString *notificationCollectionCTag;
@property (retain, nonatomic) NSURL *inboxURL;
@property (retain, nonatomic) NSString *inboxCTag;
@property (retain, nonatomic) NSURL *outboxURL;
@property (retain, nonatomic) NSURL *dropBoxURL;
@property (retain, nonatomic) NSString *notificationURLString;
@property (retain, nonatomic) NSDictionary *pushTransports;
@property (retain, nonatomic) NSString *calendarHomePushKey;
@property (retain, nonatomic) NSNumber *quotaFreeBytes;
@property (retain, nonatomic) NSString *supportedCalendarComponentSets;
@property (nonatomic) _Bool isDelegate;
@property (nonatomic) _Bool isWritable;
@property (nonatomic) _Bool canCreateCalendars;
@property (nonatomic) _Bool isEnabled;
@property (nonatomic, readonly) _Bool isMergeSync;
@property (nonatomic, readonly) _Bool isEnabledForEvents;
@property (nonatomic, readonly) _Bool isEnabledForTodos;
@property (nonatomic, readonly) NSDateComponents *eventFilterStartDate;
@property (nonatomic, readonly) NSDateComponents *eventFilterEndDate;
@property (nonatomic) _Bool isExpandPropertyReportSupported;
@property (nonatomic) _Bool supportsFreebusy;
@property (nonatomic) _Bool supportsCalendarUserSearch;
@property (nonatomic, readonly) _Bool supportsExtendedCalendarQuery;
@property (nonatomic, readonly) NSSet *calendars;
@property (nonatomic, readonly) NSSet *addedCalendars;
@property (nonatomic, readonly) NSSet *modifiedCalendars;
@property (nonatomic, readonly) NSSet *deletedCalendarURLs;

- (unsigned short)removeCalendar: /* Error: Ran out of types for this method. */;
- (unsigned short)calendarOfType:atURL:withOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)removecalendarWithURL: /* Error: Ran out of types for this method. */;

@end
