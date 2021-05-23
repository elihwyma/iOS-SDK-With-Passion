/*
 Image: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
 */

#import <Foundation/NSObject.h>

@class CUCoalescer, CUSystemMonitor, NSMutableSet, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APBonjourCacheManager : NSObject

{
    _Bool _cacheChanged;
    struct NSMutableDictionary *_cachedItems;
    NSMutableSet *_removedItems;
    struct NSMutableDictionary *_deviceMap;
    int _pairedPeersChangedToken;
    _Bool _pairedPeersGetting;
    struct NSMutableDictionary *_pairedPeersMap;
    NSObject<OS_dispatch_source> *_retryTimer;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSString *_networkSignature;
    double _networkSignatureWasValidAt;
    CUCoalescer *_writeCoaleser;
    CUSystemMonitor *_systemMonitor;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _reportDeviceFoundHandler;
    CDUnknownBlockType _reportDeviceLostHandler;
    NSString *_serviceType;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) CDUnknownBlockType reportDeviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType reportDeviceLostHandler;
@property (copy, nonatomic) NSString *serviceType;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceReportCachedDevices;
- (void)deviceFound:(id)arg1;
- (_Bool)deviceLost:(id)arg1;
- (void)cacheHKPeerIfNeeded:(id)arg1 pairedPeerInfo:(id)arg2;
- (void)_networkSignatureChanged;
- (void)_pairedPeersChanged;
- (void)_flushCachedItems;
- (void)_deviceFound:(id)arg1 altPairedInfo:(id)arg2 recheck:(_Bool)arg3 event:(long long)arg4;
- (void)_removeDuplicateCachedItemsIfFound:(unsigned long long)arg1 identifier:(id)arg2 serialNumber:(id)arg3 manufacturer:(id)arg4;
- (void)_updateCachedDeviceInfoWhenRealDeviceIsFound:(id)arg1 event:(long long)arg2;
- (void)_addDeviceToCache:(id)arg1 pairedPeerInfo:(id)arg2 event:(long long)arg3;
- (void)_reportCachedItemLost:(id)arg1 event:(long long)arg2;
- (void)_replaceIfnameFromDNSString:(id)arg1;
- (void)_reportCachedItemsLost:(long long)arg1;
- (id)_readCachedItems;
- (void)_refreshCachedItems;
- (void)_reportCachedItemsFound:(long long)arg1;
- (void)_recheckDevices:(long long)arg1;
- (void)_startRetryGetPairedPeersTimer;
- (void)_cancelRetryGetPairedPeers;
- (void)_refreshOrRemoveCachedItem:(id)arg1;
- (void)_sanitizeDNSStrings:(id)arg1;
- (void)_updateLastSeenTimestamp:(id)arg1;
- (_Bool)_writeCachedItems:(id)arg1;

@end
