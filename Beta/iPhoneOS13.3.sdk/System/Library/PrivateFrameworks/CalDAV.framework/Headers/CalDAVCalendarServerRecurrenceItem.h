/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerChangesItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem

{
    CoreDAVItemWithNoChildren *_master;
    CoreDAVLeafItem *_recurrenceID;
    CalDAVCalendarServerChangesItem *_changes;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren *master;
@property (retain, nonatomic) CoreDAVLeafItem *recurrenceID;
@property (retain, nonatomic) CalDAVCalendarServerChangesItem *changes;
@property (nonatomic, readonly) _Bool isMaster;

- (id)init;
- (id)copyParseRules;

@end
