/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactKeyVector, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAggregateKeyDescriptor : NSObject

{
    NSArray *_keyDescriptors;
    NSString *_privateDescription;
    CNContactKeyVector *_unauthorizedKeys;
}

@property (copy, nonatomic) NSArray *keyDescriptors;
@property (copy, nonatomic) NSString *privateDescription;
@property (retain, nonatomic) CNContactKeyVector *unauthorizedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)keyDescriptorWithKeyDescriptors:(id)arg1 description:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_cn_requiredKeys;
- (id)_cn_optionalKeys;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
- (id)_cn_ignorableKeys;
- (id)_cn_recursiveDescriptionWithPrefix:(id)arg1;
- (id)_cn_unauthorizedKeys;
- (void)_cn_setUnauthorizedKeys:(id)arg1;
- (id)initWithKeyDescriptors:(id)arg1 description:(id)arg2;
- (id)_recursiveDescription;

@end
