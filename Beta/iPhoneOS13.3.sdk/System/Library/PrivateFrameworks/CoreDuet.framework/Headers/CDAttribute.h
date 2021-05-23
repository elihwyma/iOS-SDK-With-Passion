/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class CDSession, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CDAttribute : NSObject

{
    CDSession *_session;
    NSString *_name;
    NSString *_fullName;
    long long _type;
    unsigned long long _integerId;
    NSMutableArray *resourceCallbackList;
    NSMutableArray *revocationCallbackList;
    NSObject<OS_dispatch_queue> *resourceCallbackQueue;
    int resourceCallToken;
    int focalAppToken;
    int conditionChangeToken;
    int systemConditionChangeToken;
    int localFocalInfoToken;
    int revocationToken;
    unsigned short _admissionMask;
    NSMutableDictionary *costCache;
    _Bool delayedUpdatePending;
    NSMutableDictionary *tokenCache;
    NSMutableDictionary *dateCache;
    NSMutableArray *activeReports;
    NSObject<OS_dispatch_queue> *_deferredRequestsQ;
    NSObject<OS_dispatch_queue> *admissionCacheQueue;
    NSMutableDictionary *admissionCache;
    CDSession *_sessionStrong;
    CDSession *_sessionWeak;
}

@property (readonly) CDSession *sessionStrong;
@property (weak, readonly) CDSession *sessionWeak;
@property (readonly) NSObject<OS_dispatch_queue> *deferredRequestsQ;
@property (readonly) unsigned long long integerId;
@property (readonly) NSString *name;
@property (readonly) NSString *fullName;
@property (readonly) long long type;

- (void)dealloc;
- (id)description;
- (id)session;
- (id)fullNameFromString:(id)arg1 clientId:(unsigned long long)arg2 error:(id *)arg3;
- (id)_initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 weak:(_Bool)arg5 error:(id *)arg6;
- (_Bool)attributeIsClientWriteable;
- (_Bool)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 risingEdge:(_Bool)arg4 fallingEdge:(_Bool)arg5 error:(id *)arg6;
- (_Bool)isBypassClientForValue:(id)arg1;
- (_Bool)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 risingEdge:(_Bool)arg4 fallingEdge:(_Bool)arg5 deferredRequest:(_Bool)arg6 error:(id *)arg7;
- (id)temporalForecastXPCObjectToArray:(id)arg1 attributeValue:(id)arg2 forecastType:(long long)arg3 error:(id *)arg4;
- (id)peerForecastXPCObjectToDictionary:(id)arg1 attributeValue:(id)arg2 error:(id *)arg3;
- (id)histogramForHistoryWindow:(id)arg1 error:(id *)arg2;
- (id)repeatedStatisticXPCObjectToArray:(id)arg1 error:(id *)arg2;
- (void)stuffDictionary:(id *)arg1 forStatisticType:(long long)arg2 matchingStatisticType:(long long)arg3 xpcKey:(const char *)arg4 incomingXpcObject:(id)arg5;
- (_Bool)admissionCheckOfValue:(id)arg1 type:(long long)arg2 options:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (long long)isAdmissionValid:(id)arg1;
- (void)addAdmissionValidity:(id)arg1 validity:(long long)arg2;
- (void)callListOfCallbacks:(id)arg1 oneshotCall:(_Bool)arg2 callList:(id)arg3;
- (_Bool)setRevocationDispatch;
- (_Bool)setResourceDispatch:(id *)arg1;
- (id)meteringLookupCachedToken:(id)arg1;
- (void)meteringInsertCachedToken:(id)arg1 meteringToken:(unsigned long long)arg2;
- (_Bool)accumulateCostDictionary:(id)arg1 meteringToken:(unsigned long long)arg2 date:(id)arg3;
- (unsigned long long)meteringIsActive:(id)arg1;
- (void)reportAccumulatedCost;
- (id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id *)arg5;
- (id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id *)arg5;
- (id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id *)arg3;
- (id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;
- (id)initWithMySession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)setCategory:(long long)arg1 error:(id *)arg2;
- (_Bool)associateToBudget:(id)arg1 error:(id *)arg2;
- (_Bool)destroyWithError:(id *)arg1;
- (_Bool)backgroundLaunchStartedWithValue:(id)arg1 error:(id *)arg2;
- (_Bool)backgroundLaunchStoppedWithValue:(id)arg1 error:(id *)arg2;
- (_Bool)activityStartedWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3;
- (_Bool)activityStartedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id *)arg4;
- (_Bool)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3;
- (_Bool)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id *)arg4;
- (_Bool)activityWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)occurredWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3;
- (_Bool)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id *)arg4;
- (double)correlationOfValue:(id)arg1 toAttribute:(id)arg2 withValue:(id)arg3 temporalLeeway:(double)arg4 error:(id *)arg5;
- (id)distinctValuesForHistoryWindow:(id)arg1 error:(id *)arg2;
- (id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id *)arg3;
- (_Bool)admissionCheckOfValue:(id)arg1 andStartedWithValue:(id)arg2 cost:(long long)arg3 type:(long long)arg4 options:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
- (_Bool)admissionCheckOfValue:(id)arg1 andOccurredWithValue:(id)arg2 cost:(long long)arg3 type:(long long)arg4 options:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
- (void)admissionCheckOfValueAsync:(id)arg1 type:(long long)arg2 options:(id)arg3 handleQueue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)setTrendBlockForValue:(id)arg1 withConfig:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)setAdmissionRevocationBlockWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)setResourceAvailabilityBlockWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)meteringStartedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 error:(id *)arg4;
- (_Bool)meteringStoppedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)meteringUpdateWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id *)arg5;
- (id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7;
- (id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7;
- (id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id *)arg4;
- (id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id *)arg4;
- (id)historyOfValue:(id)arg1 forWindow:(id)arg2 filter:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)reset:(long long)arg1 error:(id *)arg2;
- (id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7;
- (id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7;
- (id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 error:(id *)arg4;
- (id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 error:(id *)arg4;
- (_Bool)setAdmissionBitMask:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)resetAdmissionBitMask:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)requestTemporalForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(long long)arg4 error:(id *)arg5 handler:(CDUnknownBlockType)arg6;
- (_Bool)requestPeerForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(long long)arg4 error:(id *)arg5 handler:(CDUnknownBlockType)arg6;
- (_Bool)requestStatisticFromDevice:(id)arg1 statistic:(long long)arg2 forHistoryWindow:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;

@end
