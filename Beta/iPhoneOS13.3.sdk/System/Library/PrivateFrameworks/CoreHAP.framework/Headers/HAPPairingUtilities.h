/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@interface HAPPairingUtilities : HMFObject

+ (id)createAddPairingRequetForPairingIdentity:(id)arg1 error:(id *)arg2;
+ (id)createRemovePairingRequetForPairingIdentity:(id)arg1 error:(id *)arg2;
+ (_Bool)parseRemovePairingResponse:(id)arg1 error:(id *)arg2;
+ (_Bool)parseAddPairingResponse:(id)arg1 error:(id *)arg2;
+ (id)createListPairingsRequest:(id *)arg1;
+ (id)parseListPairingsResponse:(id)arg1 error:(id *)arg2;

@end
