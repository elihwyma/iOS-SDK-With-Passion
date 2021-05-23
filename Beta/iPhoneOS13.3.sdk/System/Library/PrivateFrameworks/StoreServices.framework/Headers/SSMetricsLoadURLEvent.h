/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSArray, NSString;

@interface SSMetricsLoadURLEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString *appleTimingApp;
@property (nonatomic) _Bool apsRelayAttempted;
@property (nonatomic) _Bool apsRelayDidFallback;
@property (nonatomic) _Bool apsRelayRequested;
@property (nonatomic) _Bool apsRelaySucceeded;
@property (retain, nonatomic) NSString *clientCorrelationKey;
@property (retain, nonatomic) NSString *clientError;
@property (nonatomic) double connectionEndTime;
@property (retain, nonatomic) NSString *connectionInterface;
@property (nonatomic) _Bool connectionReused;
@property (nonatomic) unsigned long long connectionStartNStatRXBytes;
@property (nonatomic) unsigned long long connectionStartNStatTXBytes;
@property (nonatomic) unsigned long long connectionStopNStatRXBytes;
@property (nonatomic) unsigned long long connectionStopNStatTXBytes;
@property (nonatomic) double connectionStartTime;
@property (retain, nonatomic) NSString *connectionType;
@property (nonatomic) double domainLookupEndTime;
@property (nonatomic) double domainLookupStartTime;
@property (retain, nonatomic) NSString *DNSServers;
@property (retain, nonatomic) NSString *edgeNodeCacheStatus;
@property (nonatomic) double fetchStartTime;
@property (nonatomic) _Bool cachedResponse;
@property (retain, nonatomic) NSArray *networkQualityReports;
@property (retain, nonatomic) NSString *originalApp;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double redirectEndTime;
@property (nonatomic) unsigned long long requestMessageSize;
@property (nonatomic) double redirectStartTime;
@property (nonatomic) double requestStartTime;
@property (retain, nonatomic) NSString *requestURL;
@property (retain, nonatomic) NSString *resolvedIPAddress;
@property (retain, nonatomic) NSString *responseDate;
@property (nonatomic) double responseEndTime;
@property (nonatomic) unsigned long long responseMessageSize;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double secureConnectionStartTime;
@property (nonatomic) long long statusCode;
@property (nonatomic) NSString *TIDState;
@property (nonatomic) _Bool TLSSessionTickets;
@property (nonatomic, setter=setXPSessionDuration:) double xpSessionDuration;
@property (nonatomic, setter=setXPSamplingForced:) _Bool xpSamplingForced;
@property (nonatomic, setter=setXPSamplingPercentageUsers:) double xpSamplingPercentageUsers;
@property (nonatomic, setter=setXPSamplingPercentageCachedResponses:) double xpSamplingPercentageCachedResponses;

+ (double)_randomDouble;
+ (_Bool)shouldLogTimingMetrics;
+ (_Bool)shouldReportCachedEventWithSamplingPercentage:(double)arg1;
+ (_Bool)shouldReportCachedEvent;
+ (_Bool)shouldCollectTimingDataWithSessionDuration:(double)arg1 samplingPercentage:(double)arg2;
+ (_Bool)shouldCollectTimingDataWithSessionDelegate:(id)arg1;
+ (id)_timingMetricsWindowStartTime;
+ (void)_setTimingMetricsWindowStartTime:(id)arg1;
+ (_Bool)shouldCollectTimingData;

- (id)init;
- (id)description;

@end
