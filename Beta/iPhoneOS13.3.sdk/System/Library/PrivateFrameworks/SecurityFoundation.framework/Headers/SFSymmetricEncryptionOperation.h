/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, _SFSymmetricKeySpecifier;

@interface SFSymmetricEncryptionOperation : NSObject

{
    id _symmetricEncryptionOperationInternal;
}

@property (nonatomic) long long mode;
@property (copy, nonatomic) _SFSymmetricKeySpecifier *encryptionKeySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_defaultEncryptionOperation;
+ (long long)_defaultEncryptionMode;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id *)arg4;

@end
