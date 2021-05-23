/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSString, PASampleFrame, PASampleWaitInfo;

@interface PASampleThreadData : NSObject

{
    PASampleFrame *leafUserFrame;
    PASampleFrame *leafKernelFrame;
    PASampleWaitInfo *waitInfo;
    NSString *name;
    unsigned long long threadId;
    unsigned long long dispatchQueueId;
    unsigned long long voucherIdentifier;
    unsigned long long userTimeInNs;
    unsigned long long systemTimeInNs;
    unsigned long long instructions;
    unsigned long long cycles;
    int state;
    int staticPriority;
    int currentScheduledPriority;
    int schedulerFlags;
    BOOL threadQos;
    BOOL threadRequestedQos;
    BOOL threadRequestedQosOverride;
    BOOL threadQosPromote;
    BOOL threadQosIpcOverride;
    BOOL threadQosSyncIpcOverride;
    unsigned char ioTier;
    unsigned int isIOPassive:1;
    unsigned int isSuspended:1;
    unsigned int isDarwinBG:1;
    unsigned int isGlobalForcedIdle:1;
    unsigned int isIdleWorkQueue:1;
    unsigned int isRunning:1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool hasDispatchQueue;
@property (readonly) _Bool isWaiting;
@property (readonly) _Bool isStopped;
@property (readonly) _Bool isRunnable;
@property (readonly) _Bool isWaitingUninterruptibly;
@property (readonly) _Bool isHaltedAtTermination;
@property (readonly) _Bool isAbortingInterruptibleWaits;
@property (readonly) _Bool isAbortingInterruptibleWaitsAtSafePoints;
@property (readonly) _Bool isProcessorIdleThread;
@property (readonly) _Bool hasValidPowerstatsFlags;
@property (readonly) unsigned int powerstatsFlags;
@property (readonly) _Bool hasAnyInfo;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)stack;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)initWithTid:(unsigned long long)arg1;
- (_Bool)isStackEqualTo:(id)arg1;
- (id)initWithKCDataStackshotThreadV2:(const struct thread_snapshot_v2 *)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andMachTimebase:(struct mach_timebase_info)arg5 andWaitInfo:(id)arg6;
- (id)initWithKCDataStackshotDeltaThreadV2:(const struct thread_delta_snapshot_v2 *)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andOldThreadData:(id)arg5 andWaitInfo:(id)arg6;
- (id)initWithStackshotThread:(id)arg1 andLeafUserFrame:(id)arg2 andLeafKernelFrame:(id)arg3;
- (id)initWithKCDataStackshotThreadV4:(const struct thread_snapshot_v4 *)arg1 withName:(id)arg2 leafUserFrame:(id)arg3 leafKernelFrame:(id)arg4 machTimebase:(struct mach_timebase_info)arg5 waitInfo:(id)arg6 threadPolicyVersion:(unsigned int)arg7 threadInstructionCycles:(const struct instrs_cycles_snapshot *)arg8;
- (id)initWithKCDataStackshotDeltaThreadV3:(const struct thread_delta_snapshot_v3 *)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andOldThreadData:(id)arg5 andWaitInfo:(id)arg6 threadPolicyVersion:(unsigned int)arg7;

@end
