/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, _SFAsymmetricKeySpecifier;

@interface SFIdentityAttributes : NSObject

{
    id _identityAttributesInternal;
    NSString *persistentIdentifier;
    struct NSString *_privateKeyDomain;
}

@property (copy, nonatomic) NSString *identityName;
@property (copy, nonatomic, readonly) _SFAsymmetricKeySpecifier *keySpecifier;
@property (nonatomic, readonly) _Bool hasCertificate;
@property (copy, nonatomic, readonly) NSString *privateKeyDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic, readonly) NSString *persistentIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setKeySpecifier:(id)arg1;

@end
