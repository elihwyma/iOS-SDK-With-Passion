/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUIRuntimeStatistics : NSObject

{
    _Atomic long long _wasted_size;
    _Atomic long long _total_size;
    _Atomic long long _shortCircuitImageLookup;
    _Atomic long long _total_lookup;
    NSObject<OS_dispatch_queue> *_queue;
    int _notify_token;
}

+ (id)sharedRuntimeStatistics;
+ (void)generateLog;

- (id)init;
- (void)dealloc;
- (void)_logStatistics:(int)arg1;
- (void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2;
- (void)incrementStatisticDidShortCircuitImageLookup;
- (void)incrementStatisticLookup;

@end
