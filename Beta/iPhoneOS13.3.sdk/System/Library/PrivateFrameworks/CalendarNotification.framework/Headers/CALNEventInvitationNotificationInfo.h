/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKCalendarEventInvitationNotification, EKConflictDetails, NSDate, NSDictionary, NSString, NSURL;

@interface CALNEventInvitationNotificationInfo : NSObject

{
    _Bool _isDelegate;
    NSString *_sourceClientIdentifier;
    NSURL *_launchURL;
    NSDate *_expirationDate;
    EKConflictDetails *_conflictDetails;
    EKCalendarEventInvitationNotification *_eventInvitationNotification;
    NSDictionary *_eventRepresentationDictionary;
    NSString *_eventURI;
    NSString *_sourceTitle;
    NSString *_sourceIdentifier;
}

@property (copy, nonatomic, readonly) NSString *sourceClientIdentifier;
@property (copy, nonatomic, readonly) NSURL *launchURL;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) EKConflictDetails *conflictDetails;
@property (nonatomic, readonly) EKCalendarEventInvitationNotification *eventInvitationNotification;
@property (copy, nonatomic, readonly) NSDictionary *eventRepresentationDictionary;
@property (copy, nonatomic, readonly) NSString *eventURI;
@property (nonatomic, readonly) _Bool isDelegate;
@property (copy, nonatomic, readonly) NSString *sourceTitle;
@property (copy, nonatomic, readonly) NSString *sourceIdentifier;

- (id)description;
- (id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 conflictDetails:(id)arg4 eventInvitationNotification:(id)arg5 eventRepresentationDictionary:(id)arg6 eventURI:(id)arg7 isDelegate:(_Bool)arg8 sourceTitle:(id)arg9 sourceIdentifier:(id)arg10;

@end
