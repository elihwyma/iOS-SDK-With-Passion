/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MiroResourceUsageMonitor : NSObject

{
    struct rusage __rusageStart;
    double __timeStart;
    long long __initialResidentMemoryBytes;
    long long __initialPeakResidentMemoryBytes;
    long long __maxResidentMemoryBytes;
    NSObject<OS_dispatch_source> *__pollingTimer;
    _Bool __isRunning;
    NSObject<OS_dispatch_queue> *__isolationQueue;
    double __processorUsage;
    long long __memoryUsage;
    long long __peakMemoryUsage;
    long long __initialResidentMemoryKBytes;
    long long __initialPeakResidentMemoryKBytes;
    long long __maxResidentMemoryKBytes;
}

@property (nonatomic) struct rusage _rusageStart;
@property (nonatomic) double _timeStart;
@property (nonatomic) long long _initialResidentMemoryKBytes;
@property (nonatomic) long long _initialPeakResidentMemoryKBytes;
@property (nonatomic) long long _maxResidentMemoryKBytes;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *_pollingTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_isolationQueue;
@property (nonatomic, readonly) double processorUsage;
@property (nonatomic, readonly) long long memoryUsage;

+ (long long)_getResidentMemoryKBytes:(long long *)arg1;
+ (id)sharedResourceUsageMonitor;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)stop;
- (_Bool)start;
- (_Bool)isRunning;
- (void)_inqueue_start;
- (void)_inqueue_stop;

@end
