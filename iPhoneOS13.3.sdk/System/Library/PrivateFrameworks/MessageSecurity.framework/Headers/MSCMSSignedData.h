//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSCMSMessage-Protocol.h>

@class MSDecodeOptions, MSOID, NSArray, NSData, NSMutableSet, NSNumber, NSSet;
@protocol MSCMSMessage;

@interface MSCMSSignedData : NSObject <MSCMSMessage>
{
    BOOL _detached;
    BOOL _contentChanged;
    NSData *_dataContent;
    id <MSCMSMessage> _embeddedContent;
    MSOID *_contentType;
    NSArray *_signers;
    NSSet *_digestAlgorithms;
    NSMutableSet *_certificates;
    NSNumber *_version;
    MSDecodeOptions *_options;
}

+ (id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id )arg3;
@property BOOL contentChanged; // @synthesize contentChanged=_contentChanged;
@property(retain) MSDecodeOptions *options; // @synthesize options=_options;
@property(retain) NSNumber *version; // @synthesize version=_version;
@property(retain) NSMutableSet *certificates; // @synthesize certificates=_certificates;
@property(retain) NSSet *digestAlgorithms; // @synthesize digestAlgorithms=_digestAlgorithms;
@property BOOL detached; // @synthesize detached=_detached;
@property(retain) NSArray *signers; // @synthesize signers=_signers;
@property(retain) MSOID *contentType; // @synthesize contentType=_contentType;
@property(retain) id <MSCMSMessage> embeddedContent; // @synthesize embeddedContent=_embeddedContent;
@property(retain, nonatomic) NSData *dataContent; // @synthesize dataContent=_dataContent;
// - (void).cxx_destruct;
@property(readonly) MSOID *type;
- (id)encodeMessageSecurityObject:(id )arg1;
- (id)calculateContentDigestWithAlgorithm:(id)arg1 error:(id )arg2;
- (void)addDigestAlgorithmFromSigner:(id)arg1;
- (BOOL)checkSignedPerRFC5652:(id )arg1;
- (BOOL)verifySignaturesAndSignersWithPolicies:(id)arg1 verifyTime:(id)arg2 error:(id )arg3;
- (BOOL)verifySignatures:(id )arg1;
- (struct __SecCertificate )getSignerCertificate:(NSUInteger)arg1 error:(id )arg2;
- (void)removeSignersWithIdentity:(struct __SecIdentity )arg1 error:(id )arg2;
- (void)removeSignersWithEmailAddress:(id)arg1 error:(id )arg2;
- (void)removeSignersWithCertificate:(struct __SecCertificate )arg1 error:(id )arg2;
- (void)removeSignersWithIndexes:(id)arg1 error:(id )arg2;
- (void)removeSignerCertificatesWithIndexes:(id)arg1;
- (BOOL)addSigner:(id)arg1 withChainMode:(NSUInteger)arg2 error:(id )arg3;
- (void)addSigner:(id)arg1 withCertificates:(id)arg2;
- (void)addSigner:(id)arg1;
- (id)initCertsOnlyWithCertificates:(id)arg1 error:(id )arg2;
- (id)initWithEmbeddedContent:(id)arg1 signer:(id)arg2 signerChainMode:(NSUInteger)arg3 error:(id )arg4;
- (id)initWithEmbeddedContent:(id)arg1 signer:(id)arg2 additionalCertificates:(id)arg3 error:(id )arg4;
- (id)initWithEmbeddedContent:(id)arg1 signer:(id)arg2 error:(id )arg3;
- (id)initWithDataContent:(id)arg1 isDetached:(BOOL)arg2 signer:(id)arg3 signerChainMode:(NSUInteger)arg4 error:(id )arg5;
- (id)initWithDataContent:(id)arg1 isDetached:(BOOL)arg2 signer:(id)arg3 additionalCertificates:(id)arg4 error:(id )arg5;
- (id)initWithDataContent:(id)arg1 isDetached:(BOOL)arg2 signer:(id)arg3 error:(id )arg4;
- (BOOL)addCertificatesForSigner:(id)arg1 mode:(NSUInteger)arg2 error:(id )arg3;

@end

