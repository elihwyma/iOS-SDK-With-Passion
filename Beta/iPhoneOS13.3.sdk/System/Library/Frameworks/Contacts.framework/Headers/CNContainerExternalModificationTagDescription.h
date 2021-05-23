/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContainerPropertyDescription.h>

__attribute__((visibility("hidden")))
@interface CNContainerExternalModificationTagDescription : CNContainerPropertyDescription

- (id)key;
- (Class)valueClass;
- (_Bool)isWritable;
- (id)CNValueForContainer:(id)arg1;
- (void)setCNValue:(id)arg1 onContainer:(id)arg2;
- (int)abPropertyID;

@end
