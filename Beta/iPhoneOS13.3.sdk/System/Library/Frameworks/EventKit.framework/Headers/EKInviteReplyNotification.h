/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKNotification.h>

@class EKCalendar, NSDate, NSString, NSURL;

@interface EKInviteReplyNotification : EKNotification

@property (nonatomic, readonly) EKCalendar *inviteReplyCalendar;
@property (nonatomic, readonly) NSString *calendarName;
@property (copy, nonatomic) NSString *inReplyTo;
@property (copy, nonatomic) NSString *shareeDisplayName;
@property (copy, nonatomic) NSString *shareeFirstName;
@property (copy, nonatomic) NSString *shareeLastName;
@property (copy, nonatomic) NSURL *shareeURL;
@property (nonatomic, readonly) NSString *shareeEmailAddress;
@property (nonatomic, readonly) NSString *shareePhoneNumber;
@property (nonatomic) unsigned long long shareeStatus;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *summary;
@property (nonatomic, readonly) _Bool alerted;

+ (Class)frozenClass;
+ (id)sourceForInviteReplyNotification:(id)arg1;
+ (id)knownRelationshipSingleValueKeys;

- (_Bool)validate:(id *)arg1;
- (void)_setInviteReplyCalendar:(id)arg1;
- (id)initWithInviteReplyCalendar:(id)arg1;
- (void)clearAlertedStatus;

@end
