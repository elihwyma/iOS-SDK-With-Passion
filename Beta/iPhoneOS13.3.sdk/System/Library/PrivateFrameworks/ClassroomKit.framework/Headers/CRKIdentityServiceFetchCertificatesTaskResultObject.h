/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKIdentityServiceFetchCertificatesTaskResultObject : CATTaskResultObject

{
    NSDictionary *_identityCertificateSetsByConsumerID;
}

@property (copy, nonatomic) NSDictionary *identityCertificateSetsByConsumerID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
