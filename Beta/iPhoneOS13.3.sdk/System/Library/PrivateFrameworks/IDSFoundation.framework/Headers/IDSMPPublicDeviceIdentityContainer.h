/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSMPPublicLegacyIdentity, IDSNGMPublicDeviceIdentity, NSNumber;

@interface IDSMPPublicDeviceIdentityContainer : NSObject

{
    IDSMPPublicLegacyIdentity *_legacyPublicIdentity;
    IDSNGMPublicDeviceIdentity *_ngmPublicDeviceIdentity;
    NSNumber *_ngmVersion;
}

@property (nonatomic, readonly) IDSMPPublicLegacyIdentity *legacyPublicIdentity;
@property (nonatomic, readonly) IDSNGMPublicDeviceIdentity *ngmPublicDeviceIdentity;
@property (nonatomic, readonly) NSNumber *ngmVersion;

+ (id)identityWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (id)identityWithLegacyPublicIdentity:(id)arg1 ngmPublicDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 error:(id *)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)initWithLegacyPublicIdentity:(id)arg1 ngmPublicDeviceIdentity:(id)arg2 ngmVersion:(id)arg3;
- (id)_legacySealMessage:(id)arg1 signedWithFullIdentity:(id)arg2 error:(id *)arg3;
- (id)_ngmSealMessage:(id)arg1 signedWithFullIdentity:(id)arg2 error:(id *)arg3;
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 usingIdentitiesWithIdentifier:(id)arg3 error:(id *)arg4;
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 usedIdentityWithIdentifier:(id *)arg3 error:(id *)arg4;

@end
