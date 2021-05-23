/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSString, SFRSAEncryptionOperation, SFSymmetricEncryptionOperation, _SFKeySpecifier;

@interface SFRSA_WrappedKeyEncryptionOperation : NSObject <Swift>

{
    id _wrappedKeyEncryptionOperationInternal;
}

@property (copy, nonatomic) SFRSAEncryptionOperation *keyWrappingOperation;
@property (copy, nonatomic) SFSymmetricEncryptionOperation *sessionEncryptionOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) _SFKeySpecifier *encryptionKeySpecifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)initWithKeyWrappingOperation:(id)arg1;
- (id)initWithKeyWrappingOperation:(id)arg1 sessionEncryptionOperation:(id)arg2;

@end
