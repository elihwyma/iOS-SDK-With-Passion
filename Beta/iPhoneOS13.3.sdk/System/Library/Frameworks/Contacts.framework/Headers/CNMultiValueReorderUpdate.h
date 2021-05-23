/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNMultiValueUpdate.h>

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNMultiValueReorderUpdate : CNMultiValueUpdate

{
    NSOrderedSet *_values;
}

@property (copy, nonatomic, readonly) NSOrderedSet *values;

- (id)description;
- (id)initWithValues:(id)arg1;
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (_Bool)applyToABPerson:(void *)arg1 abmultivalue:(void *)arg2 propertyDescription:(id)arg3 logger:(id)arg4 error:(id *)arg5;
- (long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2;

@end
