/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@interface CNPolicy : NSObject

@property (nonatomic, readonly, getter=isReadonly) _Bool readonly;

- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (_Bool)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id *)arg4;
- (_Bool)shouldAddContact:(id)arg1;
- (_Bool)shouldRemoveContact:(id)arg1;
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;
- (_Bool)isContactPropertySupported:(id)arg1;
- (_Bool)_validateLabeledValueArrayLabels:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id *)arg3;
- (_Bool)_validateLabeledValueArrayAttributeSupport:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id *)arg3;
- (id)_replacementLabeledValue:(id)arg1 omittingKeys:(id)arg2;

@end
