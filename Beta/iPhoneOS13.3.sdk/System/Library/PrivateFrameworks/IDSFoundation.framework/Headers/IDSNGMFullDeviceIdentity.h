/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@interface IDSNGMFullDeviceIdentity : NSObject

+ (id)identityWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id *)arg3;

- (id)dataRepresentationWithError:(id *)arg1;
- (id)publicDeviceIdentityWithError:(id *)arg1;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id *)arg3;
- (void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(CDUnknownBlockType)arg3;
- (_Bool)eraseFromKeyChain:(id *)arg1;
- (_Bool)shouldRollEncryptionIdentity;
- (id)keyRollingTicketWithError:(id *)arg1;
- (_Bool)updateWithRegisteredTicket:(id)arg1 error:(id *)arg2;

@end
