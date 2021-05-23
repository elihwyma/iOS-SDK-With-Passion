/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSArray, NSString;

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *appleTimingApp;
@property (nonatomic) _Bool apsRelayAttempted;
@property (nonatomic) _Bool apsRelayDidFallback;
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
@property (retain, nonatomic) NSString *environmentDataCenter;
@property (nonatomic) double fetchStartTime;
@property (nonatomic) _Bool cachedResponse;
@property (retain, nonatomic) NSArray *networkQualityReports;
@property (retain, nonatomic) NSString *originalApp;
@property (retain, nonatomic) NSString *radioType;
@property (retain, nonatomic) NSString *radioTechnology;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double redirectEndTime;
@property (nonatomic) double redirectStartTime;
@property (nonatomic) unsigned long long requestMessageSize;
@property (nonatomic) double requestStartTime;
@property (retain, nonatomic) NSString *requestURL;
@property (retain, nonatomic) NSString *resolvedIPAddress;
@property (retain, nonatomic) NSString *responseDate;
@property (nonatomic) double responseEndTime;
@property (nonatomic) unsigned long long responseMessageSize;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double secureConnectionStartTime;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSString *TIDState;
@property (nonatomic) _Bool TFOEnabled;
@property (nonatomic) _Bool TLSSessionTickets;
@property (retain, nonatomic) NSString *wt;
@property (nonatomic) double xpSessionDuration;
@property (nonatomic) _Bool xpSamplingForced;
@property (nonatomic) double xpSamplingPercentageUsers;
@property (nonatomic) double xpSamplingPercentageCachedResponses;
@property (retain, nonatomic) NSString *xxdc;

+ (double)_randomDouble;
+ (_Bool)shouldCollectMetricsForContext:(id)arg1;
+ (double)_timingDataMetricToServerTimeInterval:(id)arg1;
+ (id)_DNSServerIPAddresses;
+ (id)_fetchNetworkQualityReports;
+ (id)_resolvedIPAddressFromTask:(id)arg1;
+ (id)_metricsDictionaryFromConfig:(id)arg1;

- (id)initWithContext:(id)arg1;
- (void)_prepareEventWithContext:(id)arg1;

@end
