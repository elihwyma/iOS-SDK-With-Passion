/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSArray, SFRevocationPolicy, SFTrustPolicy;

@interface SFTrustEvaluator : NSObject <Swift>

{
    id _trustEvaluatorInternal;
    _Bool _allowCertificateFetching;
    _Bool _trustSystemAnchorCertificates;
    SFTrustPolicy *_trustPolicy;
    SFRevocationPolicy *_revocationPolicy;
    NSArray *_applicationAnchorCertificates;
}

@property (copy, nonatomic) SFTrustPolicy *trustPolicy;
@property (copy, nonatomic) SFRevocationPolicy *revocationPolicy;
@property (copy, nonatomic) NSArray *applicationAnchorCertificates;
@property (nonatomic) _Bool allowCertificateFetching;
@property (nonatomic) _Bool trustSystemAnchorCertificates;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrustPolicy:(id)arg1;
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2;
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2 applicationAnchorCertificates:(id)arg3 allowCertificateFetching:(_Bool)arg4 trustSystemAnchorCertificates:(_Bool)arg5;
- (void)evaluateCertificateChain:(id)arg1 forDate:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end
