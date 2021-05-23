/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSData, NSString, geo_isolater;

@interface GEOApplicationAuditToken : NSObject <Swift>

{
    NSData *_tokenData;
    NSString *_proxiedBundleId;
    NSString *_resolvedBundleId;
    NSString *_resolvedNetworkAttributionBundleId;
    geo_isolater *_isolater;
    _Bool _proxiedExternalBundleId;
}

@property (nonatomic, readonly) NSString *proxiedBundleId;
@property (nonatomic, readonly, getter=isProxiedExternalBundleId) _Bool proxiedExternalBundleId;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (id)bundleId;
- (id)publicLogDescription;
- (id)_bundleIdForAuditToken;
- (id)initWithAuditTokenData:(id)arg1;
- (id)initWithProxiedApplicationBundleId:(id)arg1;
- (id)initWithProxiedExternalApplicationBundleId:(id)arg1;
- (id)backingTokenData;
- (id)bundleIdForNetworkAttribution;

@end
