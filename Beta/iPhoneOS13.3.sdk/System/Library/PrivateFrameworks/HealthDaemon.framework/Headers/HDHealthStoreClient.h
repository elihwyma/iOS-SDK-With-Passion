/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDClientAuthorizationOracle, HDProfile, HDXPCClient, HKHealthStoreConfiguration, NSString, NSXPCConnection, _HKEntitlements;

@interface HDHealthStoreClient : NSObject

{
    HDXPCClient *_XPCClient;
    HDProfile *_profile;
    HDClientAuthorizationOracle *_authorizationOracle;
    HKHealthStoreConfiguration *_configuration;
    NSString *_sourceBundleIdentifier;
    NSString *_defaultSourceBundleIdentifier;
}

@property (readonly) HDXPCClient *XPCClient;
@property (readonly) HDProfile *profile;
@property (readonly) _HKEntitlements *entitlements;
@property (readonly) HDClientAuthorizationOracle *authorizationOracle;
@property (readonly) NSXPCConnection *connection;
@property (copy, readonly) HKHealthStoreConfiguration *configuration;
@property (copy, readonly) NSString *sourceBundleIdentifier;
@property (copy, readonly) NSString *defaultSourceBundleIdentifier;

- (id)valueForEntitlement:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (_Bool)hasPrivateMetadataAccess;
- (_Bool)hasRequiredEntitlement:(id)arg1 error:(id *)arg2;
- (id)initWithXPCClient:(id)arg1 configuration:(id)arg2 profile:(id)arg3;
- (_Bool)shouldBypassAuthorization;
- (id)sourceVersionWithDaemon:(id)arg1;
- (_Bool)verifyHealthRecordsPermissionGrantedWithError:(id *)arg1;
- (id)filterWithQueryFilter:(id)arg1 objectType:(id)arg2;
- (id)baseDataEntityEncodingOptions;
- (id)_watchKitAvailabilityFilter;

@end
