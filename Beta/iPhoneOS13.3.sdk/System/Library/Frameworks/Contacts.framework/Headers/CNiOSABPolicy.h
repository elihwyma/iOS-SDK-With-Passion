/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPolicy.h>

__attribute__((visibility("hidden")))
@interface CNiOSABPolicy : CNPolicy

{
    void *_iOSABPolicy;
    void *_fakePerson;
    _Bool _abSourceIsContentReadonly;
}

- (void)dealloc;
- (_Bool)isReadonly;
- (id)initWithAddressBookPolicy:(void *)arg1 readOnly:(_Bool)arg2;
- (id)_orderedLabels:(id)arg1 withOrder:(id)arg2;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (_Bool)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id *)arg4;
- (_Bool)shouldAddContact:(id)arg1;
- (_Bool)shouldRemoveContact:(id)arg1;

@end
