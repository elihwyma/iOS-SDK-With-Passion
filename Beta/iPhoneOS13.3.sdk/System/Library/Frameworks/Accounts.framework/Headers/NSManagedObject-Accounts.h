/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <CoreData/NSManagedObject.h>

@interface NSManagedObject (Accounts)

- (void)encodeWithCoder:(id)arg1;
- (id)_obsoleteAttributes;
- (id)_removeObsoleteKeysFromDictionary:(id)arg1;
- (void)setValuesWithObject:(id)arg1;
- (_Bool)validateRequiredAttributesForObject:(id)arg1 error:(id *)arg2;

@end
