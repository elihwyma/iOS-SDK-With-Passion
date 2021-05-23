/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, VCRateControlBandwidthEstimatorMap, VCRateControlOWRDEstimator, VCStatisticsCollectorQueue, VCStatisticsHistory;

__attribute__((visibility("hidden")))
@interface AVCStatisticsCollector : NSObject

{
    NSMutableDictionary *_statistics;
    struct tagVCStatisticsCollection *_statisticsCollection;
    NSMutableDictionary *_statisticChangeHandlerDictionary;
    VCRateControlBandwidthEstimatorMap *_bandwidthEstimatorMap;
    VCRateControlOWRDEstimator *_owrdEstimator;
    VCStatisticsHistory *_history;
    VCStatisticsCollectorQueue *_queue;
    int _forceQueueWaitTimeMs;
    unsigned int _radioAccessTechnology;
    unsigned int _mode;
    _Bool _useExternalThread;
    unsigned int _sharedEstimatedBandwidth;
    unsigned int _sharedEstimatedBandwidthUncapped;
    unsigned int _sharedRemoteEstimatedBandwidth;
    unsigned int _maxLocalBurstyLoss;
    unsigned int _packetReceivedAudio;
    unsigned int _packetReceivedVideo;
    unsigned int _estimatedBandwidthCap;
    unsigned int _expectedBitrate;
    struct _opaque_pthread_rwlock_t _statisticsCollectionLock;
}

@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mode;
@property (nonatomic, readonly) unsigned int sharedEstimatedBandwidth;
@property (nonatomic, readonly) unsigned int sharedEstimatedBandwidthUncapped;
@property (nonatomic, readonly) unsigned int sharedRemoteEstimatedBandwidth;
@property (nonatomic) unsigned int estimatedBandwidthCap;
@property (nonatomic) unsigned int expectedBitrate;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)setStatistics:(id)arg1;
- (id)getStatistics:(id)arg1;
- (id)initForSimulation:(_Bool)arg1 useExternalThread:(_Bool)arg2;
- (void)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setVCStatistics:(CDStruct_b21f1e06)arg1;
- (CDStruct_b21f1e06)getVCStatisticsWithType:(int)arg1 time:(double)arg2;
- (void)processVCStatisticsInternal:(CDStruct_b21f1e06)arg1;
- (void)drainAndProcessVCStatistics:(CDStruct_b21f1e06)arg1;
- (void)addStatisticsHistory:(CDStruct_b21f1e06 *)arg1;
- (void)computeOtherStatistics:(CDStruct_b21f1e06 *)arg1;
- (void)addEntriesFromStatistics:(CDStruct_b21f1e06)arg1;
- (void)updateMaxLocalBurstyLoss:(unsigned int)arg1;
- (void)updatePacketReceivedCount:(CDStruct_b21f1e06 *)arg1;
- (void)computeBWEstimation:(CDStruct_b21f1e06 *)arg1;
- (void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(CDStruct_b21f1e06 *)arg1;
- (void)updateLocalEstimatedBandwidth;
- (void)computeOWRDEstimation:(CDStruct_b21f1e06 *)arg1;
- (void)addPacketLossInfo:(CDStruct_b21f1e06 *)arg1;
- (void)addActualBitrateInfo:(CDStruct_b21f1e06 *)arg1;
- (void)addRoundTripTimeInfo:(CDStruct_b21f1e06 *)arg1;
- (void)addMostBurstyLossInfo:(CDStruct_b21f1e06 *)arg1;
- (void)addAFRCActualBitrate:(CDStruct_b21f1e06 *)arg1;

@end
