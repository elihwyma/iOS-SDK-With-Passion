/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class TransparencyTrustedKeyStore;

@interface TransparencyLogEntryVerifier : NSObject

{
    TransparencyTrustedKeyStore *_trustedKeyStore;
}

@property (retain) TransparencyTrustedKeyStore *trustedKeyStore;

- (id)initWithTrustedKeyStore:(id)arg1;
- (_Bool)verifyLogEntryWithLogLeaf:(id)arg1 position:(unsigned long long)arg2 hashesToRoot:(id)arg3 signedLogHead:(id)arg4 error:(id *)arg5;
- (_Bool)verifyInclusionOfLogLeaf:(id)arg1 position:(unsigned long long)arg2 treeSize:(unsigned long long)arg3 treeHead:(id)arg4 hashPath:(id)arg5 error:(id *)arg6;

@end
