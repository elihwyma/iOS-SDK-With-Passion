/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class CRKIdentityMarkedCertificate;

@interface CRKIdentityServiceFetchMyCertificatesTaskResultObject : CATTaskResultObject

{
    CRKIdentityMarkedCertificate *_activeMarkedCertificate;
    CRKIdentityMarkedCertificate *_stagedMarkedCertificate;
}

@property (copy, nonatomic) CRKIdentityMarkedCertificate *activeMarkedCertificate;
@property (copy, nonatomic) CRKIdentityMarkedCertificate *stagedMarkedCertificate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
