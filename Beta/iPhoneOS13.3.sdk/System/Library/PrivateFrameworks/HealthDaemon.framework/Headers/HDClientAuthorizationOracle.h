/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSString, _HKEntitlements;

@interface HDClientAuthorizationOracle : NSObject

{
    HDProfile *_profile;
    NSString *_sourceBundleIdentifier;
    _HKEntitlements *_entitlements;
    _Bool _clientHasPrivateEntitlement;
}

- (id)init;
- (id)readAuthorizationStatusesForTypes:(id)arg1 error:(id *)arg2;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id *)arg2;
- (_Bool)_shouldBypassAuthorization;
- (id)initWithSourceBundleIdentifier:(id)arg1 entitlements:(id)arg2 profile:(id)arg3;
- (id)filteredObjectsForReadAuthorization:(id)arg1 anchor:(id)arg2 error:(id *)arg3;
- (_Bool)performReadAuthorizationTransactionWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)additionalAuthorizationPredicateForObjectType:(id)arg1 error:(id *)arg2;

@end
