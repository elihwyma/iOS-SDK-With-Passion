/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData, NSMutableArray, SignedMapHead, TransparencyMapEntryVerifier;

@interface MapEntry

@property (retain) TransparencyMapEntryVerifier *verifier;
@property (retain, nonatomic) SignedMapHead *smh;
@property (nonatomic) _Bool hasSmh;
@property (retain, nonatomic) NSMutableArray *hashesOfPeersInPathToRootArray;
@property (nonatomic, readonly) unsigned long long hashesOfPeersInPathToRootArray_Count;
@property (copy, nonatomic) NSData *mapLeaf;

+ (id)descriptor;

- (_Bool)verifyWithError:(id *)arg1;

@end
