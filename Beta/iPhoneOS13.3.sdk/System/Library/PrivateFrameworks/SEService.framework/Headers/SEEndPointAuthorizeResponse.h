/*
 Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

#import <NSObject.h>

@class NSData;

@interface SEEndPointAuthorizeResponse : NSObject

{
    NSData *_endPointAttestationData;
    NSData *_encryptedData;
    NSData *_encryptionPublicKeyData;
}

@property (retain, nonatomic) NSData *endPointAttestationData;
@property (retain, nonatomic) NSData *encryptedData;
@property (retain, nonatomic) NSData *encryptionPublicKeyData;

+ (_Bool)supportsSecureCoding;
+ (id)responseWithEndPointAttestationData:(id)arg1 encryptionPublicKeyData:(id)arg2 encryptedData:(id)arg3;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
