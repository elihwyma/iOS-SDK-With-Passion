/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNLinkedContactsPredicate : CNPredicate

{
    CNContact *_contact;
    NSString *_contactIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) CNContact *contact;
@property (copy, nonatomic, readonly) NSString *contactIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithContact:(id)arg1;

@end
