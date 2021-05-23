/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData, NSString, Signature, TransparencyManagedDataStore, TransparencySignatureVerifier;

@interface SignedMutationTimestamp

@property (retain) TransparencySignatureVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) NSString *application;
@property (copy, nonatomic) NSData *mutation;
@property (retain, nonatomic) Signature *signature;
@property (nonatomic) _Bool hasSignature;

+ (id)descriptor;

- (_Bool)verifyWithError:(id *)arg1;
- (id)parsedMutationWithError:(id *)arg1;
- (id)copyManagedObjectWithError:(id *)arg1;

@end
