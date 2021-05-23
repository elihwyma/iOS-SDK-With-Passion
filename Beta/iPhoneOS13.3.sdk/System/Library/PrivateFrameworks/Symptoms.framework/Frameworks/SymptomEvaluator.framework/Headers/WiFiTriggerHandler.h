/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class DecisionDetails, ManagedEventHandler, NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WiFiTriggerHandler : NSObject

{
    NSString *_syndromeName;
    char *_syndromeUTF8Name;
    ManagedEventHandler *_eventHandler;
    double _lastReportTime;
    NSString *_baseName;
    float _baseRTTAvg;
    float _baseRTTVar;
    float _baseRTTMin;
    float _newRTTAvg;
    float _newRTTVar;
    NSDate *_RTTTimestamp;
    id _wifiEpochObserver;
    id _cellEpochObserver;
    id _primaryInterfaceObserver;
    DecisionDetails *_detailsAwaitingRefuter;
    NSArray *_baselineDefaultRouteData;
    NSDate *_baselineDefaultRouteTimestamp;
    int _refuterAcitvationId;
    long long _lastRefutePeriodTraffic;
    double _lastRefutePeriodDuration;
    NSDate *_lastRefutePeriodTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)configureClass:(id)arg1;
+ (void)_triggerAllowedByRSSI:(_Bool)arg1 receiptTimestamp:(id)arg2;
+ (id)getHandlerByName:(id)arg1;
+ (void)triggerAllowedByRSSI:(_Bool)arg1 receiptTimestamp:(id)arg2;
+ (id)getNetScoreInfo;

- (id)init;
- (void)_reset;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)didReceiveSyndrome:(id)arg1;
- (long long)_getARPFailureCount;
- (long long)_getND6FailureCount;
- (long long)_getDataStallsScore;
- (id)_getARPInfo;
- (id)_getND6Info;
- (id)_getDNSInfo;
- (id)_getAWDInfo:(id)arg1;
- (int)combineScoreARP:(int)arg1 ND6:(int)arg2 DNS:(int)arg3 RTT:(int)arg4 flows:(int)arg5;
- (id)_getNetScoreInfo;
- (int)_impactFromFlags:(unsigned int)arg1 andFlows:(unsigned long long)arg2;
- (_Bool)insufficientRxTrafficDetectedFrom:(id)arg1 atTime:(id)arg2 To:(id)arg3;
- (void)dampeningStage:(id)arg1;
- (void)refuteStage:(id)arg1;
- (void)generateInfoForId:(unsigned long long)arg1 context:(const char *)arg2 uuid:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)noteSymptom:(id)arg1;

@end
