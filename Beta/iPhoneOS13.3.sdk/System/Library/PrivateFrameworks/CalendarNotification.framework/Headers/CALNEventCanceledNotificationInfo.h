/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKCalendarEventInvitationNotification, NSDate, NSDictionary, NSString, NSURL;

@interface CALNEventCanceledNotificationInfo : NSObject

{
    _Bool _isDelegate;
    NSString *_sourceClientIdentifier;
    NSURL *_launchURL;
    NSDate *_expirationDate;
    EKCalendarEventInvitationNotification *_eventInvitationNotification;
    NSDictionary *_eventRepresentationDictionary;
    NSString *_sourceTitle;
    NSString *_sourceIdentifier;
}

@property (copy, nonatomic, readonly) NSString *sourceClientIdentifier;
@property (copy, nonatomic, readonly) NSURL *launchURL;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) EKCalendarEventInvitationNotification *eventInvitationNotification;
@property (copy, nonatomic, readonly) NSDictionary *eventRepresentationDictionary;
@property (nonatomic, readonly) _Bool isDelegate;
@property (copy, nonatomic, readonly) NSString *sourceTitle;
@property (copy, nonatomic, readonly) NSString *sourceIdentifier;

- (id)description;
- (id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 eventInvitationNotification:(id)arg4 eventRepresentationDictionary:(id)arg5 isDelegate:(_Bool)arg6 sourceTitle:(id)arg7 sourceIdentifier:(id)arg8;

@end
