/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

@interface CNChangeHistoryUpdateContactEvent : CNChangeHistoryEvent

{
    CNContact *_contact;
}

@property (nonatomic, readonly) CNContact *contact;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)acceptEventVisitor:(id)arg1;
- (id)initWithContact:(id)arg1;

@end
