/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSData, NSSet, NSUUID;

@interface CRKIdentitySharingSendAdvertisingIdentifierAndCertificateRequest : CATTaskRequest

{
    NSSet *_recipients;
    NSUUID *_advertisingIdentifier;
    NSData *_activeCertificateData;
    NSData *_stagedCertificateData;
}

@property (retain, nonatomic) NSSet *recipients;
@property (retain, nonatomic) NSUUID *advertisingIdentifier;
@property (retain, nonatomic) NSData *activeCertificateData;
@property (retain, nonatomic) NSData *stagedCertificateData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
