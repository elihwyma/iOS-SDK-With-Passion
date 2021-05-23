/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNContactKeyVector : NSObject

{
    long long _bitBuckets[1];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)keyVectorWithKeys:(id)arg1;
+ (id)keyVector;
+ (id)keyVectorWithKey:(id)arg1;
+ (id)freezeIfClassIsImmutable:(id)arg1;
+ (id)keyVectorWithAllKeys;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)containsKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_cn_requiredKeys;
- (id)_cn_optionalKeys;
- (_Bool)intersectsKeyVector:(id)arg1;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
- (id)_cn_ignorableKeys;
- (id)keyVectorByAddingKey:(id)arg1;
- (_Bool)isEqualToKeyVector:(id)arg1;
- (id)keyVectorByAddingKeysFromKeyVector:(id)arg1;
- (id)keyVectorByRemovingKeysFromKeyVector:(id)arg1;
- (id)initWithKeys:(id)arg1;
- (id)initWithAllKeys;
- (void)_checkStorageSize;
- (long long *)_bitBuckets;
- (id)keyVectorByAddingKeys:(id)arg1;
- (_Bool)containsAllKeys;
- (_Bool)isSubsetOfKeyVector:(id)arg1;

@end
