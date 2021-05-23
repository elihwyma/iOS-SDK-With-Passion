/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryPreferredContactForNameEvent : CNChangeHistoryEvent

{
    CNContact *_preferredContact;
    CNContact *_unifiedContact;
}

@property (nonatomic, readonly) CNContact *preferredContact;
@property (nonatomic, readonly) CNContact *unifiedContact;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)acceptEventVisitor:(id)arg1;
- (id)initWithPreferredContact:(id)arg1 unifiedContact:(id)arg2;

@end
