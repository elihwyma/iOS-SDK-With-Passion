/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface AKNetworkObserver : NSObject

{
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_invocationByObserver;
    _Bool _isNetworkReachable;
}

@property (readonly) _Bool isNetworkReachable;

+ (id)sharedNetworkObserver;

- (id)init;
- (void)dealloc;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)_startPathMonitor;
- (void)_stopPathMonitor;
- (void)_networkReachabilityDidChange;

@end
