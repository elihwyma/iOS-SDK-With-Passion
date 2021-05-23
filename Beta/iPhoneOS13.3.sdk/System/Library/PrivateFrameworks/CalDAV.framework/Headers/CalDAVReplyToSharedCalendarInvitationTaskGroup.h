/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class CalDAVCalendarServerInviteNotificationItem, NSString, NSURL;

@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup

{
    _Bool _acceptInvitation;
    NSURL *_sharedAs;
    CalDAVCalendarServerInviteNotificationItem *_invitation;
    NSURL *_calendarHomeURL;
}

@property (retain, nonatomic) CalDAVCalendarServerInviteNotificationItem *invitation;
@property (nonatomic) _Bool acceptInvitation;
@property (retain, nonatomic) NSURL *calendarHomeURL;
@property (nonatomic) id <CoreDAVTaskGroupDelegate> delegate;
@property (retain, nonatomic) NSURL *sharedAs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)generateReply;
- (id)initWithInvitation:(id)arg1 acceptInvitation:(_Bool)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;

@end
