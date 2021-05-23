/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface WFAggregateDictionary : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_failTrackerDict;
    NSString *_domain;
    unsigned long long _requestFailures;
    unsigned long long _requestSuccesses;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *failTrackerDict;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) unsigned long long requestFailures;
@property (nonatomic) unsigned long long requestSuccesses;

+ (id)defaultAggregateDictionary;

- (id)init;
- (double)failureRate;
- (void)_queue_addValueForScalarKey:(id)arg1 value:(long long)arg2;
- (id)failTrackerForAPIVersion:(id)arg1;
- (void)_queue_pushValue:(double)arg1 forKey:(id)arg2;
- (void)logRequestFailureForAPIVersion:(id)arg1 date:(id)arg2;
- (void)logRequestSuccessForAPIVersion:(id)arg1 date:(id)arg2;
- (void)logFallbackFromAPIVersion:(id)arg1 date:(id)arg2;
- (void)logLocationAccuracy:(double)arg1;

@end
