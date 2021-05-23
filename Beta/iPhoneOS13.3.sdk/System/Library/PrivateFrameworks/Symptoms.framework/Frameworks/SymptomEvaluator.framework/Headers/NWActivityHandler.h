/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID, NWUUIDMapper;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NWActivityHandler : NSObject

{
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSObject<OS_dispatch_source> *_metricCollectionTimer;
    unsigned short _L2MetricCount;
    NSMutableDictionary *_mappedMetrics;
    NWUUIDMapper *_nullUUIDMapper;
    NSUUID *_nullUUID;
    NSMutableArray *_currentActivities;
}

@property (nonatomic, readonly) NSMutableDictionary *mappedMetrics;
@property (nonatomic, readonly) NWUUIDMapper *nullUUIDMapper;
@property (nonatomic, readonly) NSUUID *nullUUID;
@property (nonatomic, readonly) NSMutableArray *currentActivities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)arg1;

- (id)init;
- (int)configureInstance:(id)arg1;
- (void)generateInfoForId:(unsigned long long)arg1 context:(const char *)arg2 uuid:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)noteSymptom:(id)arg1;
- (void)_dumpState:(int)arg1;
- (void)_pruneOldMappings;
- (void)_pruneCurrentActivityList;
- (void)_updateL2MetricLoggingRequests;
- (void)_startL2Streaming;
- (void)_stopL2Streaming;
- (void)_triggerWiFiMetric;
- (id)mapperForUUID:(id)arg1 reason:(int)arg2;
- (_Bool)configuredForMetricStreaming;
- (id)_createNWL2Report;
- (void)streamAWDMetric:(id)arg1 withIdentifier:(unsigned int)arg2 additionalDictionaryItems:(id)arg3;
- (id)_getBundleNameFromPid:(int)arg1;
- (void)_handleStartActivity:(id)arg1;
- (void)_handleL2Start:(id)arg1;
- (void)_handleEpilogue:(id)arg1;
- (void)_handleL2Stop:(id)arg1;
- (void)_handleCFNetworkItem:(id)arg1;
- (void)_handleNWConnectionStatistics:(id)arg1 effectivePid:(int)arg2;
- (void)_handleWiFiItem:(id)arg1;

@end
