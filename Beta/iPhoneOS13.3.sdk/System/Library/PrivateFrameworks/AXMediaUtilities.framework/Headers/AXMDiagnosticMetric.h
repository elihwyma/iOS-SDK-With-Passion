/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface AXMDiagnosticMetric : NSObject

{
    long long _state;
    unsigned long long _startTime;
    unsigned long long _endTime;
    struct mach_task_basic_info _startTaskInfo;
    struct task_vm_info _startVMInfo;
    struct mach_task_basic_info _endTaskInfo;
    struct task_vm_info _endVMInfo;
    NSString *_name;
    long long _representedMetrics;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long representedMetrics;
@property (nonatomic, readonly) _Bool isElapsedTimeMetric;
@property (nonatomic, readonly) _Bool isMemoryFootprintMetric;
@property (nonatomic, readonly) NSNumber *initialResidentMemory;
@property (nonatomic, readonly) NSNumber *initialResidentMemoryPeak;
@property (nonatomic, readonly) NSNumber *initialPhysicalFootprint;
@property (nonatomic, readonly) NSNumber *finalResidentMemory;
@property (nonatomic, readonly) NSNumber *finalResidentMemoryPeak;
@property (nonatomic, readonly) NSNumber *finalPhysicalFootprint;
@property (nonatomic, readonly) NSNumber *residentMemoryDelta;
@property (nonatomic, readonly) NSNumber *residentMemoryPeakDelta;
@property (nonatomic, readonly) NSNumber *physicalFootprintDelta;
@property (nonatomic, readonly) NSNumber *initialTime;
@property (nonatomic, readonly) NSNumber *finalTime;
@property (nonatomic, readonly) NSNumber *elapsedTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)start;
- (void)finish;
- (void)_commonInit;
- (id)initWithName:(id)arg1 metrics:(long long)arg2;
- (void)_capturMachAbsoluteTime:(unsigned long long *)arg1 taskInfo:(struct mach_task_basic_info *)arg2 vmInfo:(struct task_vm_info *)arg3;

@end
