/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class MapHead, NSData, Signature, TransparencySignatureVerifier;

@interface SignedMapHead

@property (retain) TransparencySignatureVerifier *verifier;
@property (readonly) MapHead *parsedMapHead;
@property (copy, nonatomic) NSData *mapHead;
@property (retain, nonatomic) Signature *signature;
@property (nonatomic) _Bool hasSignature;

+ (id)descriptor;

- (_Bool)verifyWithError:(id *)arg1;

@end
