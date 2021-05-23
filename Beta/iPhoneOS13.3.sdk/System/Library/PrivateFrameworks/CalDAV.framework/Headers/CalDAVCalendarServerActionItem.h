/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem, CalDAVCalendarServerUpdateItem, CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerActionItem : CoreDAVItem

{
    CoreDAVItemWithNoChildren *_create;
    CalDAVCalendarServerUpdateItem *_update;
    CalDAVCalendarServerCancelItem *_cancel;
    CalDAVCalendarServerReplyItem *_reply;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren *create;
@property (retain, nonatomic) CalDAVCalendarServerUpdateItem *update;
@property (retain, nonatomic) CalDAVCalendarServerCancelItem *cancel;
@property (retain, nonatomic) CalDAVCalendarServerReplyItem *reply;

- (id)init;
- (id)copyParseRules;

@end
