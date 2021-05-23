/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

#import <WeatherFoundation/Swift-Protocol.h>

@class NSString, NSURL, NSURLSession, NWPathEvaluator, WFSettingsManager;

@interface WFWeatherStoreServiceConfiguration : NSObject <Swift>

{
    struct os_unfair_lock_s _serviceConnectivityEvaluationURLLock;
    struct os_unfair_lock_s _serviceConnectivityEvaluatorLock;
    NWPathEvaluator *_serviceConnectivityEvaluator;
    NSURL *_serviceConnectivityEvaluationURL;
    NSURLSession *_session;
    NSURL *_cacheURL;
    Class _cacheClass;
    WFSettingsManager *_settingsManager;
}

@property (nonatomic) struct os_unfair_lock_s serviceConnectivityEvaluationURLLock;
@property (nonatomic) struct os_unfair_lock_s serviceConnectivityEvaluatorLock;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) Class cacheClass;
@property (retain, nonatomic) NSURL *serviceConnectivityEvaluationURL;
@property (retain, nonatomic) WFSettingsManager *settingsManager;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) NSString *apiVersion;
@property (copy, nonatomic) NSURL *cacheURL;
@property (nonatomic, readonly) NWPathEvaluator *serviceConnectivityEvaluator;
@property (nonatomic, readonly) _Bool isServiceAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultConfiguration;
+ (id)generateUserAgent;
+ (id)defaultConfigurationWithSourceBundleIdentifier:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (id)apiConfigurationForAPIVersion:(id)arg1;
- (_Bool)isServiceAvailableSync;
- (id)apiConfiguration;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 apiVersion:(id)arg4 error:(id *)arg5;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 apiVersion:(id)arg6 error:(id *)arg7;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6;

@end
