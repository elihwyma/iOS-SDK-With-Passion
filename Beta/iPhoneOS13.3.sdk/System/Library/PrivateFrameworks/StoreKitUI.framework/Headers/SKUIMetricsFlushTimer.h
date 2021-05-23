/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUIMetricsFlushTimer : NSObject

{
    NSHashTable *_metricsControllers;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _timerStartTime;
}

+ (id)sharedTimer;

- (id)init;
- (void)dealloc;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)addMetricsController:(id)arg1;
- (void)removeMetricsController:(id)arg1;
- (void)flushAllMetricsControllers;
- (void)reloadFlushInterval;
- (void)_performFlush;
- (void)_cancelFlushTimer;

@end
