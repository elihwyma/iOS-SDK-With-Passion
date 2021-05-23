/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSArray, NSData, NSString;

@interface HMFHardwareAddress

{
    NSString *_formattedString;
    NSData *_data;
}

@property (readonly) unsigned long long length;
@property (copy, readonly) NSData *data;
@property (copy, readonly) NSString *formattedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddressData:(id)arg1;
- (_Bool)isEqualToAddress:(id)arg1;
- (id)initWithAddressString:(id)arg1 length:(unsigned long long)arg2;

@end
