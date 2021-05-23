/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class GKSessionInternal, NSString;

@interface GKPeerInternal : NSObject

{
    unsigned int _pid;
    NSString *_displayName;
    NSString *_serviceName;
    _Bool _isBusy;
    GKSessionInternal *_session;
    int _serviceCount;
    struct _DNSServiceRef_t *_resolveService;
    struct _DNSServiceRef_t *_txtRecordService;
    id *_addrList;
    unsigned int *_interfaceList;
    unsigned int _servicePort;
    struct _DNSServiceRef_t **_lookupServiceList;
    int _lookupServiceCount;
    int _lookupServiceSize;
    _Bool _moreResolvesComing;
    double _connectTimeout;
    _Bool _needsToTimeout;
}

@property (readonly) unsigned int pid;
@property (readonly) NSString *displayName;
@property (readonly) NSString *serviceName;
@property (getter=isBusy) _Bool busy;
@property int serviceCount;
@property struct _DNSServiceRef_t *resolveService;
@property struct _DNSServiceRef_t *txtRecordService;
@property unsigned int servicePort;
@property _Bool moreResolvesComing;
@property (retain, nonatomic) GKSessionInternal *session;
@property double connectTimeout;
@property _Bool needsToTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)freeLookupList:(struct _DNSServiceRef_t **)arg1 andAddrList:(id *)arg2 andInterfaceList:(unsigned int *)arg3 count:(int)arg4;

- (void)dealloc;
- (void)cleanupForGKTable:(id)arg1;
- (_Bool)tryDetruncateDisplayName:(id)arg1;
- (void)clearResolving;
- (void)stopResolving;
- (void)stopTXTRecordMonitoring;
- (id)initWithPID:(unsigned int)arg1 displayName:(id)arg2 serviceName:(id)arg3;
- (int)usableAddrs;
- (void)removeAndReturnLookupList:(struct _DNSServiceRef_t ***)arg1 andAddrList:(id **)arg2 andInterfaceList:(unsigned int **)arg3 count:(int *)arg4;
- (_Bool)containsLookupService:(struct _DNSServiceRef_t *)arg1;
- (void)setAddr:(const struct sockaddr_in *)arg1 interface:(unsigned int)arg2 forLookupService:(struct _DNSServiceRef_t *)arg3;
- (void)addLookup:(struct _DNSServiceRef_t *)arg1;
- (void)copyLookupList:(struct _DNSServiceRef_t ***)arg1 count:(int *)arg2;

@end
