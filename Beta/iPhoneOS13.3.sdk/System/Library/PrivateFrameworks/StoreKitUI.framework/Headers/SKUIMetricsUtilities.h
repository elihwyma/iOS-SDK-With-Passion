/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUIMetricsUtilities : NSObject

+ (_Bool)shouldLogTimingMetrics;
+ (_Bool)showEventNotifications;
+ (_Bool)trackAllEvents;
+ (double)timeIntervalFromJSTime:(id)arg1;
+ (id)jsTimeFromTimeInterval:(double)arg1;
+ (id)newErrorPageEvent;
+ (id)newErrorRetryClickEvent;

@end
