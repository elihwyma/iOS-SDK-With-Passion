/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSData, NSString;

@interface HMFKey

{
    NSString *_type;
    NSData *_data;
    unsigned long long _size;
}

@property (readonly) unsigned long long size;
@property (copy, readonly) NSString *type;
@property (copy, readonly) NSData *data;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToData:(id)arg1;
- (id)shortDescription;
- (id)initWithType:(id)arg1 size:(unsigned long long)arg2 data:(id)arg3;

@end
