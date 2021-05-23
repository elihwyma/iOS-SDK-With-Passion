/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNPerContactPropertyKeyDescriptor : NSObject <Swift>

{
    NSMutableDictionary *_propertiesByIdentifier;
}

@property (retain, nonatomic) NSMutableDictionary *propertiesByIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_cn_requiredKeys;
- (id)_cn_optionalKeys;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
- (id)_cn_ignorableKeys;
- (void)setKeysToFetch:(id)arg1 forContactIdentifier:(id)arg2;

@end
