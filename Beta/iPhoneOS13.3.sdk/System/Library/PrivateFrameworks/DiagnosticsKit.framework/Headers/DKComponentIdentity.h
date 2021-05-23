/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class DKCanonicalVersion, NSSet, NSString;

@interface DKComponentIdentity : NSObject

{
    struct NSString *_type;
    struct NSString *_identifier;
    struct NSString *_domain;
    DKCanonicalVersion *_version;
    struct NSSet *_resources;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) DKCanonicalVersion *version;
@property (nonatomic, readonly) NSSet *resources;

+ (_Bool)supportsSecureCoding;
+ (id)componentIdentityWithDomain:(struct NSString *)arg1 version:(struct NSString *)arg2 resources:(struct NSSet *)arg3;
+ (id)componentIdentityWithType:(struct NSString *)arg1 identifier:(struct NSString *)arg2 version:(struct NSString *)arg3 resources:(struct NSSet *)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isNewerThan:(id)arg1;
- (id)initWithDomain:(struct NSString *)arg1 version:(struct NSString *)arg2 resources:(struct NSSet *)arg3;
- (id)initWithType:(struct NSString *)arg1 identifier:(struct NSString *)arg2 version:(struct NSString *)arg3 resources:(struct NSSet *)arg4;
- (_Bool)isEqualToComponentIdentity:(id)arg1;

@end
