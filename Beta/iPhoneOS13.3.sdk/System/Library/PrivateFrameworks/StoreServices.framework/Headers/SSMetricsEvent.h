/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSMetricsEvent : NSObject

{
    _Bool _shouldSuppressUserInfo;
    _Bool _shouldSuppressDSIDHeader;
    NSString *_eventType;
}

@property (retain, nonatomic, readonly) NSString *eventType;
@property (nonatomic, readonly) _Bool shouldSuppressUserInfo;
@property (nonatomic, readonly) _Bool shouldSuppressDSIDHeader;

+ (id)_globalCanaryLock;
+ (id)globalEventCanary;
+ (void)setGlobalEventCanary:(id)arg1;

- (_Bool)isFieldBlacklistEnabled;
- (_Bool)isBlacklistedByConfiguration:(id)arg1;
- (id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 externalValues:(id)arg2;
- (id)decorateReportingURL:(id)arg1;
- (_Bool)requiresDiagnosticSendingPermission;
- (double)timeIntervalFromMilliseconds:(id)arg1;
- (id)millisecondsFromTimeInterval:(double)arg1;
- (id)_dictionaryRepresentationOfBody;
- (void)appendPropertiesToBody:(id)arg1;
- (id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1;

@end
