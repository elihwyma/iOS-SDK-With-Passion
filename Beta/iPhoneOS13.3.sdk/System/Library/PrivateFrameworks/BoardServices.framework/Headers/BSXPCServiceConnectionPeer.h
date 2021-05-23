/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSProcessHandle, NSMutableDictionary, NSMutableSet, NSString;

@interface BSXPCServiceConnectionPeer : NSObject

{
    BSProcessHandle *_processHandle;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_entitlements;
    NSMutableSet *_lock_connections;
    unsigned long long _lock_lastConnectedGenerationCount;
}

@property (retain, nonatomic, readonly) BSProcessHandle *processHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)peerOfConnection:(id)arg1;
+ (void)invalidateConnection:(id)arg1;
+ (id)_allPeers;

- (id)init;
- (id)_initWithConnection:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
