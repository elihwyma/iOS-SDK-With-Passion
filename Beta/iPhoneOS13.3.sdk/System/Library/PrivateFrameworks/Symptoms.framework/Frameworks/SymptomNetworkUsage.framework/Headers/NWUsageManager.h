/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NWPollHandler, NWUsageMonitor;

@protocol NWUsageManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NWUsageManager : NSObject

{
    int _interfaceTraceFd;
    char *_iftracebuf;
    unsigned int _continuationCount;
    unsigned long long _currentPollReference;
    unsigned long long _nextPollReference;
    _Atomic unsigned long long _pollsOutstanding;
    _Bool _configured;
    _Bool _invalidated;
    int _sockfd;
    id <NWUsageManagerDelegate> _delegate;
    NWUsageMonitor *_usageMonitor;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableDictionary *_internalSources;
    NSMutableSet *_interfaceSources;
    unsigned long long _currentQueryAllReference;
    unsigned long long _querySequenceNumber;
    char *_readBuffer;
    NSMutableArray *_queuedPolls;
    NWPollHandler *_activePoll;
}

@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property int sockfd;
@property (retain) NSMutableDictionary *internalSources;
@property (retain) NSMutableSet *interfaceSources;
@property (retain) NWUsageMonitor *usageMonitor;
@property unsigned long long currentQueryAllReference;
@property unsigned long long querySequenceNumber;
@property char *readBuffer;
@property (retain) NSMutableArray *queuedPolls;
@property (retain) NWPollHandler *activePoll;
@property _Bool configured;
@property (getter=isInvalidated) _Bool invalidated;
@property (weak, nonatomic) id <NWUsageManagerDelegate> delegate;

- (void)dealloc;
- (void)invalidate;
- (id)initWithQueue:(id)arg1;
- (_Bool)configure:(id)arg1;
- (id)stateDictionary;
- (_Bool)reconfigure:(id)arg1;
- (void)_handleCompletion:(unsigned long long)arg1;
- (void)_restartPoll:(id)arg1;
- (void)_traceMemoryBuf:(char *)arg1 length:(long long)arg2 tag:(char *)arg3;
- (void)_sendMessage:(struct nstat_msg_hdr *)arg1 length:(long long)arg2;
- (void)_sendPoll;
- (void)_handleCounts:(struct nstat_msg_src_counts *)arg1;
- (void)_sendUpdateRequestMessage:(unsigned long long)arg1;
- (void)_removeSourceInternal:(unsigned long long)arg1;
- (void)_noteInterfaceSrcRef:(unsigned long long)arg1 forInterface:(unsigned int)arg2 threshold:(unsigned long long)arg3;
- (void)_handleMessage:(struct nstat_msg_hdr *)arg1 length:(long long)arg2;
- (void)_startPoll:(id)arg1;
- (void)_startQueuedPoll;
- (void)_handleRemoveForSource:(id)arg1;
- (void)_sendRemoveSource:(unsigned long long)arg1;
- (void)_setThreshold:(unsigned long long)arg1 onInterface:(unsigned int)arg2;
- (void)_handleReadEvent;
- (void)_setInterfaceTraceFd:(int)arg1;
- (void)_addAllForProvider:(int)arg1 filter:(unsigned long long)arg2 events:(unsigned long long)arg3;
- (_Bool)_setThresholds:(id)arg1;
- (_Bool)initialConfigure:(id)arg1;
- (id)_stage2InitWithQueue:(id)arg1;
- (void)enumerateSelectFlows:(id)arg1 deliveryBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumerateSelectFlows:(id)arg1 deliveryBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_trace:(char *)arg1;
- (int)flowEnumerationCurrentUsage;
- (void)enumerateFlowsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)enumerateFlowsUsingBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)ignoreFlow:(unsigned long long)arg1;
- (void)enumerateChangedFlowsUsingBlock:(CDUnknownBlockType)arg1;

@end
