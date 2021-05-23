/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, _SFRSAKeySpecifier;

@interface SFRSAEncryptionOperation : NSObject

{
    id _rsaEncryptionOperationInternal;
}

@property (copy, nonatomic) _SFRSAKeySpecifier *encryptionKeySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_defaultEncryptionOperation;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;

@end
