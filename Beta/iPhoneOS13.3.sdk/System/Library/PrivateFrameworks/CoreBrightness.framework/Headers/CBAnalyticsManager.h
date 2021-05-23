/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

__attribute__((visibility("hidden")))
@interface CBAnalyticsManager : NSObject

{
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_reportTimer;
    NSMutableDictionary *_timestamps;
    NSMutableDictionary *samples;
}

+ (id)sharedInstance;
+ (_Bool)handleColorSample:(id)arg1;
+ (void)sendEventOnceADayLazy:(id)arg1 andDict:(id)arg2;
+ (void)stopReporting:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (id)stringForType:(unsigned long long)arg1;
- (_Bool)handleColorSampleInternal:(id)arg1;
- (void)startReporting;
- (void)logColorSample:(id)arg1 withType:(id)arg2;
- (void)sendEventLazy:(id)arg1 andDict:(id)arg2;
- (void)sendEventOnceADayLazyInternal:(id)arg1 andDict:(id)arg2;
- (_Bool)isFirstEventToday:(id)arg1;
- (void)logAllColorSamples;
- (void)stopReportingInternal:(unsigned long long)arg1;
- (_Bool)isSameDay:(id)arg1 asDay:(id)arg2;
- (void)storeTimestamp:(id)arg1 forEventName:(id)arg2;

@end
