/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSData, TransparencyTrustedKeyStore;

@interface TransparencyMapEntryVerifier : NSObject

{
    TransparencyTrustedKeyStore *_trustedKeyStore;
    NSData *_entryPosition;
}

@property (retain) NSData *entryPosition;
@property (retain) TransparencyTrustedKeyStore *trustedKeyStore;

+ (id)peerIndexAtDepth:(unsigned long long)arg1 leafIndex:(id)arg2;
+ (id)leafHash:(id)arg1 index:(id)arg2 treeId:(unsigned long long)arg3;
+ (id)emptyAtDepth:(unsigned long long)arg1 leafIndex:(id)arg2 treeId:(unsigned long long)arg3;
+ (id)interiorNodeForLeftData:(id)arg1 rightData:(id)arg2;

- (_Bool)verifyMapEntryWithMapLeaf:(id)arg1 hashesToRoot:(id)arg2 signedMapHead:(id)arg3 error:(id *)arg4;
- (id)initWithPositon:(id)arg1 trustedKeyStore:(id)arg2;
- (_Bool)verifyInclusionOfMapLeaf:(id)arg1 position:(id)arg2 treeHead:(id)arg3 treeId:(unsigned long long)arg4 hashPath:(id)arg5 error:(id *)arg6;

@end
