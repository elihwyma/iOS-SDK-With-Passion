/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCProfile.h>

@class MCProfileServiceProfile, NSArray, NSNumber;

@interface MCConfigurationProfile : MCProfile

{
    NSArray *_payloads;
    NSArray *_managedPayloads;
    _Bool _isCloudProfile;
    _Bool _isCloudLocked;
    _Bool _isMDMProfile;
    MCProfileServiceProfile *_OTAProfile;
    NSNumber *_isCloudProfileNum;
    NSNumber *_isCloudLockedNum;
}

@property (retain, nonatomic) NSNumber *isCloudProfileNum;
@property (retain, nonatomic) NSNumber *isCloudLockedNum;
@property (retain, nonatomic) MCProfileServiceProfile *OTAProfile;
@property (nonatomic) _Bool isCloudProfile;
@property (nonatomic) _Bool isCloudLocked;
@property (nonatomic) _Bool isMDMProfile;

- (id)description;
- (id)stubDictionary;
- (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;
- (id)payloads;
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;
- (id)_sortPayloads:(id)arg1;
- (id)payloadWithUUID:(id)arg1;
- (struct __SecCertificate *)copyCertificateFromPayloadWithUUID:(id)arg1;
- (id)_subjectSummaryFromCertificate:(struct __SecCertificate *)arg1;
- (void)_sortPayloads;
- (_Bool)isManagedByMDM;
- (id)installationWarningsIncludeUnsignedProfileWarning:(_Bool)arg1;
- (id)_localizedPayloadSummaryByType:(id)arg1;
- (id)managedPayloads;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)arg1;
- (id)initWithDictionary:(id)arg1 options:(id)arg2 signerCerts:(id)arg3 allowEmptyPayload:(_Bool)arg4 outError:(id *)arg5;
- (_Bool)isManagedByProfileService;
- (id)localizedPayloadSummaryByType;
- (id)localizedManagedPayloadSummaryByType;
- (id)earliestCertificateExpiryDate;
- (void)replacePayloadWithUUID:(id)arg1 withPayload:(id)arg2;

@end
