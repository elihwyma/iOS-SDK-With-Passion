/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSRichNotificationMetricsEvent : AMSMetricsEvent

@property (nonatomic) _Bool postedSuccessfully;
@property (retain, nonatomic) NSString *errorDescription;

+ (id)_centerForBundleId:(id)arg1;
+ (id)eventFromMetricsDictionary:(id)arg1 centerBundleId:(id)arg2;
+ (id)eventFromNotificationCenterSettings:(id)arg1 centerBundleId:(id)arg2;

- (id)initWithTopic:(id)arg1 settings:(id)arg2 centerBundleId:(id)arg3;

@end
