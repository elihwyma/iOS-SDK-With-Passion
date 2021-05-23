/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSMPFullLegacyIdentity, IDSNGMFullDeviceIdentity, NSData, NSNumber;

@interface IDSMPFullDeviceIdentityContainer : NSObject

{
    IDSMPFullLegacyIdentity *_legacyFullIdentity;
    IDSNGMFullDeviceIdentity *_ngmFullDeviceIdentity;
    NSNumber *_ngmVersion;
    NSData *_cachedLegacySerializedData;
}

@property (retain, nonatomic) NSData *cachedLegacySerializedData;
@property (nonatomic, readonly) IDSMPFullLegacyIdentity *legacyFullIdentity;
@property (nonatomic, readonly) IDSNGMFullDeviceIdentity *ngmFullDeviceIdentity;
@property (nonatomic, readonly) NSNumber *ngmVersion;

+ (id)_identityWithLegacyFullIdentity:(id)arg1 ngmFullDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 legacyFullIdentitySerializedData:(id)arg4 error:(id *)arg5;
+ (id)identityWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (id)identityWithLegacyFullIdentity:(id)arg1 ngmFullDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 error:(id *)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)initWithFullLegacyIdentity:(id)arg1 ngmFullDeviceidentity:(id)arg2 ngmVersion:(id)arg3 legacyFullIdentitySerializedData:(id)arg4;
- (id)publicIdentityWithError:(id *)arg1;
- (id)_legacyUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id *)arg3;
- (id)_ngmSynchronouslyUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id *)arg3;
- (id)_ngmUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2;
- (id)_ngmValidateEncryptingAndSigningIdentity:(id)arg1 forMessage:(id)arg2;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 usingIdentityWithIdentifier:(id)arg3 error:(id *)arg4;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 usingIdentityWithIdentifier:(id)arg3;

@end
