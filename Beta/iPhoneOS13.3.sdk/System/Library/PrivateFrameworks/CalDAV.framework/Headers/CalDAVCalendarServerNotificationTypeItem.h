/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem

{
    CoreDAVItemWithNoChildren *_inviteNotification;
    CoreDAVItemWithNoChildren *_inviteReply;
    CoreDAVItemWithNoChildren *_resourceChanged;
}

@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteNotification;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteReply;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *resourceChanged;
@property (nonatomic, readonly) _Bool isInviteReply;
@property (nonatomic, readonly) _Bool isInviteNotification;
@property (nonatomic, readonly) _Bool isResourceChanged;

- (id)description;
- (id)copyParseRules;
- (_Bool)notificationNameIn:(id)arg1;
- (_Bool)notificationNameMatches:(id)arg1;

@end
