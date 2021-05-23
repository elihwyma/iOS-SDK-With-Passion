/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/Swift-Protocol.h>

@class NSArray, NSData, NSDateInterval, NSString;

@protocol CRKCertificate <Swift>

@property (copy, nonatomic, readonly) NSArray *commonNames;
@property (copy, nonatomic, readonly) NSString *fingerprint;
@property (copy, nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) NSDateInterval *validityDateInterval;
@property (nonatomic, readonly, getter=isTemporallyValid) _Bool temporallyValid;
@property (nonatomic, readonly, getter=isCertificateAuthority) _Bool certificateAuthority;
@property (nonatomic, readonly) unsigned int hashingAlgorithm;
@property (nonatomic, readonly) long long keySizeInBits;
@property (nonatomic, readonly) struct __SecCertificate *underlyingCertificate;

@end
