/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, SSCoalescingQueue;

@interface SSMetricsTimingDefaults : NSObject

{
    _Bool _runningTests;
    SSCoalescingQueue *_updateQueue;
    NSDictionary *_cachedValues;
}

@property (retain, nonatomic) SSCoalescingQueue *updateQueue;
@property (retain, nonatomic) NSDictionary *cachedValues;
@property (nonatomic, getter=isRunningTests) _Bool runningTests;
@property (readonly) NSDictionary *values;
@property (readonly) double sessionDurationLoadURL;
@property (readonly) double samplingPercentageUsersLoadURL;
@property (readonly) double samplingPercentageCachedResponsesLoadURL;
@property (readonly) double sessionDurationPageRender;
@property (readonly) double samplingPercentageUsersPageRender;

+ (id)sharedInstance;
+ (id)sharedInstanceWithSessionDelegate:(id)arg1;

- (void)update;
- (id)initWithSessionDelegate:(id)arg1;

@end
