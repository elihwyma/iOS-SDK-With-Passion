/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContainerPropertyDescription.h>

__attribute__((visibility("hidden")))
@interface CNContainerGuardianStateDirtyDescription : CNContainerPropertyDescription

- (id)key;
- (Class)valueClass;
- (_Bool)isWritable;
- (id)CNValueForContainer:(id)arg1;
- (void)setCNValue:(id)arg1 onContainer:(id)arg2;
- (int)abPropertyID;
- (void *)ABValueFromCNValue:(id)arg1;
- (id)CNValueFromABValue:(void *)arg1;
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;

@end
