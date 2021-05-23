/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNetServiceBrowser, NSString;

@protocol RMSServiceProviderDelegate;

__attribute__((visibility("hidden")))
@interface RMSBonjourServiceProvider : NSObject

{
    NSMutableDictionary *_services;
    NSMutableDictionary *_cache;
    id <RMSServiceProviderDelegate> _delegate;
    NSNetServiceBrowser *_netServiceBrowser;
}

@property (nonatomic, readonly) NSNetServiceBrowser *netServiceBrowser;
@property (nonatomic, readonly) NSString *searchType;
@property (nonatomic, readonly) NSString *searchDomain;
@property (nonatomic, readonly) NSString *searchScope;
@property (nonatomic, readonly) long long serviceDiscoverySource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <RMSServiceProviderDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)_searchString;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)endDiscovery;
- (void)beginDiscovery;
- (long long)serviceTypeFromTXTDictionary:(id)arg1;
- (long long)serviceFlagsFromTXTDictionary:(id)arg1;
- (id)_valueForTXTRecordKey:(id)arg1 inTXTDictionary:(id)arg2;
- (id)_identifierForNetService:(id)arg1;
- (void)_updateService:(id)arg1 withNetService:(id)arg2 txtData:(id)arg3;
- (void)_updateCacheWithService:(id)arg1 identifier:(id)arg2;

@end
