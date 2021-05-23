/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVLeafItem;

@interface CalDAVCalendarServerReplyItem

{
    CoreDAVLeafItem *_attendee;
}

@property (retain, nonatomic) CoreDAVLeafItem *attendee;

- (id)copyParseRules;

@end
