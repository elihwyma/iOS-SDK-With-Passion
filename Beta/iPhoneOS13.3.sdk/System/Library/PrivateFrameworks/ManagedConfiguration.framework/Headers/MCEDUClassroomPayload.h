/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class CRKEDUPayload, NSArray, NSData, NSDictionary, NSString;

@interface MCEDUClassroomPayload : MCPayload

{
    CRKEDUPayload *_crk_payload;
}

@property (retain, nonatomic) CRKEDUPayload *crk_payload;
@property (copy, nonatomic, readonly) NSDictionary *configuration;
@property (copy, nonatomic) NSString *payloadCertificateUUID;
@property (retain, nonatomic) NSData *payloadCertificatePersistentID;
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorUUID;
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorPersistentID;
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorUUID;
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorPersistentID;
@property (copy, nonatomic) NSString *resourcePayloadCertificateUUID;
@property (retain, nonatomic) NSData *resourcePayloadCertificatePersistentID;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)translatedCRKError:(id)arg1;

@end
