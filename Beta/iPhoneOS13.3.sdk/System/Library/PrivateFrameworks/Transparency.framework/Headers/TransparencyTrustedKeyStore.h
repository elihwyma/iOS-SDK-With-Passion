/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSDictionary, TransparencySignatureVerifier;

@interface TransparencyTrustedKeyStore : NSObject

{
    TransparencySignatureVerifier *_signatureVerifier;
    NSDictionary *_trustedKeys;
}

@property (retain) NSDictionary *trustedKeys;
@property (retain) TransparencySignatureVerifier *signatureVerifier;

- (id)initWithTrustedKeys:(id)arg1;

@end
