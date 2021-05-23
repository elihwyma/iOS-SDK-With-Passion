/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKCalendarNotification, NSString;

@interface CALNSharedCalendarInvitationResponseNotificationInfo : NSObject

{
    _Bool _isDelegate;
    NSString *_sourceClientIdentifier;
    EKCalendarNotification *_calendarNotification;
    NSString *_sourceTitle;
    NSString *_sourceIdentifier;
}

@property (copy, nonatomic, readonly) NSString *sourceClientIdentifier;
@property (nonatomic, readonly) EKCalendarNotification *calendarNotification;
@property (nonatomic, readonly) _Bool isDelegate;
@property (copy, nonatomic, readonly) NSString *sourceTitle;
@property (copy, nonatomic, readonly) NSString *sourceIdentifier;

- (id)description;
- (id)initWithSourceClientIdentifier:(id)arg1 calendarNotification:(id)arg2 isDelegate:(_Bool)arg3 sourceTitle:(id)arg4 sourceIdentifier:(id)arg5;

@end
