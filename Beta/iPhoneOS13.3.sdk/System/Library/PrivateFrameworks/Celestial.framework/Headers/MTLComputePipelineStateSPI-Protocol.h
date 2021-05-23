/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@class MTLDebugInstrumentationData;

@protocol MTLComputePipelineStateSPI <Swift>

@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long uniqueIdentifier;
@property (retain, nonatomic, readonly) MTLDebugInstrumentationData *debugInstrumentationData;

- (unsigned short)getComputeKernelTelemetryID;

@end
