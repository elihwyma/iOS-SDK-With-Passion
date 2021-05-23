/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPropertyDescription.h>

@class NSString;

@interface CNFullscreenImageDataDescription : CNPropertyDescription

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (Class)valueClass;
- (id)CNValueForContact:(id)arg1;
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (_Bool)abPropertyID:(int *)arg1;
- (_Bool)setCNValue:(id)arg1 onABPerson:(void *)arg2 withDependentPropertiesContext:(id)arg3 error:(id *)arg4;
- (void *)ABValueForABPerson:(void *)arg1;
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;

@end
