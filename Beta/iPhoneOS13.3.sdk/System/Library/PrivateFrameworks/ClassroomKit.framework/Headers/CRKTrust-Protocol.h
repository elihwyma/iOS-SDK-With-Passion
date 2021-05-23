/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/Swift-Protocol.h>

@protocol CRKCertificate;

@protocol CRKTrust <Swift>

@property (nonatomic, readonly) id <CRKCertificate> leafCertificate;
@property (nonatomic, readonly) struct __SecTrust *underlyingTrust;

@end
