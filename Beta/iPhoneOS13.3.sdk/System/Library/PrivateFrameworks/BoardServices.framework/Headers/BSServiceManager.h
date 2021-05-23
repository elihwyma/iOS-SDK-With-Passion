/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSServicesConfiguration, NSDictionary, NSMapTable, NSMutableDictionary, NSString, RBSService;

@interface BSServiceManager : NSObject

{
    BSServicesConfiguration *_configuration;
    NSDictionary *_identifierToDomain;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_endpointToOutgoingRootConnections;
    NSMutableDictionary *_lock_inheritanceToEndpoint;
    NSMapTable *_lock_endpointToInheritances;
    NSMutableDictionary *_lock_serviceIdentifierToEndpoints;
    NSMutableDictionary *_lock_serviceIdentifierToMonitors;
    struct os_unfair_lock_s _callOutLock;
    NSMutableDictionary *_callOutLock_serviceIdentifierToEndpointsToEnvironments;
    RBSService *_RBSService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)service:(id)arg1 didReceiveInheritances:(id)arg2;
- (void)service:(id)arg1 didLoseInheritances:(id)arg2;
- (id)_initWithConfiguration:(id)arg1;
- (id)newConnectionWithEndpoint:(id)arg1 nonLaunching:(_Bool)arg2 description:(id)arg3;
- (id)_lock_rootConnectionWithEndpoint:(id)arg1 nonLaunching:(_Bool)arg2 description:(id)arg3;
- (void)_callOutLock_noteEndpointsChangedForServices:(id)arg1;
- (id)domainWithIdentifier:(id)arg1;
- (void)disableLaunchWhitelist;
- (id)registerMonitor:(id)arg1;
- (void)serviceWillTerminateProcess:(id)arg1;

@end
