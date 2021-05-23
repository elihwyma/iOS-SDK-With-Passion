/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _KSReachabilityMonitor : NSObject

{
    struct __SCNetworkReachability *_reachabilityRef;
    _Bool _isInternetReachable;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)startMonitoring;

- (id)init;
- (void)dealloc;
- (void)reachabilityDidChange:(_Bool)arg1;
- (void)queryInitialState;

@end
