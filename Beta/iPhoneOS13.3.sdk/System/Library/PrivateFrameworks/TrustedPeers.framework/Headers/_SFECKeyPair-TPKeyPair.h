/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <SecurityFoundation/_SFECKeyPair.h>

@class NSString;

@interface _SFECKeyPair (TPKeyPair)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)signatureForData:(id)arg1 withError:(id *)arg2;

@end
