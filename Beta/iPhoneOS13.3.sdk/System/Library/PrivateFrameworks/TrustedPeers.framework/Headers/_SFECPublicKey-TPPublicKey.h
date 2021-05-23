/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <SecurityFoundation/_SFECPublicKey.h>

@class NSString;

@interface _SFECPublicKey (TPPublicKey)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)spki;
- (_Bool)checkSignature:(id)arg1 matchesData:(id)arg2;

@end
