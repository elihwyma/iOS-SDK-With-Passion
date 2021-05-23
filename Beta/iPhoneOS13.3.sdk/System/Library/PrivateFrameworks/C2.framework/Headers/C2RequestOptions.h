/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class C2MetricOptions, NSDictionary, NSString, NSURL;

@interface C2RequestOptions : NSObject

{
    _Bool __allowsExpensiveAccess;
    _Bool __allowsPowerNapScheduling;
    _Bool _useAdaptiveTimeouts;
    _Bool _tlsPinning;
    _Bool _allowRouting;
    _Bool _allowExpiredDNSBehavior;
    _Bool __allowsRetryForBackgroundDataTasks;
    _Bool _redactRemoteEndpointFromNetworkMetrics;
    _Bool _outOfProcessDiscretionary;
    _Bool _metricRequest;
    long long _qualityOfService;
    NSString *_outOfProcessPoolName;
    double __timeoutIntervalForRequest;
    double __timeoutIntervalForResource;
    NSString *__sourceApplicationBundleIdentifier;
    NSString *__sourceApplicationSecondaryIdentifier;
    NSString *__appleIDContextSessionIdentifier;
    unsigned long long _discretionaryNetworkBehavior;
    unsigned long long _duetPreClearedMode;
    NSString *_identifier;
    NSDictionary *_resolvedEndpointsWithHostname;
    C2MetricOptions *_metricOptions;
    NSURL *_c2MetricsEndpoint;
    unsigned long long _c2MetricsReportFrequency;
    unsigned long long _c2MetricsReportFrequencyBase;
    NSString *_originalHost;
    NSURL *_invokedURL;
    CDUnknownBlockType _testBehavior_sessionGroupCreated;
}

@property (copy, nonatomic) NSString *originalHost;
@property (nonatomic) _Bool metricRequest;
@property (copy, nonatomic) NSURL *invokedURL;
@property (nonatomic, readonly) double emptySessionExpiryInSeconds;
@property (nonatomic, readonly) _Bool outOfProcess;
@property (copy, nonatomic) CDUnknownBlockType testBehavior_sessionGroupCreated;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) NSString *outOfProcessPoolName;
@property (nonatomic) _Bool _allowsExpensiveAccess;
@property (nonatomic) _Bool _allowsPowerNapScheduling;
@property (nonatomic) double _timeoutIntervalForRequest;
@property (nonatomic) double _timeoutIntervalForResource;
@property (nonatomic) _Bool useAdaptiveTimeouts;
@property (copy, nonatomic) NSString *_sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *_sourceApplicationSecondaryIdentifier;
@property (copy, nonatomic) NSString *_appleIDContextSessionIdentifier;
@property (nonatomic) _Bool tlsPinning;
@property (nonatomic) _Bool allowRouting;
@property (nonatomic) _Bool allowExpiredDNSBehavior;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic) unsigned long long duetPreClearedMode;
@property (nonatomic) _Bool _allowsRetryForBackgroundDataTasks;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *resolvedEndpointsWithHostname;
@property (copy, nonatomic) C2MetricOptions *metricOptions;
@property (nonatomic) _Bool redactRemoteEndpointFromNetworkMetrics;
@property (nonatomic) _Bool outOfProcessDiscretionary;
@property (copy, nonatomic) NSURL *c2MetricsEndpoint;
@property (nonatomic) unsigned long long c2MetricsReportFrequency;
@property (nonatomic) unsigned long long c2MetricsReportFrequencyBase;

+ (_Bool)supportsSecureCoding;
+ (id)stringForQualityOfService:(long long)arg1;
+ (id)stringForDiscretionaryNetworkBehavior:(unsigned long long)arg1;
+ (id)stringForDuetPreClearedMode:(unsigned long long)arg1;
+ (_Bool)triesteMetricsEnabled;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyAndDecorateRequest:(id)arg1;
- (id)sessionConfigurationNameWithRouteHost:(id)arg1;
- (id)defaultSessionConfigurationWithName:(id)arg1;
- (void)setOutOfProcess:(_Bool)arg1;
- (id)sessionConfigurationWithName:(id)arg1;
- (id)decorateTask:(id)arg1;

@end
