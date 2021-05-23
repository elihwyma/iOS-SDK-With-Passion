/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface BWCoreAnalyticsReporter : NSObject

{
    NSObject<OS_dispatch_queue> *_coreAnalyticsDispatchQueue;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (int)clientApplicationIDType:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)sendEvent:(id)arg1;

@end
