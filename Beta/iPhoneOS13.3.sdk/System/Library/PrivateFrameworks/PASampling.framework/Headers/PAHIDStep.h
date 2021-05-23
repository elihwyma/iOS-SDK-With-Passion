/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@interface PAHIDStep : NSObject

{
    unsigned int _debugid;
    int _pid;
    double _timestamp;
    unsigned long long _tid;
}

@property (readonly) unsigned int debugid;
@property (readonly) double timestamp;
@property (readonly) int pid;
@property (readonly) unsigned long long tid;

+ (id)hidStepWithKTraceEvent:(struct trace_point *)arg1 fromSession:(struct ktrace_session *)arg2;

- (id)debugDescription;
- (id)initWithTimestamp:(double)arg1 debugID:(unsigned int)arg2 pid:(int)arg3 tid:(unsigned long long)arg4;
- (id)initWithKTraceEvent:(struct trace_point *)arg1 fromSession:(struct ktrace_session *)arg2;

@end
