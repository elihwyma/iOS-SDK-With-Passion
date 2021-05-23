/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class KTInclusionProofVerifier, LogEntry, MapEntry, NSData, TransparencyManagedDataStore;

@interface InclusionProof

@property (retain) KTInclusionProofVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (copy, nonatomic) NSData *uriVrfoutput;
@property (retain, nonatomic) MapEntry *mapEntry;
@property (nonatomic) _Bool hasMapEntry;
@property (retain, nonatomic) LogEntry *perApplicationTreeEntry;
@property (nonatomic) _Bool hasPerApplicationTreeEntry;
@property (retain, nonatomic) LogEntry *topLevelTreeEntry;
@property (nonatomic) _Bool hasTopLevelTreeEntry;

+ (id)descriptor;

- (_Bool)verifyWithError:(id *)arg1;
- (id)mapLeafWithError:(id *)arg1;

@end
