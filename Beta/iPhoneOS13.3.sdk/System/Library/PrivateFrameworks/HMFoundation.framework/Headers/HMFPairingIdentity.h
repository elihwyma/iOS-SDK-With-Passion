/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFPairingKey, NSString;

@interface HMFPairingIdentity

{
    NSString *_identifier;
    HMFPairingKey *_publicKey;
    HMFPairingKey *_privateKey;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) HMFPairingKey *publicKey;
@property (copy, nonatomic, readonly) HMFPairingKey *privateKey;
@property (copy, readonly) HMFPairingIdentity *publicPairingIdentity;

+ (_Bool)supportsSecureCoding;
+ (id)pairingIdentity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;

@end
