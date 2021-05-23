/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContactUpdate.h>

@class CNMultiValueDiff, CNMultiValuePropertyDescription;

__attribute__((visibility("hidden")))
@interface CNContactMultiValueDiffUpdate : CNContactUpdate

{
    CNMultiValuePropertyDescription *_property;
    CNMultiValueDiff *_diff;
}

@property (readonly) CNMultiValuePropertyDescription *property;
@property (readonly) CNMultiValueDiff *diff;

- (id)description;
- (_Bool)applyToABPerson:(void *)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id *)arg4;
- (id)initWithProperty:(id)arg1 diff:(id)arg2;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;

@end
