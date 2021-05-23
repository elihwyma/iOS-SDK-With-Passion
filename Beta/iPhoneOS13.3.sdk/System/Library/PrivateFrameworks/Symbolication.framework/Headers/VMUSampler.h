/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, VMUProcessDescription;

@interface VMUSampler : NSObject

{
    unsigned long long _options;
    int _pid;
    unsigned int _task;
    _Bool _needTaskPortDealloc;
    _Bool _recordThreadStates;
    _Bool _sampling;
    unsigned int _numberOfCopiedBacktraces;
    NSString *_processName;
    VMUProcessDescription *_processDescription;
    struct _CSTypeRef _symbolicator;
    unsigned int _suspensionToken;
    struct sampling_context_t *_samplingContext;
    NSMapTable *_lastThreadBacktraceMap;
    unsigned int *_previousThreadList;
    unsigned int _mainThread;
    unsigned int _previousThreadCount;
    unsigned int _maxPreviousThreadCount;
    double _tbRate;
    double _tbInterval;
    NSConditionLock *_stateLock;
    double _interval;
    double _timeLimit;
    unsigned int _sampleLimit;
    unsigned int _numberOfSamples;
    NSMutableArray *_samples;
    _Bool _stacksFixed;
    id _delegate;
    double _timeSpentSampling;
    unsigned int _dispatchThreadSoftLimit;
    unsigned int _dispatchThreadSoftLimitCount;
    unsigned int _dispatchThreadHardLimit;
    unsigned int _dispatchThreadHardLimitCount;
    NSMutableDictionary *_threadPortToNameMap;
    NSMutableDictionary *_dispatchQueueSerialNumToNameMap;
}

+ (void)initialize;
+ (id)sampleAllThreadsOfPID:(int)arg1;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 symbolicate:(_Bool)arg2;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (_Bool)stop;
- (_Bool)start;
- (unsigned int)mainThread;
- (void)setSamplingInterval:(double)arg1;
- (double)samplingInterval;
- (id)samples;
- (unsigned int)sampleCount;
- (int)pid;
- (id)initWithPID:(int)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (double)timeLimit;
- (void)setTimeLimit:(double)arg1;
- (_Bool)waitUntilDone;
- (id)outputString;
- (id)initWithPID:(int)arg1 options:(unsigned long long)arg2;
- (id)sampleThread:(unsigned int)arg1;
- (void)forceStop;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)sampleAllThreadsOnceWithFramePointers:(_Bool)arg1;
- (id)threadDescriptionStringForBacktrace:(id)arg1 returnedAddress:(unsigned long long *)arg2;
- (id)initWithPID:(int)arg1 task:(unsigned int)arg2 processName:(id)arg3 is64Bit:(_Bool)arg4 options:(unsigned long long)arg5;
- (id)initWithPID:(int)arg1 orTask:(unsigned int)arg2 options:(unsigned long long)arg3;
- (void)_checkDispatchThreadLimits;
- (void)_makeHighPriority;
- (void)initializeSamplingContextWithOptions:(int)arg1;
- (unsigned long long)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned int)arg4 recordFramePointers:(_Bool)arg5 clearMemoryCache:(_Bool)arg6;
- (void)_makeTimeshare;
- (id)sampleAllThreadsOnce;
- (void)_fixupStacks:(id)arg1;
- (struct _CSTypeRef)symbolicator;
- (void)_runSamplingThread;
- (id)threadNameForThread:(unsigned int)arg1 returnedThreadId:(unsigned long long *)arg2 returnedDispatchQueueSerialNum:(unsigned long long *)arg3;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(_Bool *)arg2 returnedThreadId:(unsigned long long *)arg3;
- (void)stopSampling;
- (id)stopSamplingAndReturnCallNode;
- (void)setSampleLimit:(unsigned int)arg1;
- (unsigned int)sampleLimit;
- (void)setRecordThreadStates:(_Bool)arg1;
- (void)flushData;
- (id)threadNameForThread:(unsigned int)arg1;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1;
- (void)preloadSymbols;
- (void)sampleForDuration:(unsigned int)arg1 interval:(unsigned int)arg2;
- (void)writeOutput:(id)arg1 append:(_Bool)arg2;

@end
