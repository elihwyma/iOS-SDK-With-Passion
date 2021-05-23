/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDServiceBroker, NSString;

@interface ASDOcelotStore : NSObject

{
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;

- (id)init;
- (id)_initWithServiceBroker:(id)arg1;
- (void)flushMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getAppPayoutEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getAppSummaryEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reportAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resetPayoutWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sbsyncIfSubscribedWithAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sbsyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sbsyncWithDuration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)subscriptionDetailsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)subscriptionStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)topAppsForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resetSummaryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sendSummaryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sendPayoutWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
