/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class MSDecodeOptions, MSOID, NSArray, NSData, NSMutableSet, NSNumber, NSSet, NSString;

@protocol MSCMSMessage;

@interface MSCMSSignedData : NSObject

{
    _Bool _detached;
    _Bool _contentChanged;
    NSData *_dataContent;
    id <MSCMSMessage> _embeddedContent;
    MSOID *_contentType;
    NSArray *_signers;
    NSSet *_digestAlgorithms;
    NSMutableSet *_certificates;
    NSNumber *_version;
    MSDecodeOptions *_options;
}

@property (retain) NSNumber *version;
@property (retain) NSArray *signers;
@property (retain) NSSet *digestAlgorithms;
@property (retain) MSDecodeOptions *options;
@property _Bool contentChanged;
@property _Bool detached;
@property (retain) NSMutableSet *certificates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) MSOID *type;
@property (retain, nonatomic) NSData *dataContent;
@property (retain) id <MSCMSMessage> embeddedContent;
@property (retain) MSOID *contentType;

+ (id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id *)arg3;

- (id)initWithDataContent:(id)arg1 isDetached:(_Bool)arg2 signer:(id)arg3 error:(id *)arg4;
- (_Bool)addCertificatesForSigner:(id)arg1 mode:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithEmbeddedContent:(id)arg1 signer:(id)arg2 error:(id *)arg3;
- (void)addDigestAlgorithmFromSigner:(id)arg1;
- (void)addSigner:(id)arg1;
- (void)removeSignerCertificatesWithIndexes:(id)arg1;
- (void)removeSignersWithIndexes:(id)arg1 error:(id *)arg2;
- (void)removeSignersWithCertificate:(struct __SecCertificate *)arg1 error:(id *)arg2;
- (id)encodeMessageSecurityObject:(id *)arg1;
- (_Bool)checkSignedPerRFC5652:(id *)arg1;
- (_Bool)verifySignaturesAndSignersWithPolicies:(id)arg1 verifyTime:(id)arg2 error:(id *)arg3;
- (_Bool)verifySignatures:(id *)arg1;
- (id)initWithDataContent:(id)arg1 isDetached:(_Bool)arg2 signer:(id)arg3 additionalCertificates:(id)arg4 error:(id *)arg5;
- (id)initWithDataContent:(id)arg1 isDetached:(_Bool)arg2 signer:(id)arg3 signerChainMode:(unsigned long long)arg4 error:(id *)arg5;
- (id)initWithEmbeddedContent:(id)arg1 signer:(id)arg2 additionalCertificates:(id)arg3 error:(id *)arg4;
- (id)initWithEmbeddedContent:(id)arg1 signer:(id)arg2 signerChainMode:(unsigned long long)arg3 error:(id *)arg4;
- (id)initCertsOnlyWithCertificates:(id)arg1 error:(id *)arg2;
- (void)addSigner:(id)arg1 withCertificates:(id)arg2;
- (_Bool)addSigner:(id)arg1 withChainMode:(unsigned long long)arg2 error:(id *)arg3;
- (void)removeSignersWithEmailAddress:(id)arg1 error:(id *)arg2;
- (void)removeSignersWithIdentity:(struct __SecIdentity *)arg1 error:(id *)arg2;
- (struct __SecCertificate *)getSignerCertificate:(unsigned long long)arg1 error:(id *)arg2;
- (id)calculateContentDigestWithAlgorithm:(id)arg1 error:(id *)arg2;

@end
