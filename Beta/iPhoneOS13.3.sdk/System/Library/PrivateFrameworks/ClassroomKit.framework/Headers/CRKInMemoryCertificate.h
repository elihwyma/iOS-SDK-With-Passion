/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKIdentityConfiguration, NSArray, NSData, NSDateInterval, NSString;

@interface CRKInMemoryCertificate : NSObject

{
    CRKIdentityConfiguration *_configuration;
}

@property (copy, nonatomic, readonly) CRKIdentityConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *commonNames;
@property (copy, nonatomic, readonly) NSString *fingerprint;
@property (copy, nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) NSDateInterval *validityDateInterval;
@property (nonatomic, readonly, getter=isTemporallyValid) _Bool temporallyValid;
@property (nonatomic, readonly, getter=isCertificateAuthority) _Bool certificateAuthority;
@property (nonatomic, readonly) unsigned int hashingAlgorithm;
@property (nonatomic, readonly) long long keySizeInBits;
@property (nonatomic, readonly) struct __SecCertificate *underlyingCertificate;

- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end
