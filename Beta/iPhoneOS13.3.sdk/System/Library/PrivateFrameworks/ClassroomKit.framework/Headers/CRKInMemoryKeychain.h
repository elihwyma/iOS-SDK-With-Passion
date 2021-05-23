/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CRKInMemoryKeychain : NSObject

{
    NSMutableDictionary *_keychainItemsByPersistentID;
}

@property (nonatomic, readonly) NSMutableDictionary *keychainItemsByPersistentID;

- (id)init;
- (void)removeItemWithPersistentID:(id)arg1;
- (id)addItem:(id)arg1 toAccessGroup:(id)arg2;
- (id)addCertificate:(id)arg1 toAccessGroup:(id)arg2;
- (id)addIdentity:(id)arg1 toAccessGroup:(id)arg2;
- (id)addPrivateKey:(id)arg1 toAccessGroup:(id)arg2;
- (id)certificateWithPersistentID:(id)arg1;
- (id)identityWithPersistentID:(id)arg1;
- (id)privateKeyWithPersistentID:(id)arg1;
- (id)makeIdentityWithConfiguration:(id)arg1;
- (id)makeIdentityWithCertificate:(id)arg1 privateKey:(id)arg2;
- (id)makeCertificateWithData:(id)arg1;
- (id)makePrivateKeyWithData:(id)arg1;

@end
