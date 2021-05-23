/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryLinkContactsEvent : CNChangeHistoryEvent

{
    CNContact *_fromContact;
    CNContact *_toContact;
}

@property (nonatomic, readonly) CNContact *fromContact;
@property (nonatomic, readonly) CNContact *toContact;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)acceptEventVisitor:(id)arg1;
- (id)initWithFromContact:(id)arg1 toContact:(id)arg2;

@end
