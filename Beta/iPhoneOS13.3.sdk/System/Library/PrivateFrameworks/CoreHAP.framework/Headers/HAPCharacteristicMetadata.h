/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPMetadataConstraints, NSString;

@interface HAPCharacteristicMetadata : HMFObject

{
    HAPMetadataConstraints *_constraints;
    NSString *_manufacturerDescription;
    NSString *_format;
    NSString *_units;
}

@property (retain, nonatomic) HAPMetadataConstraints *constraints;
@property (copy, nonatomic) NSString *manufacturerDescription;
@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSString *units;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConstraints:(id)arg1 description:(id)arg2 format:(id)arg3 units:(id)arg4;
- (_Bool)isEqualToCharacteristicMetadata:(id)arg1;
- (id)_generateValidConstraints:(id)arg1;

@end
