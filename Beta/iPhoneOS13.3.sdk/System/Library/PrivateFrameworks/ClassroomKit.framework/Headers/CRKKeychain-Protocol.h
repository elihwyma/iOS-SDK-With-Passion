/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@protocol CRKKeychain

- (unsigned short)removeItemWithPersistentID: /* Error: Ran out of types for this method. */;
- (unsigned short)addCertificate:toAccessGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)addIdentity:toAccessGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)addPrivateKey:toAccessGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)certificateWithPersistentID: /* Error: Ran out of types for this method. */;
- (unsigned short)identityWithPersistentID: /* Error: Ran out of types for this method. */;
- (unsigned short)privateKeyWithPersistentID: /* Error: Ran out of types for this method. */;
- (unsigned short)makeIdentityWithConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)makeIdentityWithCertificate:privateKey: /* Error: Ran out of types for this method. */;
- (unsigned short)makeCertificateWithData: /* Error: Ran out of types for this method. */;
- (unsigned short)makePrivateKeyWithData: /* Error: Ran out of types for this method. */;

@end
