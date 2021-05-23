/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContainerPropertyDescription.h>

__attribute__((visibility("hidden")))
@interface CNContainerRestrictionsDescription : CNContainerPropertyDescription

- (id)key;
- (Class)valueClass;
- (_Bool)isWritable;
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;
- (id)CNValueForContainer:(id)arg1;
- (void)setCNValue:(id)arg1 onContainer:(id)arg2;
- (int)abPropertyID;
- (void *)ABValueFromCNValue:(id)arg1;
- (id)CNValueFromABValue:(void *)arg1;
- (_Bool)isConvertibleABValue:(void *)arg1;
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;

@end
