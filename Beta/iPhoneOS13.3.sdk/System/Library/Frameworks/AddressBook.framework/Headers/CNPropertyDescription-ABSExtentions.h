/*
 Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <Contacts/CNPropertyDescription.h>

@interface CNPropertyDescription (ABSExtentions)

- (unsigned int)absPropertyType;
- (const void *)ABSValueFromCNValue:(id)arg1;
- (_Bool)convertABSValue:(void *)arg1 toCNValue:(id *)arg2 error:(struct __CFError **)arg3;
- (id)CNValueFromABSValue:(void *)arg1;
- (_Bool)absPropertyID:(int *)arg1;

@end
