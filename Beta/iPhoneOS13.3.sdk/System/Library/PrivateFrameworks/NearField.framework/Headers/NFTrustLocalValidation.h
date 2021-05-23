/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFTrustObject.h>

@interface NFTrustLocalValidation : NFTrustObject

{
    unsigned char _primitiveLocalValidation;
}

@property (nonatomic) unsigned char primitiveLocalValidation;

+ (_Bool)supportsSecureCoding;
+ (id)localValidationWithPassCode;
+ (id)localValidationWithTouchID;
+ (id)localValidationWithFaceID;
+ (id)withPrimitiveLocalValidation:(unsigned char)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
