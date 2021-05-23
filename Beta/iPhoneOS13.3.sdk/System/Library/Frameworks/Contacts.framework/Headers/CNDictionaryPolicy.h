/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPermissivePolicy.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNDictionaryPolicy : CNPermissivePolicy

{
    NSDictionary *_policyDictionary;
}

- (id)initWithDictionary:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;
- (_Bool)isContactPropertySupported:(id)arg1;
- (id)contactRestrictionsForLabeledProperty:(id)arg1;

@end
