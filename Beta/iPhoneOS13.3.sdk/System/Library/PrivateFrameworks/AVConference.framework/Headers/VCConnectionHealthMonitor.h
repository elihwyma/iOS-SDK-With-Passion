/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, VCConnectionHealthMonitorDelegate;

__attribute__((visibility("hidden")))
@interface VCConnectionHealthMonitor : NSObject

{
    struct _opaque_pthread_rwlock_t _stateRWLock;
    unsigned char _lastReportedIndex;
    struct ConnectionStats _currentReceivingStats;
    struct ConnectionStatsHistory _statsHistory;
    struct _opaque_pthread_rwlock_t _peerStateRWLock;
    struct ConnectionStatsHistory _peerStatsHistory;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property id <VCConnectionHealthMonitorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)updateReceiveStats;
- (unsigned int)generateStatsBlob;
- (void)processPeerStatsBlob:(unsigned int)arg1;
- (void)receiveNewPacket:(_Bool)arg1;
- (void)resetConnectionStats:(_Bool)arg1;
- (void)updateStatsHistory;
- (void)updateRatiosForHistory:(struct ConnectionStatsHistory *)arg1 withIndex:(int)arg2;
- (void)reportConnectionHealthWithStatsHistory:(struct ConnectionStatsHistory *)arg1 index:(int)arg2 isPeerStats:(_Bool)arg3;
- (void)resetHistory:(struct ConnectionStatsHistory *)arg1;
- (_Bool)isPrimaryConnectionImprovedFromHistory:(struct ConnectionStatsHistory *)arg1 withIndex:(int)arg2;
- (_Bool)isHistoryImproved:(char *)arg1 currentIndex:(int)arg2;
- (_Bool)isHistoryValid:(char *)arg1;

@end
