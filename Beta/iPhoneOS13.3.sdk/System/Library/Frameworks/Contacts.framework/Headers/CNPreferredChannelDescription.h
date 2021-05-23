/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPropertyDescription.h>

@class NSString;

@interface CNPreferredChannelDescription : CNPropertyDescription

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)CNValueForContact:(id)arg1;
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (void)resetGuardianManagedValueOnContact:(id)arg1;
- (_Bool)abPropertyID:(int *)arg1;

@end
