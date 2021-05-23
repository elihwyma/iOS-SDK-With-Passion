/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNMultiValuePropertyDescription.h>

@class NSString;

@interface CNDatesDescription : CNMultiValuePropertyDescription

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (_Bool)isNonnull;
- (id)CNValueForContact:(id)arg1;
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (_Bool)isValue:(id)arg1 preferredToUnifiedValue:(id)arg2;
- (CDUnknownBlockType)fromPlistTransform;
- (id)standardLabels;
- (Class)labeledValueClass;
- (_Bool)isValidMultiValueValue:(id)arg1 error:(id *)arg2;
- (_Bool)abPropertyID:(int *)arg1;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;

@end
