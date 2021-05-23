/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class MTLDebugInstrumentationData;

@protocol MTLComputePipelineStateSPI <Swift>

@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long uniqueIdentifier;
@property (retain, nonatomic, readonly) MTLDebugInstrumentationData *debugInstrumentationData;

- (unsigned short)getComputeKernelTelemetryID;

@end
