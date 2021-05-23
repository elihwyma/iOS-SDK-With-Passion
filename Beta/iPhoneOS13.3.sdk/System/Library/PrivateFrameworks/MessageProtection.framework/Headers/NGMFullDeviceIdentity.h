/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class NSMutableArray, SigningKey;

@interface NGMFullDeviceIdentity : NSObject

{
    SigningKey *_deviceSigningKey;
    NSMutableArray *_devicePrekeys;
}

@property (retain, nonatomic) SigningKey *deviceSigningKey;
@property (retain, nonatomic) NSMutableArray *devicePrekeys;

+ (id)identityWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id *)arg3;
+ (id)identityWithAccess:(id)arg1 error:(id *)arg2;

- (id)description;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)publicDeviceIdentityWithError:(id *)arg1;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id *)arg3;
- (void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(CDUnknownBlockType)arg3;
- (_Bool)eraseFromKeyChain:(id *)arg1;
- (_Bool)shouldRollEncryptionIdentity;
- (id)keyRollingTicketWithError:(id *)arg1;
- (_Bool)updateWithRegisteredTicket:(id)arg1 error:(id *)arg2;
- (_Bool)deleteKeyWithTag:(id)arg1;
- (_Bool)requiresMigration;
- (void)postMigrationKeychainCleanup;
- (id)signDataWithFormatter:(id)arg1 error:(id *)arg2;
- (id)initWithSigningKey:(id)arg1 devicePrekeys:(id)arg2;

@end
