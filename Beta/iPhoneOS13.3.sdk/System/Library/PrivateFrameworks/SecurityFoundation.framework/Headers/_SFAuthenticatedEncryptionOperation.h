/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, _SFAESKeySpecifier;

@interface _SFAuthenticatedEncryptionOperation : NSObject

{
    id _authenticatedEncryptionOperationInternal;
}

@property (copy, nonatomic) _SFAESKeySpecifier *encryptionKeySpecifier;
@property (nonatomic) long long authenticationMode;
@property (nonatomic) long long authenticationCodeLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_defaultEncryptionOperation;
+ (long long)_defaultAuthenticationMode;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id *)arg4;
- (id)initWithKeySpecifier:(id)arg1 authenticationMode:(long long)arg2;
- (id)encrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 ivGenerator:(id)arg4 error:(id *)arg5;
- (id)decrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id *)arg4;
- (id)encrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id *)arg4;

@end
