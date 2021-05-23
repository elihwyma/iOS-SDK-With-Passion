/*
 Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
 */

#import <Foundation/NSObject.h>

@class NSString, _SWCApplicationIdentifier, _SWCDomain;

@interface _SWCServiceSpecifier : NSObject

{
    _SWCApplicationIdentifier *_applicationIdentifier;
    _SWCDomain *_domain;
    NSString *_serviceType;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *applicationIdentifierPrefix;
@property (readonly, getter=isDomainWildcard) _Bool domainWildcard;
@property (readonly, getter=isValid) _Bool valid;
@property (readonly) _SWCApplicationIdentifier *SWCApplicationIdentifier;
@property (readonly) _SWCDomain *SWCDomain;
@property (readonly, getter=isFullySpecified) _Bool fullySpecified;
@property (readonly) NSString *serviceType;
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSString *domain;

+ (_Bool)supportsSecureCoding;
+ (id)serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id *)arg3;
+ (id)serviceSpecifiersWithEntitlementValue:(id)arg1 error:(id *)arg2;
+ (id)_serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id *)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3;
- (id)_initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3;

@end
