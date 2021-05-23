/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerAccessItem, CalDAVCalendarServerOrganizerItem, CalDAVSupportedCalendarComponentSet, CoreDAVHrefItem, CoreDAVItemWithHrefChildItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem

{
    CoreDAVLeafItem *_uid;
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_inviteStatus;
    CoreDAVItemWithNoChildren *_calendarPublic;
    CalDAVCalendarServerAccessItem *_access;
    CoreDAVItemWithHrefChildItem *_hostURL;
    CalDAVCalendarServerOrganizerItem *_organizer;
    CoreDAVLeafItem *_summary;
    CalDAVSupportedCalendarComponentSet *_supportedCalendarComponentSet;
}

@property (retain, nonatomic) CoreDAVLeafItem *uid;
@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *calendarPublic;
@property (retain, nonatomic) CalDAVCalendarServerAccessItem *access;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *hostURL;
@property (retain, nonatomic) CalDAVCalendarServerOrganizerItem *organizer;
@property (retain, nonatomic) CoreDAVLeafItem *summary;
@property (retain, nonatomic) CalDAVSupportedCalendarComponentSet *supportedCalendarComponentSet;

- (id)init;
- (id)copyParseRules;
- (id)initForReplyWithUID:(id)arg1 href:(id)arg2 hostURL:(id)arg3 summary:(id)arg4;
- (_Bool)isComponentSupportedForString:(id)arg1;

@end
