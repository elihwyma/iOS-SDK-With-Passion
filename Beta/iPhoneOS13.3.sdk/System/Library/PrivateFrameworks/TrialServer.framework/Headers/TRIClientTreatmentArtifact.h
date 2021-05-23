/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@class NSArray, NSData, NSDictionary, NSString, TRIClientTreatment;

@interface TRIClientTreatmentArtifact

{
    TRIClientTreatment *_treatment;
    struct NSString *_treatmentId;
    NSArray *_assetUrls;
    NSString *_encodedTreatmentDefinitionSignature;
    NSData *_publicCertificate;
    NSArray *_assetSignatures;
    NSDictionary *_treatmentUrls;
}

@property (retain, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) NSData *encodedTreatmentDefinition;
@property (retain, nonatomic) NSArray *assetUrls;
@property (readonly) TRIClientTreatment *treatment;
@property (retain, nonatomic) NSString *encodedTreatmentDefinitionSignature;
@property (retain, nonatomic) NSData *publicCertificate;
@property (retain, nonatomic) NSArray *assetSignatures;
@property (retain, nonatomic) NSDictionary *treatmentUrls;

+ (id)baseUrlForTreatment:(struct NSString *)arg1 namespaceId:(unsigned int)arg2;
+ (id)artifactWithTreatmentId:(struct NSString *)arg1;
+ (id)artifactFromCloudKitResult:(id)arg1 assetUrls:(id)arg2;
+ (id)loadArtifactWithTreatmentId:(struct NSString *)arg1;
+ (id)urlForDefaultTreatmentWithNamespaceId:(unsigned int)arg1;
+ (id)urlForTreatment:(struct NSString *)arg1 namespaceId:(unsigned int)arg2;

- (id)init;
- (_Bool)isValid;
- (id)url;
- (id)_assetMap;
- (void)loadPropertiesFromDictionary:(id)arg1;
- (id)savePropertiesToDictionary;
- (_Bool)removeFromUrl:(id)arg1;
- (_Bool)saveToNamespaceTreatments;
- (id)initWithTreatmentId:(struct NSString *)arg1;
- (_Bool)updateFileValue:(id)arg1;
- (_Bool)copyAssets;
- (id)assetUrlForFactor:(id)arg1 treatmentId:(struct NSString *)arg2;
- (id)urlsFromStrings:(id)arg1;
- (id)stringsFromUrls:(id)arg1;
- (_Bool)updateAssetsInTreatment;

@end
