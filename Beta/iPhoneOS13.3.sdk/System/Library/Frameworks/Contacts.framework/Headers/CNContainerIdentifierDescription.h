/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContainerPropertyDescription.h>

__attribute__((visibility("hidden")))
@interface CNContainerIdentifierDescription : CNContainerPropertyDescription

- (id)key;
- (Class)valueClass;
- (id)CNValueForContainer:(id)arg1;
- (void)setCNValue:(id)arg1 onContainer:(id)arg2;
- (_Bool)isNonnull;
- (int)abPropertyID;
- (void *)ABValueFromCNValue:(id)arg1;
- (id)CNValueFromABValue:(void *)arg1;

@end
