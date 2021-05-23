/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact, CNGroup;

@interface CNChangeHistoryAddMemberToGroupEvent : CNChangeHistoryEvent

{
    CNContact *_member;
    CNGroup *_group;
}

@property (nonatomic, readonly) CNContact *member;
@property (nonatomic, readonly) CNGroup *group;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)acceptEventVisitor:(id)arg1;
- (id)initWithMember:(id)arg1 group:(id)arg2;

@end
