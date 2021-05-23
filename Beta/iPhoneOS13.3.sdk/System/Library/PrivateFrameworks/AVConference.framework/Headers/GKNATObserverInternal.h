/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/GKNATObserver.h>

@class GKNATObserver_SCContext, NSMutableDictionary, NSObject, NSRecursiveLock;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GKNATObserverInternal : GKNATObserver

{
    id _delegate;
    struct __SCDynamicStore *_dynamicStore;
    NSRecursiveLock *_xNATCheck;
    int _lastReportedNATType;
    int _lastReportedCarrierNATType;
    int _lastReportedNonCarrierNATType;
    NSMutableDictionary *_interfaceInfoDictionary;
    _Bool _nonCarrierInterfacesOnly;
    _Bool _checkTCPAndSSL;
    _Bool _favorNonCarrier;
    _Bool _newCarrierType;
    _Bool _addInRangeFlag;
    _Bool _addCarrierFlag;
    _Bool _ignoreNatTypeCache;
    _Bool _ignoreCarrierBundle;
    int _NATCheckRetryCount;
    double _NATCheckRetryDelay;
    NSMutableDictionary *_currentNetworkNames;
    NSObject<OS_dispatch_queue> *_natCheckQueue;
    NSObject<OS_dispatch_queue> *_reportNATQueue;
    NSObject<OS_dispatch_group> *_natCheckGroup;
    NSObject<OS_dispatch_semaphore> *_natCheckNetNameSema;
    _Bool _fNATCheckQueued;
    _Bool _fNATCheckInProgress;
    GKNATObserver_SCContext *_sccontext;
    _Bool _hasNATCheckStarted;
    _Bool _hasNATCheckEnded;
}

- (id)init;
- (void)dealloc;
- (oneway void)release;
- (id)initWithOptions:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)currentNATType;
- (void)clearRetries;
- (void)tryNATCheckWithDelay:(double)arg1;
- (void)shouldTryNATCheck;
- (void)registerForNetworkChanges;
- (unsigned int)setFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(_Bool)arg3 isCachedKey:(id)arg4 mask:(unsigned int)arg5;
- (int)natTypeForCommNATFlags:(unsigned int)arg1 isCarrier:(_Bool)arg2;
- (void)calculateSummmaryNATType:(int *)arg1 andCarrierNATType:(int *)arg2 andNonCarrierNATType:(int *)arg3 copyInterfaceInfoDictionary:(id *)arg4;
- (void)reportNATType;
- (_Bool)ensureNatCachePathExists;
- (void)updateNatTypeCache_CachePlistScheme:(id)arg1;
- (id)copyNatTypeCachePlistScheme;
- (id)copyNatTypeCache;
- (void)updateNatTypeCache:(id)arg1;
- (id)nameForNetworkWithIPPort:(struct tagIPPORT *)arg1 interfaceName:(id)arg2;
- (id)lookupCachedNATFlagsForNetwork:(id)arg1;
- (unsigned int)setCommNATFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(_Bool)arg3;
- (unsigned int)setTCPFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(_Bool)arg3;
- (unsigned int)setSSLFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(_Bool)arg3;
- (struct tagCommNATInfo *)callCommNATTestFromIPPort:(struct tagIPPORT *)arg1 ipv6Prefix:(const CDStruct_c3d3b44c *)arg2;
- (void)cacheNATFlags:(id)arg1 forNetwork:(id)arg2;
- (int)callHTTPTestFromIPPort:(struct tagIPPORT *)arg1 ipv6Prefix:(const CDStruct_c3d3b44c *)arg2 ToServer:(id)arg3 isSSL:(_Bool)arg4;
- (void)NATCheckWithIPPort:(struct tagIPPORT *)arg1 ipv6Prefix:(const CDStruct_c3d3b44c *)arg2 useCache:(_Bool)arg3;
- (void)HTTPCheckWithIPPort:(struct tagIPPORT *)arg1 ipv6Prefix:(const CDStruct_c3d3b44c *)arg2 useCache:(_Bool)arg3;
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT *)arg1 ipv6Prefix:(const CDStruct_c3d3b44c *)arg2 useCache:(_Bool)arg3;
- (id)copyNatTypeCache_OSXGamedScheme;
- (void)updateNatTypeCache_OSXGamedScheme:(id)arg1;

@end
