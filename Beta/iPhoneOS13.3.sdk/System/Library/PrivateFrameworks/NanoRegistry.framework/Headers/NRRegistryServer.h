/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <NanoRegistry/NRRegistryHistoryStore.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NRXPCServer, NSString;

@interface NRRegistryServer : NRRegistryHistoryStore <Swift>

{
    _Bool _sentLaunchUpdate;
    int _devicesUpdateCounterNotifyToken;
    unsigned long long _tokenValue;
    NRXPCServer *_registryServer;
}

@property (retain, nonatomic) NRXPCServer *registryServer;
@property (nonatomic) int devicesUpdateCounterNotifyToken;
@property (nonatomic) unsigned long long tokenValue;
@property (nonatomic) _Bool sentLaunchUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)proxyClass;
+ (Class)xpcListenerClass;

- (void)invalidate;
- (id)initWithParameters:(id)arg1;
- (unsigned long long)_tokenValue;
- (void)_notifyClients;
- (void)xpcGetDeviceCollectionWithBlock:(CDUnknownBlockType)arg1;
- (void)xpcGetDiffSinceTokenValue:(unsigned long long)arg1 getSecureProperties:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)xpcRetrieveSecureProperties:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcGetChangeHistoryWithBlock:(CDUnknownBlockType)arg1;
- (void)xpcSwitchIndex:(CDUnknownBlockType)arg1;
- (void)xpcDeviceIDAtSwitchIndex:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)xpcClientInfo:(CDUnknownBlockType)arg1;
- (void)xpcApplyDiff:(id)arg1 withSecureProperties:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)xpcSetMigrationConsented:(_Bool)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_dumpSecureProperties:(id)arg1 propertyIDList:(id)arg2;

@end
