/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber;

@interface SignpostMetrics : NSObject

{
    NSData *_binarySnapshot;
    NSNumber *_cpuTimeNsec;
    NSNumber *_dirtyMemoryKB;
    NSNumber *_dirtyMemoryLifetimePeakKB;
    NSNumber *_storageDirtiedKB;
    NSNumber *_cpuInstructionsKI;
}

@property (nonatomic, readonly) NSData *binarySnapshot;
@property (nonatomic, readonly) NSNumber *cpuTimeNsec;
@property (nonatomic, readonly) NSNumber *dirtyMemoryKB;
@property (nonatomic, readonly) NSNumber *dirtyMemoryLifetimePeakKB;
@property (nonatomic, readonly) NSNumber *storageDirtiedKB;
@property (nonatomic, readonly) NSNumber *cpuInstructionsKI;

+ (id)_newMetricsFromData:(id)arg1;
+ (id)_deltaDescription:(id)arg1;
+ (id)newMetricsForSignpostEvent:(id)arg1;

- (id)description;
- (id)debugDescription;
- (id)initWithSnapshotDict:(id)arg1 data:(id)arg2;

@end
