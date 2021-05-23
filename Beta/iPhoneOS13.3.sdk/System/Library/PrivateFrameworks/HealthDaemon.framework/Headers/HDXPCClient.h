/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableSet, NSString, NSUUID, NSXPCConnection, _HKEntitlements;

@interface HDXPCClient : NSObject <Swift>

{
    NSString *_entitlementsApplicationIdentifier;
    _Bool _isExtension;
    NSXPCConnection *_connection;
    _HKEntitlements *_entitlements;
    NSString *_name;
    NSString *_processBundleIdentifier;
    NSString *_containerAppBundleIdentifier;
    NSUUID *_UUID;
    NSMutableSet *_droppedEntitlements;
}

@property (readonly) NSUUID *UUID;
@property (retain, nonatomic) NSMutableSet *droppedEntitlements;
@property (readonly) NSXPCConnection *connection;
@property (readonly) _HKEntitlements *entitlements;
@property (readonly) int processIdentifier;
@property (copy, readonly) NSString *name;
@property (readonly) _Bool isExtension;
@property (copy, readonly) NSString *applicationIdentifier;
@property (copy, readonly) NSString *processBundleIdentifier;
@property (copy, readonly) NSString *containerAppBundleIdentifier;

+ (id)clientWithConnection:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (void)dropEntitlement:(id)arg1;
- (void)restoreEntitlement:(id)arg1;
- (id)initWithEntitlements:(id)arg1;
- (_Bool)hasRequiredEntitlement:(id)arg1 error:(id *)arg2;
- (id)initWithConnection:(id)arg1 entitlements:(id)arg2;
- (id)_initWithConnection:(id)arg1 entitlements:(id)arg2;

@end
