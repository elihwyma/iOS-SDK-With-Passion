/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTObject.h>

@class NSMutableArray;

@protocol MTEventRecorderDelegate;

@interface MTEventRecorder : MTObject

{
    id <MTEventRecorderDelegate> _delegate;
    NSMutableArray *_eventListeners;
}

@property (nonatomic) _Bool monitorsLifecycleEvents;
@property (retain, nonatomic) NSMutableArray *eventListeners;
@property (weak, nonatomic) id <MTEventRecorderDelegate> delegate;

+ (id)_compositePromiseWithPromises:(id)arg1 resolvingResultFromPromise:(id)arg2;
+ (id)_metricsDataApplyingWhitelisting:(id)arg1 usingRecorder:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)recordEvent:(id)arg1;
- (id)flushUnreportedEvents;
- (void)addEventListener:(id)arg1;
- (void)removeEventListener:(id)arg1;
- (id)recordEvent:(id)arg1 toTopic:(id)arg2;
- (id)sendMethod;
- (id)initWithMetricsKit:(id)arg1;
- (void)maybeSubscribeToFlushNotification;
- (id)_flushUnreportedEventsUsingRecorder:(id)arg1;
- (id)recordEvent:(id)arg1 shouldSkipValidation:(_Bool)arg2;
- (id)_recordEvent:(id)arg1 toTopic:(id)arg2 usingRecorder:(id)arg3;
- (id)_recordEvent:(id)arg1 usingRecorder:(id)arg2;
- (id)_amsDelegate;

@end
