/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDServiceBroker, NSString;

@interface ASDCrossfireStore : NSObject

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
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reportAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
