/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NWPathEvaluator;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SPNetworkMonitor : NSObject

{
    _Bool _cachedIsNetworkUp;
    NWPathEvaluator *_evaluator;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) NWPathEvaluator *evaluator;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) _Bool cachedIsNetworkUp;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopMonitoring;
- (_Bool)isMonitoring;
- (_Bool)isNetworkUp;
- (void)startMonitoringWithCallback:(CDUnknownBlockType)arg1;
- (void)notifyNetworkStateChange;

@end
