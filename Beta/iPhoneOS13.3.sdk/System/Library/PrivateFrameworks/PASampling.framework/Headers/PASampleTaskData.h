/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID, PASampleTaskDataPrivateData, PASampleTimeInsensitiveTaskData;

@interface PASampleTaskData : NSObject

{
    NSMutableDictionary *_sampleThreadsDict;
    PASampleTimeInsensitiveTaskData *_timeInsensitiveTaskData;
    PASampleTaskDataPrivateData *_privateData;
    NSSet *_donatingUniqueIds;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSDictionary *sampleThreads;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniquePid;
@property (copy) NSString *name;
@property (readonly) NSString *bundleName;
@property (readonly) NSString *mainBinaryPath;
@property (readonly) NSArray *imageInfos;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) _Bool isUnresponsive;
@property (readonly) double timeOfLastResponse;
@property (readonly) _Bool usesSuddenTermination;
@property (readonly) _Bool allowsIdleExit;
@property (readonly) _Bool isThirdParty;
@property (readonly) _Bool isTranslocated;
@property (readonly) _Bool wqAndDirtyAreStatic;
@property (readonly) int suspendCount;
@property (readonly) long long taskSizeInBytes;
@property (readonly) int numberOfPageFaults;
@property (readonly) int numberOfPageIns;
@property (readonly) int numberOfCopyOnWritePageFaults;
@property (readonly) unsigned int latency_qos;
@property (readonly) unsigned long long terminatedThreadsUserTimeInNs;
@property (readonly) unsigned long long terminatedThreadsSystemTimeInNs;
@property (readonly) unsigned long long terminatedThreadsInstructions;
@property (readonly) unsigned long long terminatedThreadsCycles;
@property (retain) NSSet *donatingUniqueIds;
@property (readonly) double mostRecentTimeSamplingOnlyMainThread;
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

- (struct _CSArchitecture)architecture;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)architectureString;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)initWithTimeInsensitiveTaskData:(id)arg1;
- (id)sampleThreadForTid:(unsigned long long)arg1;
- (id)mutableSampleThreads;
- (id)timeInsensitiveTaskData;
- (void)setSampleThreads:(id)arg1;
- (id)initWithStackshotTask:(id)arg1 andTimeInsensitiveTaskData:(id)arg2 machTimebase:(struct mach_timebase_info)arg3;
- (id)initWithKCDataStackshotTask:(const struct task_snapshot_v2 *)arg1 andTimeInsensitiveTaskData:(id)arg2 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg3 machTimebase:(struct mach_timebase_info)arg4;
- (id)initWithKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 *)arg1 andTimeInsensitiveTaskData:(id)arg2 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg3 machTimebase:(struct mach_timebase_info)arg4;
- (_Bool)isSameAsTask:(id)arg1;

@end
