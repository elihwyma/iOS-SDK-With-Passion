/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken, NSString;

@interface GEOProxyClient : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    GEOApplicationAuditToken *_auditToken;
    _Bool _isApplication;
}

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) _Bool isApplication;

+ (id)currentClient;
+ (id)compositeClientForClients:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithXPCConnection:(id)arg1;
- (id)initWithAuditToken:(id)arg1;
- (id)URLConnectionProperties;

@end
