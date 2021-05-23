/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class KTPatConfigInclusionProofVerifier, LogEntry, TransparencyManagedDataStore;

@interface PatConfigInclusionProof

@property (retain) KTPatConfigInclusionProofVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (readonly) unsigned long long patLogBeginningMs;
@property (readonly) unsigned long long tltLogBeginningMs;
@property (retain, nonatomic) LogEntry *perApplicationTreeEntry;
@property (nonatomic) _Bool hasPerApplicationTreeEntry;
@property (retain, nonatomic) LogEntry *topLevelTreeEntry;
@property (nonatomic) _Bool hasTopLevelTreeEntry;

+ (id)descriptor;

- (_Bool)verifyWithError:(id *)arg1;
- (id)vrfPublicKeyWithError:(id *)arg1;

@end
