/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerActionItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem

{
    CoreDAVLeafItem *_dtstamp;
    CalDAVCalendarServerActionItem *_action;
}

@property (retain, nonatomic) CoreDAVLeafItem *dtstamp;
@property (retain, nonatomic) CalDAVCalendarServerActionItem *action;

- (id)init;
- (id)copyParseRules;

@end
