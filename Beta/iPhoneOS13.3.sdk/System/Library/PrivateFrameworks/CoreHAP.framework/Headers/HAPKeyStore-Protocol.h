/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/Swift-Protocol.h>

@class NSString;

@protocol HAPKeyStore <Swift>

@property (nonatomic, readonly) NSString *activeControllerPairingIdentifier;

- (unsigned short)getLocalPairingIdentity: /* Error: Ran out of types for this method. */;
- (unsigned short)registerAccessoryWithHomeKit:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getControllerPublicKey:secretKey:username:allowCreation:error: /* Error: Ran out of types for this method. */;
- (unsigned short)readPublicKeyForAccessoryName:registeredWithHomeKit:error: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAccessoryKeyForName:error: /* Error: Ran out of types for this method. */;
- (unsigned short)savePublicKey:forAccessoryName:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getControllerPublicKey:secretKey:keyPair:username:allowCreation:error: /* Error: Ran out of types for this method. */;
- (unsigned short)saveKeyPair:username:syncable:error: /* Error: Ran out of types for this method. */;
- (unsigned short)removeControllerKeyPairLeaveTombstone:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getOrCreateLocalPairingIdentity: /* Error: Ran out of types for this method. */;
- (unsigned short)saveLocalPairingIdentity:syncable:error: /* Error: Ran out of types for this method. */;
- (unsigned short)deserializeKeyPair:publicKey:secretKey:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllAvailableControllerPublicKeys:secretKeys:userNames:error: /* Error: Ran out of types for this method. */;
- (unsigned short)updateActiveControllerPairingIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)removeControllerKeyPairWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)updateCurrentiCloudIdentifier:controllerPairingIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getCurrentiCloudIdentifier:controllerPairingIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)removeControllerKeyPairForIdentifier:leaveTombstone:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getMetadataSecretKey:error: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAccessoryKeys: /* Error: Ran out of types for this method. */;

@end
