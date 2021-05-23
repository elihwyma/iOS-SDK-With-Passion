/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSMetricsEvent.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SSMetricsMutableEvent : SSMetricsEvent

{
    NSMutableDictionary *_mutableBody;
    _Bool _shouldSuppressUserInfo;
    _Bool _shouldSuppressDSIDHeader;
}

@property (copy, nonatomic, readonly) NSDictionary *bodyDictionary;
@property (retain, nonatomic) NSNumber *accountIdentifier;
@property (retain, nonatomic) NSString *connection;
@property (retain, nonatomic) NSString *eventType;
@property double originalTime;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSNumber *baseVersion;
@property (retain, nonatomic) NSNumber *eventVersion;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSNumber *clientVersion;
@property (retain, nonatomic) NSString *hostApplicationIdentifier;
@property (retain, nonatomic) NSNumber *previousClientVersion;
@property (retain, nonatomic) NSString *userAgent;
@property (nonatomic) _Bool shouldSuppressUserInfo;
@property (nonatomic) _Bool shouldSuppressDSIDHeader;
@property (retain, nonatomic) NSString *canaryIdentifier;

- (id)init;
- (id)debugDescription;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setProperty:(id)arg1 forBodyKey:(id)arg2;
- (void)addPropertiesWithDictionary:(id)arg1;
- (id)propertyForBodyKey:(id)arg1;
- (id)initWithBodyDictionary:(id)arg1;
- (id)decorateReportingURL:(id)arg1;
- (void)appendPropertiesToBody:(id)arg1;
- (void)setOriginalTimeUsingDate:(id)arg1;

@end
