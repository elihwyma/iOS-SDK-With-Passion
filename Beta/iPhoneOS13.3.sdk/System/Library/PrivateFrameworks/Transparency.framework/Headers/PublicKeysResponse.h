/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData, NSMutableArray, PatConfigInclusionProof, Signature;

@interface PublicKeysResponse

@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *appLeafsArray;
@property (nonatomic, readonly) unsigned long long appLeafsArray_Count;
@property (retain, nonatomic) NSMutableArray *tltLeafsArray;
@property (nonatomic, readonly) unsigned long long tltLeafsArray_Count;
@property (retain, nonatomic) NSMutableArray *intermediatesArray;
@property (nonatomic, readonly) unsigned long long intermediatesArray_Count;
@property (copy, nonatomic) NSData *vrfKey;
@property (retain, nonatomic) Signature *vrfSignature;
@property (nonatomic) _Bool hasVrfSignature;
@property (copy, nonatomic) NSData *vrfPublicKey;
@property (nonatomic) unsigned long long tltBeginningMs;
@property (retain, nonatomic) PatConfigInclusionProof *patConfigProof;
@property (nonatomic) _Bool hasPatConfigProof;

+ (id)descriptor;

@end
