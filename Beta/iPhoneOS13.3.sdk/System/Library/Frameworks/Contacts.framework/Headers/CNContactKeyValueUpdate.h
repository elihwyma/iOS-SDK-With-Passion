/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContactUpdate.h>

@class CNPropertyDescription;

__attribute__((visibility("hidden")))
@interface CNContactKeyValueUpdate : CNContactUpdate

{
    CNPropertyDescription *_property;
    id _value;
}

@property (readonly) CNPropertyDescription *property;
@property (readonly) id value;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)applyToABPerson:(void *)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id *)arg4;
- (id)initWithProperty:(id)arg1 value:(id)arg2;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;

@end
