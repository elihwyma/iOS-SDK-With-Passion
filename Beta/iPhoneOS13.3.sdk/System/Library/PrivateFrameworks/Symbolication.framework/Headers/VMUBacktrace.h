/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@interface VMUBacktrace : NSObject

{
    int _flavor;
    struct {
        struct {
            double t_begin;
            double t_end;
            int pid;
            unsigned int thread;
            int run_state;
            unsigned long long dispatch_queue_serial_num;
        } context;
        unsigned long long *frames;
        unsigned long long *framePtrs;
        unsigned int length;
    } _callstack;
}

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setEndTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (unsigned long long *)backtrace;
- (unsigned int)thread;
- (unsigned int)backtraceLength;
- (unsigned long long *)stackFramePointers;
- (struct _CSTypeRef)_symbolicator;
- (id)initWithSamplingContext:(struct sampling_context_t *)arg1 thread:(unsigned int)arg2 recordFramePointers:(_Bool)arg3;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t *)arg1 symbolicator:(struct _CSTypeRef)arg2;
- (unsigned long long)dispatchQueueSerialNumber;
- (id)initWithTask:(unsigned int)arg1 thread:(unsigned int)arg2 is64Bit:(_Bool)arg3;
- (void)setLengthTime:(double)arg1;
- (void)setThreadState:(int)arg1;
- (int)threadState;

@end
