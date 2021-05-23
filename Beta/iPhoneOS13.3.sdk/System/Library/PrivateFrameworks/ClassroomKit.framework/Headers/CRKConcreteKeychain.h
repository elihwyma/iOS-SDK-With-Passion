/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CRKConcreteKeychain : NSObject

{
    NSDictionary *_baseQueryAttributes;
}

@property (copy, nonatomic, readonly) NSDictionary *baseQueryAttributes;

+ (id)defaultKeychain;

- (id)description;
- (const void *)copyItemWithPersistentID:(id)arg1;
- (void)removeItemWithPersistentID:(id)arg1;
- (id)initWithBaseQueryAttributes:(id)arg1;
- (id)addItem:(void *)arg1 toAccessGroup:(id)arg2;
- (id)makeItemWithPersistentID:(id)arg1 expectedTypeID:(unsigned long long)arg2 creationBlock:(CDUnknownBlockType)arg3;
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
