/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class InclusionProof, NSData, NSDictionary, NSMutableArray, VRFWitness;

@interface QueryResponse

@property (readonly) NSDictionary *metadata;
@property (nonatomic) int status;
@property (retain, nonatomic) InclusionProof *inclusionProof;
@property (nonatomic) _Bool hasInclusionProof;
@property (retain, nonatomic) NSMutableArray *pendingSmtsArray;
@property (nonatomic, readonly) unsigned long long pendingSmtsArray_Count;
@property (retain, nonatomic) VRFWitness *uriWitness;
@property (nonatomic) _Bool hasUriWitness;
@property (copy, nonatomic) NSData *accountId;
@property (retain, nonatomic) NSMutableArray *deviceWitnessesArray;
@property (nonatomic, readonly) unsigned long long deviceWitnessesArray_Count;

+ (id)descriptor;

- (void)setMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 key:(id)arg2;

@end
