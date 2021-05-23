/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject

{
    _Bool _statusChanged;
    _Bool _commentChanged;
    _Bool _proposedStartDateChanged;
    _Bool _proposedStartDateDeclined;
    _Bool _isCurrentUser;
    NSString *_name;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    NSURL *_URL;
    long long _participantStatus;
    NSString *_comment;
    NSDate *_proposedStartDate;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) _Bool statusChanged;
@property (nonatomic, readonly) _Bool commentChanged;
@property (nonatomic, readonly) _Bool proposedStartDateChanged;
@property (nonatomic, readonly) long long participantStatus;
@property (nonatomic, readonly) NSString *comment;
@property (nonatomic, readonly) NSDate *proposedStartDate;
@property (nonatomic, readonly) _Bool proposedStartDateDeclined;
@property (nonatomic, readonly) _Bool isCurrentUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithParticipant:(id)arg1 forEvent:(id)arg2;

@end
