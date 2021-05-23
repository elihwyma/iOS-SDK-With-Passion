/*
 Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <Contacts/CNPhoneNumbersDescription.h>

@interface CNPhoneNumbersDescription (ABSExtentions)

- (unsigned int)absPropertyType;
- (_Bool)isABSLabeledValueValue:(id)arg1 equalToValue:(id)arg2;
- (_Bool)absPropertyID:(int *)arg1;
- (CDUnknownBlockType)ABSMultiValueLabeledValueFromCNLabeledValueTransform;
- (CDUnknownBlockType)CNLabeledValueFromABSMultiValueTranform;

@end
