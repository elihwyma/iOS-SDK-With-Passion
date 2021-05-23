/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsLogEvent : SSMetricsMutableEvent

@property (nonatomic) unsigned long long logLevel;
@property (retain, nonatomic) NSString *logSubsystem;
@property (retain, nonatomic) NSString *message;

+ (unsigned long long)_logLevelFromString:(id)arg1;
+ (id)_stringFromLogLevel:(unsigned long long)arg1;

- (id)init;
- (id)description;

@end
