/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet;

@protocol NWStatisticsManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NWStatisticsManager : NSObject

{
    _Bool _systemInformationSubscribed;
    unsigned int _filter;
    unsigned int _continuationCount;
    unsigned long long _providerFilters[9];
    char *_iftracebuf;
    unsigned int _id;
    unsigned long long _numUpdatesDispatched;
    unsigned long long _numUpdatesSkipped;
    unsigned long long _numUpdatesLazyDispatched;
    unsigned long long _numUpdatesLazySkipped;
    unsigned long long _numSourceAddsReceived;
    unsigned long long _numSourceAddsSkipped;
    unsigned long long _numSourcesInserted;
    unsigned long long _numSourcesRemoved;
    unsigned long long _numSourcesQueried;
    _Bool _reading;
    _Bool _invalidated;
    unsigned int _mgrflags;
    int _interfaceTraceFd;
    int _interfaceSourceFd;
    int _sockfd;
    id <NWStatisticsManagerDelegate> _delegate;
    NSObject<OS_dispatch_source> *_readSource;
    NSMutableDictionary *__internalSources;
    NSMutableDictionary *_currentQueries;
    NSMutableDictionary *_queuedQueryAlls;
    unsigned long long _currentQueryAllReference;
    unsigned long long _querySequenceNumber;
    char *_readBuffer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id _strongDelegate;
}

@property (retain) NSObject<OS_dispatch_source> *readSource;
@property int sockfd;
@property (getter=isReading) _Bool reading;
@property (retain) NSMutableDictionary *_internalSources;
@property (retain) NSMutableDictionary *currentQueries;
@property (retain) NSMutableDictionary *queuedQueryAlls;
@property unsigned long long currentQueryAllReference;
@property unsigned long long querySequenceNumber;
@property char *readBuffer;
@property (getter=isInvalidated) _Bool invalidated;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) id strongDelegate;
@property (weak, nonatomic) id <NWStatisticsManagerDelegate> delegate;
@property (nonatomic) unsigned int filter;
@property (nonatomic) unsigned int mgrflags;
@property (readonly) NSSet *sources;
@property (nonatomic) int interfaceTraceFd;
@property (nonatomic) int interfaceSourceFd;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)removeSource:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)setQueuePriority:(long long)arg1;
- (void)trace:(char *)arg1;
- (void)queryAllCounts:(CDUnknownBlockType)arg1;
- (void)queryAllDescriptions:(CDUnknownBlockType)arg1;
- (_Bool)queryAll:(CDUnknownBlockType)arg1;
- (_Bool)addAllTCP:(unsigned long long)arg1 events:(unsigned long long)arg2 pid:(int)arg3 uuid:(unsigned char (*)[16])arg4;
- (_Bool)addAllUDP:(unsigned long long)arg1 events:(unsigned long long)arg2 pid:(int)arg3 uuid:(unsigned char (*)[16])arg4;
- (_Bool)addAllRoute:(unsigned long long)arg1;
- (void)traceMemoryBuf:(char *)arg1 length:(long long)arg2 tag:(char *)arg3;
- (_Bool)handleCompletion:(unsigned long long)arg1 message:(struct nstat_msg_hdr *)arg2 length:(unsigned int)arg3;
- (void)dispatchDidReceiveDescription:(id)arg1;
- (void)dispatchDidReceiveCounts:(id)arg1 fromUpdate:(_Bool)arg2;
- (_Bool)sendMessage:(struct nstat_msg_hdr *)arg1 length:(long long)arg2;
- (void)sendRequestMessage:(int)arg1 sourceRef:(unsigned long long)arg2;
- (void)dispatchDidAddSource:(id)arg1;
- (void)sendRemoveSourceInternal:(unsigned long long)arg1;
- (void)reportInternalCounts;
- (void)handleSystemInformationCounts:(struct nstat_sysinfo_counts *)arg1;
- (void)removeSourceInternal:(unsigned long long)arg1 isFromClient:(_Bool)arg2;
- (void)handleMessage:(struct nstat_msg_hdr *)arg1 length:(long long)arg2;
- (void)dispatchDidReceiveType:(unsigned int)arg1 source:(id)arg2;
- (_Bool)handleCompletionMessage:(struct nstat_msg_hdr *)arg1 length:(unsigned int)arg2;
- (unsigned int)commandFromReference:(unsigned long long)arg1;
- (void)startQueuedQuery;
- (unsigned long long)_nextReferenceForTarget:(unsigned long long)arg1 command:(unsigned int)arg2;
- (_Bool)addAllForProvider:(int)arg1 filter:(unsigned long long)arg2 events:(unsigned long long)arg3 pid:(int)arg4 uuid:(unsigned char (*)[16])arg5;
- (_Bool)performQuery:(unsigned int)arg1 sourceRef:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)subscribeToSystemInformation;
- (void)performAllCompletions:(id)arg1;
- (void)handleReadEvent;
- (_Bool)addSource:(id)arg1 request:(struct nstat_msg_add_src *)arg2 length:(unsigned long long)arg3;
- (_Bool)addAllTCP:(unsigned long long)arg1;
- (_Bool)addAllUDP:(unsigned long long)arg1;
- (_Bool)addAllRoute;
- (void)querySource:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
