/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPolicy.h>

@interface CNPermissivePolicy : CNPolicy

+ (id)sharedPermissivePolicy;

- (_Bool)isReadonly;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (_Bool)shouldAddContact:(id)arg1;
- (_Bool)shouldRemoveContact:(id)arg1;
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;
- (id)unsupportedKeyPathsForContactProperty:(id)arg1;
- (_Bool)shouldSetValue:(id)arg1 ofProperty:(id)arg2 onContact:(id)arg3 replacementValue:(id *)arg4;
- (_Bool)isContactPropertySupported:(id)arg1;

@end
