/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNChangeHistoryEvent.h>

@class CNGroup;

@interface CNChangeHistoryRemoveSubgroupFromGroupEvent : CNChangeHistoryEvent

{
    CNGroup *_subgroup;
    CNGroup *_group;
}

@property (nonatomic, readonly) CNGroup *subgroup;
@property (nonatomic, readonly) CNGroup *group;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)acceptEventVisitor:(id)arg1;
- (id)initWithSubgroup:(id)arg1 group:(id)arg2;

@end
