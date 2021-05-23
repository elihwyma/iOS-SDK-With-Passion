/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject

{
    NSString *_applicationIdentifier;
    NSDictionary *_entitlementValues;
}

@property (copy, nonatomic, readonly) NSDictionary *entitlementValues;

+ (id)entitlementsForCurrentTaskWithError:(id *)arg1;
+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (id)_entitlementsWithSecTask:(struct __SecTask *)arg1 valueOverrides:(id)arg2 error:(id *)arg3;
+ (id)_allowedEntitlementsSet;
+ (id)entitlementsWithDictionary:(id)arg1;
+ (void)_setEntitlementsForCurrentTask:(id)arg1;
+ (id)entitlementsWithConnection:(id)arg1 error:(id *)arg2;
+ (id)entitlementsWithApplicationIdentifier:(id)arg1;

- (id)init;
- (id)description;
- (id)valueForEntitlement:(id)arg1;
- (id)applicationIdentifier;
- (_Bool)hasEntitlement:(id)arg1;
- (id)stringForEntitlement:(id)arg1;
- (id)typesForWriteAuthorizationOverride;
- (id)typesForReadAuthorizationOverride;
- (id)_initWithEntitlementValues:(id)arg1;
- (_Bool)arrayEntitlement:(id)arg1 containsString:(id)arg2;
- (id)_typesFromIdentifierArray:(id)arg1;
- (_Bool)hasPrivateMetadataAccess;
- (_Bool)hasAccessEntitlementWithIdentifer:(id)arg1;
- (_Bool)hasPrivateAccessEntitlementWithIdentifer:(id)arg1;

@end
