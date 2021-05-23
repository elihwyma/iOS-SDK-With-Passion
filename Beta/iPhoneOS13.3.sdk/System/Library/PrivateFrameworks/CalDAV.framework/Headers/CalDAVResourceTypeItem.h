/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVResourceTypeItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem

{
    CoreDAVItemWithNoChildren *_calendar;
    CoreDAVItemWithNoChildren *_scheduleInbox;
    CoreDAVItemWithNoChildren *_scheduleOutbox;
    CoreDAVItemWithNoChildren *_notification;
    CoreDAVItemWithNoChildren *_subscribed;
    CoreDAVItemWithNoChildren *_sharedOwner;
    CoreDAVItemWithNoChildren *_isFamilyCalendar;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren *calendar;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *scheduleInbox;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *scheduleOutbox;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *notification;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *subscribed;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *sharedOwner;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isFamilyCalendar;

- (void)write:(id)arg1;
- (id)copyParseRules;

@end
