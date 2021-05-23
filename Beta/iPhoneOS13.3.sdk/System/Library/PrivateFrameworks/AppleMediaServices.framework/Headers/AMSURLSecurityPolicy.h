/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface AMSURLSecurityPolicy : NSObject

{
    long long _trustMode;
    NSSet *_pinnedCertificates;
}

@property (nonatomic) long long trustMode;
@property (retain, nonatomic) NSSet *pinnedCertificates;

+ (id)defaultPolicy;

- (id)initWithTrustMode:(long long)arg1;
- (id)initWithTrustMode:(long long)arg1 pinnedCertificated:(id)arg2;
- (_Bool)_evaluateExtendedValidationWithTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;
- (_Bool)_evaluatePinnedCertificatesWithTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;
- (_Bool)_shouldSkipValidation;
- (_Bool)evaluateTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;

@end
