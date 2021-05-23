/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PASampleTaskDataPrivateData : NSObject

{
    long long _task_size_bytes;
    unsigned long long _ss_flags;
    int _suspend_count;
    int _faults;
    int _pageins;
    int _cow_faults;
    unsigned int _latency_qos;
    unsigned long long _terminatedThreadsUserTimeInNs;
    unsigned long long _terminatedThreadsSystemTimeInNs;
    unsigned long long _terminatedThreadsInstructions;
    unsigned long long _terminatedThreadsCycles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) int suspendCount;
@property (readonly) long long taskSizeInBytes;
@property (readonly) int numberOfPageFaults;
@property (readonly) int numberOfPageIns;
@property (readonly) int numberOfCopyOnWritePageFaults;
@property (readonly) unsigned int latencyQos;
@property (readonly) unsigned long long terminatedThreadsUserTimeInNs;
@property (readonly) unsigned long long terminatedThreadsSystemTimeInNs;
@property (readonly) unsigned long long terminatedThreadsInstructions;
@property (readonly) unsigned long long terminatedThreadsCycles;
@property (readonly) unsigned long long ss_flags;
@property (readonly) _Bool isTaskResourceFlagged;
@property (readonly) _Bool isTerminatedSnapshot;
@property (readonly) _Bool isPidSuspended;
@property (readonly) _Bool isFrozen;
@property (readonly) _Bool isDarwinBG;
@property (readonly) _Bool isDarwinExtBG;
@property (readonly) _Bool isVisible;
@property (readonly) _Bool isNonVisible;
@property (readonly) _Bool isForeground;
@property (readonly) _Bool isBoosted;
@property (readonly) _Bool isSuppressed;
@property (readonly) _Bool isTimerThrottled;
@property (readonly) _Bool isImpDonor;
@property (readonly) _Bool isLiveImpDonor;
@property (readonly) _Bool isDirty;
@property (readonly) _Bool wqExceededConstrainedThreadLimit;
@property (readonly) _Bool wqExceededTotalThreadLimit;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (_Bool)correspondsToTaskSnapshot:(const struct task_snapshot *)arg1 machTimebase:(struct mach_timebase_info)arg2;
- (_Bool)correspondsToKCDataStackshotTask:(const struct task_snapshot_v2 *)arg1 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg2 machTimebase:(struct mach_timebase_info)arg3;
- (_Bool)correspondsToKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 *)arg1 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg2 machTimebase:(struct mach_timebase_info)arg3;
- (id)initWithTaskSnapshot:(const struct task_snapshot *)arg1 machTimebase:(struct mach_timebase_info)arg2;
- (id)initWithKCDataStackshotTask:(const struct task_snapshot_v2 *)arg1 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg2 machTimebase:(struct mach_timebase_info)arg3;
- (id)initWithKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 *)arg1 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg2 machTimebase:(struct mach_timebase_info)arg3;

@end
