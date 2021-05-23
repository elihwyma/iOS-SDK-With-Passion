/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/Swift-Protocol.h>

@protocol CRKCertificate, CRKPrivateKey;

@protocol CRKIdentity <Swift>

@property (nonatomic, readonly) id <CRKCertificate> certificate;
@property (nonatomic, readonly) id <CRKPrivateKey> privateKey;
@property (nonatomic, readonly) struct __SecIdentity *underlyingIdentity;

@end
