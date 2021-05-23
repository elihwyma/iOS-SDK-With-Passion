/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class MSOID, NSData;

@interface MSAlgorithmIdentifier : NSObject

{
    MSOID *_algorithm;
    NSData *_parameters;
    struct AlgorithmIdentifier *_asn1AlgId;
}

@property (readonly) struct AlgorithmIdentifier *asn1AlgId;
@property (readonly) MSOID *algorithm;
@property (readonly) NSData *parameters;

+ (id)algorithmIdentifierWithOID:(id)arg1;
+ (id)algorithmIdentifierWithAsn1AlgId:(struct AlgorithmIdentifier *)arg1 error:(id *)arg2;
+ (id)digestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct AlgorithmIdentifier *)encode;
- (id)initWithOID:(id)arg1;
- (id)initWithAsn1AlgId:(struct AlgorithmIdentifier *)arg1 error:(id *)arg2;
- (id)initDigestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id *)arg2;
- (id)initWithOID:(id)arg1 parameters:(id)arg2;
- (id)signatureAlgorithmWithDigestAlgorithm:(id)arg1 error:(id *)arg2;

@end
