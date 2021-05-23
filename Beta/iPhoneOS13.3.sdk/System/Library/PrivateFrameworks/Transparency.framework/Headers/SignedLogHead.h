/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class LogHead, NSData, Signature, TransparencyManagedDataStore, TransparencySignatureVerifier;

@interface SignedLogHead

@property (retain) TransparencySignatureVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (readonly) LogHead *parsedLogHead;
@property (copy, nonatomic) NSData *logHead;
@property (retain, nonatomic) Signature *signature;
@property (nonatomic) _Bool hasSignature;

+ (id)descriptor;

- (_Bool)verifyWithError:(id *)arg1;
- (id)copyManagedObjectWithError:(id *)arg1;

@end
