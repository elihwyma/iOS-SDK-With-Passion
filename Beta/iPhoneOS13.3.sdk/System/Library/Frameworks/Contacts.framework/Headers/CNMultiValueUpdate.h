/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMultiValueUpdate : NSObject

{
    _Bool _ignoreIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool ignoreIdentifiers;

+ (id)addValue:(id)arg1;
+ (id)removeValue:(id)arg1;
+ (id)replaceValue:(id)arg1 withValue:(id)arg2;
+ (id)reorderValues:(id)arg1;

- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (_Bool)applyToABPerson:(void *)arg1 abmultivalue:(void *)arg2 propertyDescription:(id)arg3 logger:(id)arg4 error:(id *)arg5;
- (long long)multiValueIndexForValue:(id)arg1 inMultiValue:(void *)arg2 identifier:(id *)arg3;

@end
