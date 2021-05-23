/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSMetricsConfiguration, SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSMetricsController : NSObject

{
    SSXPCConnection *_connection;
    SSMetricsConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_flushSerialQueue;
    _Bool _flushTimerEnabled;
    _Bool _flushOnForeground;
    CDUnknownBlockType _flushTimerBlock;
    NSObject<OS_dispatch_queue> *_flushTimerQueue;
}

@property (nonatomic, getter=isFlushTimerEnabled) _Bool flushTimerEnabled;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (id)serialQueue;
- (id)configuration;
- (_Bool)isDisabled;
- (id)_userType;
- (void)setGlobalConfiguration:(id)arg1;
- (void)_applicationWillEnterForeground;
- (id)pingURLs;
- (void)recordAnalyticsForMetricsDialogEvent:(id)arg1 withTopic:(id)arg2;
- (id)_cookieValuesForConfiguration:(id)arg1;
- (void)_flushUnreportedEventsIfEnabled;
- (void)flushUnreportedEventsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleFlushTimer;
- (void)_setupFlushTimer;
- (void)insertEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_enumerateFieldValuesWithMap:(id)arg1 fieldData:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)_valueForField:(id)arg1 withFieldData:(id)arg2;
- (void)insertEvent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3;
- (void)setPageConfiguration:(id)arg1;

@end
