/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, SFRevocationPolicy, SFTrustPolicy;

@interface SFTrustEvaluator_Ivars : NSObject

{
    SFTrustPolicy *trustPolicy;
    SFRevocationPolicy *revocationPolicy;
    NSArray *applicationAnchorCertificates;
    struct {
        unsigned int allowCertificateFetching:1;
        unsigned int trustSystemAnchorCertificates:1;
    } trustEvaluatorFlags;
}

@end
