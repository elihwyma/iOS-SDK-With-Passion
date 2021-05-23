/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class CRKIdentityMarkedCertificate;

@interface CRKIdentityServicePublishCertificatesTaskRequest : CATTaskRequest

{
    CRKIdentityMarkedCertificate *_activeMarkedCertificate;
    CRKIdentityMarkedCertificate *_stagedMarkedCertificate;
}

@property (retain, nonatomic) CRKIdentityMarkedCertificate *activeMarkedCertificate;
@property (retain, nonatomic) CRKIdentityMarkedCertificate *stagedMarkedCertificate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
