/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNMultiValueSingleUpdate.h>

__attribute__((visibility("hidden")))
@interface CNMultiValueReplaceUpdate : CNMultiValueSingleUpdate

- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (_Bool)applyToABPerson:(void *)arg1 abmultivalue:(void *)arg2 propertyDescription:(id)arg3 logger:(id)arg4 error:(id *)arg5;

@end
