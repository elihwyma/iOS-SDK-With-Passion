/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNChangeHistoryEvent.h>

@class CNGroup, NSString;

@interface CNChangeHistoryAddGroupEvent : CNChangeHistoryEvent

{
    CNGroup *_group;
    NSString *_containerIdentifier;
}

@property (nonatomic, readonly) CNGroup *group;
@property (nonatomic, readonly) NSString *containerIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)acceptEventVisitor:(id)arg1;
- (id)initWithGroup:(id)arg1 containerIdentifier:(id)arg2;

@end
