/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface AMSMetricsEvent : NSObject

{
    NSMutableDictionary *_underlyingDictionary;
    ACAccount *_account;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSNumber *_databasePID;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) NSDictionary *databaseEventBody;
@property (retain, nonatomic) NSString *clientEventID;
@property (retain, nonatomic) NSNumber *databasePID;
@property (nonatomic, readonly) NSDictionary *dictionaryForPosting;
@property (nonatomic) _Bool preventSampling;
@property (nonatomic, readonly) NSMutableDictionary *underlyingDictionary;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *app;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSNumber *baseVersion;
@property (retain, nonatomic) NSString *canaryIdentifier;
@property (retain, nonatomic) NSNumber *eventTime;
@property (retain, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSNumber *eventVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSNumber *timezoneOffset;
@property (retain, nonatomic) NSString *topic;

+ (id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)arg1;
+ (id)_topicFromAuthenticationContext:(id)arg1;
+ (id)_buyParamsStringFromAuthenticationContext:(id)arg1;
+ (id)_buyParamsFromString:(id)arg1;
+ (id)createEventFromAuthenticationContext:(id)arg1 error:(id)arg2;
+ (_Bool)_isValidJSONProperty:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopic:(id)arg1;
- (void)setProperty:(id)arg1 forBodyKey:(id)arg2;
- (void)addPropertiesWithDictionary:(id)arg1;
- (id)propertyForBodyKey:(id)arg1;
- (id)initWithUnderlyingDictionary:(id)arg1;
- (void)removePropertiesForKeys:(id)arg1;
- (id)_propertyForBodyKey:(id)arg1 clientOnly:(_Bool)arg2;
- (void)_setProperty:(id)arg1 forBodyKey:(id)arg2 clientOnly:(_Bool)arg3;
- (id)initWithDatabaseEventBody:(id)arg1;

@end
