/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@protocol OS_dispatch_queue;

@interface SSMetricsConfiguration : NSObject

{
    NSSet *_blacklistedEvents;
    SSMetricsConfiguration *_childConfiguration;
    NSDictionary *_config;
    _Bool _disabled;
    _Bool _disableEventDecoration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_cookieFieldsUnion;
    NSMutableDictionary *_eventFieldsUnion;
    NSDictionary *_fields;
    int _internalSettingsToken;
    id _reportingFrequencyOverride;
    _Bool _sendDisabled;
}

@property (nonatomic, readonly) NSDictionary *fieldsMap;
@property (retain, nonatomic) SSMetricsConfiguration *childConfiguration;
@property (nonatomic) _Bool disableEventDecoration;

+ (void)getReportingFrequencyOverrideWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)_reportingFrequencyOverride;
+ (void)setReportingFrequencyOverride:(id)arg1;

- (void)dealloc;
- (_Bool)isDisabled;
- (id)pingURLs;
- (void)_setReportingFrequencyOverride:(id)arg1;
- (id)_initSSMetricsEventConfiguration;
- (_Bool)_configBooleanForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)blacklistedEventFields;
- (id)cookieFields;
- (id)eventFields;
- (id)compoundStringWithElements:(id)arg1;
- (_Bool)isEventTypeBlacklisted:(id)arg1;
- (_Bool)isSendDisabled;
- (id)valueForConfigurationKey:(id)arg1;
- (id)reportingURLString;
- (id)tokenStringWithElements:(id)arg1;
- (id)initWithGlobalConfiguration:(id)arg1;
- (id)initWithStorePlatformData:(id)arg1;
- (double)reportingFrequency;
- (_Bool)_decorateITMLEvents;

@end
