/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSData;

@interface HMFPairingKey

{
    NSData *_data;
}

@property (copy, nonatomic, readonly) NSData *data;

+ (void)load;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithPairingKeyData:(id)arg1;

@end
