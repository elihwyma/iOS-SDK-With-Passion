/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData, NSUUID;

@interface CUPairingIdentity : NSObject

{
    NSData *_altIRK;
    NSUUID *_identifier;
    NSData *_publicKey;
    NSData *_secretKey;
}

@property (copy, nonatomic) NSData *altIRK;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSData *publicKey;
@property (copy, nonatomic) NSData *secretKey;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
