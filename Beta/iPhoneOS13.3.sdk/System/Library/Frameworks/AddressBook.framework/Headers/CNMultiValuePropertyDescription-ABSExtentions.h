/*
 Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <Contacts/CNMultiValuePropertyDescription.h>

@interface CNMultiValuePropertyDescription (ABSExtentions)

- (const void *)ABSValueFromCNValue:(id)arg1;
- (_Bool)isABSLabeledValueValue:(id)arg1 equalToValue:(id)arg2;
- (id)CNValueFromABSValue:(void *)arg1;
- (CDUnknownBlockType)ABSMultiValueLabeledValueFromCNLabeledValueTransform;
- (CDUnknownBlockType)CNLabeledValueFromABSMultiValueTranform;
- (CDUnknownBlockType)passThroughMultivalueTransformWithLabelMapping:(id)arg1;
- (CDUnknownBlockType)multiValueTransformWithLabelMapping:(id)arg1 valueTransform:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)dictionaryBasedMultiValueTransformWithLabelMapping:(id)arg1 inputKeys:(id)arg2 destinationClass:(Class)arg3 valueMapping:(id)arg4;

@end
