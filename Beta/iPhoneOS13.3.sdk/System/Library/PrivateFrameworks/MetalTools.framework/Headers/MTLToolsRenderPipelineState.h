/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

@class MTLDebugInstrumentationData, NSString;

@protocol MTLDevice;

@interface MTLToolsRenderPipelineState : MTLToolsObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) _Bool threadgroupSizeMatchesTileSize;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) _Bool supportIndirectCommandBuffers;
@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long uniqueIdentifier;
@property (retain, nonatomic, readonly) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property (retain, nonatomic, readonly) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;

- (void)dealloc;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
- (unsigned int)getVertexShaderTelemetryID;
- (unsigned int)getFragmentShaderTelemetryID;
- (id)newVertexShaderDebugInfo;
- (id)newFragmentShaderDebugInfo;
- (void)acceptVisitor:(id)arg1;

@end
