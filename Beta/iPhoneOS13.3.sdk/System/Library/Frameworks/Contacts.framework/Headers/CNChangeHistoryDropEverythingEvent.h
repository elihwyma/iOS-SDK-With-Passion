/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNChangeHistoryEvent.h>

@interface CNChangeHistoryDropEverythingEvent : CNChangeHistoryEvent

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)acceptEventVisitor:(id)arg1;

@end
