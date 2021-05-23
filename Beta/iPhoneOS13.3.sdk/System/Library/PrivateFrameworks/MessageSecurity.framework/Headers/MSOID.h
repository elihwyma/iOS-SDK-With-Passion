/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface MSOID : NSObject

{
    NSData *_OIDBytes;
    NSString *_OIDString;
    struct heim_oid _Asn1OID;
}

@property (readonly) struct heim_oid Asn1OID;
@property (readonly) const struct ccdigest_info *ccdigest;
@property (readonly) NSData *OIDBytes;
@property (readonly) NSString *OIDString;
@property (readonly) const struct __CFString *secKeyAlgorithm;

+ (id)OIDWithString:(id)arg1 error:(id *)arg2;
+ (id)OIDWithString:(id)arg1;
+ (id)OIDWithData:(id)arg1;
+ (id)OIDWithData:(id)arg1 error:(id *)arg2;
+ (id)digestOIDWithSignatureAlgorithm:(id)arg1 error:(id *)arg2;
+ (id)signatureAlgorithmOIDWithSecKeyAlgorithm:(struct __CFString *)arg1 error:(id *)arg2;
+ (id)OIDWithAsn1OID:(struct heim_oid *)arg1 error:(id *)arg2;
+ (id)RSASignatureOIDWithDigestAlgorithm:(id)arg1 error:(id *)arg2;
+ (id)ECSignatureOIDWithDigestAlgorithm:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToString:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithString:(id)arg1 error:(id *)arg2;
- (id)initDigestOIDWithSignatureAlgorithm:(id)arg1 error:(id *)arg2;
- (id)initSignatureOIDWithSecKeyAlgorithm:(struct __CFString *)arg1 error:(id *)arg2;
- (id)initWithAsn1OID:(struct heim_oid *)arg1 error:(id *)arg2;
- (id)initRSASignatureOIDWithDigestAlgorithm:(id)arg1 error:(id *)arg2;
- (id)initECSignatureOIDWithDigestAlgorithm:(id)arg1 error:(id *)arg2;
- (_Bool)setAsn1OidFromOIDString:(id)arg1 error:(id *)arg2;

@end
