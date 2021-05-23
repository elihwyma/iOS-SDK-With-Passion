/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObject.h>

@class EKCalendarItem, NSPredicate, NSString, NSURL;

@interface EKParticipant : EKObject

{
    EKCalendarItem *_owner;
}

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *inviterNameString;
@property (nonatomic) int proposedStartDateStatus;
@property (nonatomic, readonly) NSString *UUID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic, readonly) EKCalendarItem *owner;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long participantStatus;
@property (nonatomic, readonly) long long participantRole;
@property (nonatomic, readonly) long long participantType;
@property (nonatomic, readonly, getter=isCurrentUser) _Bool currentUser;
@property (nonatomic, readonly) NSPredicate *contactPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)participantWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;
+ (id)participantWithName:(id)arg1 url:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)url;
- (void)setURL:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)nameComponents;
- (_Bool)isEqualToParticipant:(id)arg1;
- (id)proposedStartDate;
- (void)setProposedStartDate:(id)arg1;
- (id)proposedStartDateForEvent:(id)arg1;
- (_Bool)isLocationRoom;
- (id)semanticIdentifier;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;
- (id)displayNameRaw;
- (id)invitedBy;
- (const void *)ABRecordWithAddressBook:(void *)arg1;
- (void)setProposedStartDate:(id)arg1 forEvent:(id)arg2;
- (id)setInviterNameString;

@end
