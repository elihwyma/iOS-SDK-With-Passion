/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@class NSMutableArray, NSMutableDictionary;

@protocol NRNSXPCConnectionProtocol;

@interface NRRegistryClient

{
    NSMutableDictionary *_diffIndexObservers;
    _Bool _optimizeGetState;
    _Bool _outstandingRegistryQuery;
    int _devicesUpdateCounterNotifyToken_dispatch;
    int _devicesUpdateCounterNotifyToken_check;
    id <NRNSXPCConnectionProtocol> _connection;
    unsigned long long _tokenValue;
    unsigned long long _lastDevicesUpdateCounterNotifyTokenValue;
    unsigned long long _backoffDuration;
    NSMutableArray *_registryQueryCompletionBlockEntries;
}

@property (retain, nonatomic) id <NRNSXPCConnectionProtocol> connection;
@property (nonatomic) int devicesUpdateCounterNotifyToken_dispatch;
@property (nonatomic) int devicesUpdateCounterNotifyToken_check;
@property (nonatomic) unsigned long long lastDevicesUpdateCounterNotifyTokenValue;
@property (nonatomic) unsigned long long tokenValue;
@property (nonatomic) _Bool optimizeGetState;
@property (nonatomic) _Bool outstandingRegistryQuery;
@property (nonatomic) unsigned long long backoffDuration;
@property (retain, nonatomic) NSMutableArray *registryQueryCompletionBlockEntries;
@property (nonatomic, readonly) unsigned long long devicesUpdateCounter;
@property (retain, nonatomic, readonly) id <NRNSXPCConnectionProtocol> rawConnection;

+ (Class)proxyClass;
+ (unsigned long long)updateCounterFromToken:(unsigned long long)arg1;
+ (Class)xpcConnectionClass;

- (void)invalidate;
- (id)initWithParameters:(id)arg1;
- (void)_connectToDaemon;
- (void)setCollection:(id)arg1;
- (void)grabRegistryWithReadBlockAsync:(CDUnknownBlockType)arg1;
- (void)grabRegistryWithWriteBlockAsync:(CDUnknownBlockType)arg1;
- (void)syncGrabRegistryWithReadBlock:(CDUnknownBlockType)arg1;
- (void)_queryDataAsyncIfNeededWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)_getDevicesUpdateCounterNotifyTokenValue;
- (void)grabRegistryWithReadBlock:(CDUnknownBlockType)arg1;
- (_Bool)_shouldWaitForData;
- (void)_grabRegistryWithReadBlock:(CDUnknownBlockType)arg1;
- (void)_grabRegistryWithWriteBlockAsync:(CDUnknownBlockType)arg1;
- (void)_queryDataAsyncForce:(_Bool)arg1 ifNeededWithBlock:(CDUnknownBlockType)arg2;
- (void)_addQueryCompletionBlockEntry:(id)arg1;
- (void)_fireQueryCompletionBlocksToUpdateCounter:(unsigned long long)arg1;
- (void)_fireAllQueryCompletionBlocks;
- (void)_queryDaemonWithStartingTokenValue:(unsigned long long)arg1 currentTokenValue:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_wipeRegistryWith:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_notifyDiffIndexObserversWithDiff:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3 index:(unsigned long long)arg4;
- (_Bool)daemonIdle;
- (id)addDiffIndexObserverWithWriteBlock:(CDUnknownBlockType)arg1;
- (void)removeDiffIndexObserver:(id)arg1;

@end
