/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class NSData;

@interface ASTAuthInfoResult : ASTSealablePayload

{
    NSData *_attestation;
}

@property (retain, nonatomic) NSData *attestation;

+ (id)sealedAuthInfoResultWithPayload:(id)arg1 signature:(id)arg2;
+ (id)authInfoResultWithAttestation:(id)arg1;

- (id)generatePayload;

@end
