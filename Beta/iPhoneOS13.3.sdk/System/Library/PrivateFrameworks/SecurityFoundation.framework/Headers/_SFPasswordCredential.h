/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/_SFCredential.h>

@class NSString;

@interface _SFPasswordCredential : _SFCredential

{
    NSString *_username;
    NSString *_password;
}

@property (copy, nonatomic, getter=_cachedPassword) NSString *password;
@property (copy, nonatomic) NSString *username;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2 primaryServiceIdentifier:(id)arg3 supplementaryServiceIdentifiers:(id)arg4;
- (id)descriptionShowingPassword:(_Bool)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2 primaryServiceIdentifier:(id)arg3;
- (id)_initWithUsername:(id)arg1 primaryServiceIdentifier:(id)arg2 supplementaryServiceIdentifiers:(id)arg3;
- (void)usePasswordWithHandler:(CDUnknownBlockType)arg1;

@end
