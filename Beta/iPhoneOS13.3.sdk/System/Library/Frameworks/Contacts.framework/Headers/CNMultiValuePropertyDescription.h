/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPropertyDescription.h>

@class NSArray;

@interface CNMultiValuePropertyDescription : CNPropertyDescription

@property (nonatomic, readonly) Class valueClass;
@property (nonatomic, readonly) _Bool isSingleValue;
@property (nonatomic, readonly) _Bool isMultiValue;
@property (nonatomic, readonly) NSArray *standardLabels;
@property (nonatomic, readonly) NSArray *managedLabels;
@property (nonatomic, readonly) Class labeledValueClass;
@property (nonatomic, readonly) CDUnknownBlockType plistTransform;
@property (nonatomic, readonly) CDUnknownBlockType fromPlistTransform;

- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;
- (id)localizedStringForLabel:(id)arg1;
- (_Bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;
- (id)stringForIndexingForContact:(id)arg1;
- (_Bool)isValidMultiValueValue:(id)arg1 error:(id *)arg2;
- (id)standardLabelsWithOptions:(unsigned long long)arg1;
- (void *)ABValueFromCNValue:(id)arg1;
- (id)CNValueFromABValue:(void *)arg1;
- (id)CNMutableValueForABMultivalue;
- (_Bool)applyABMultivalueValueBytes:(char *)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6;
- (_Bool)applyDictionary:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;
- (_Bool)applyCNValue:(id)arg1 toArray:(id)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;
- (id)valueWithResetIdentifiers:(id)arg1;
- (void)assertValueType:(id)arg1;
- (void *)ABMutableMultiValueForABPerson:(void *)arg1;
- (unsigned int)abPropertyType;
- (id)CNLabeledValueLabelFromABMultiValueLabel:(struct __CFString *)arg1;
- (struct __CFString *)ABMultiValueLabelFromCNLabeledValueLabel:(id)arg1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1 destinationClass:(Class)arg2 settersByABKeys:(id)arg3;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 gettersByABKeys:(id)arg2;

@end
