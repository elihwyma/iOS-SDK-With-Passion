/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class MISSING_TYPE, MTLDebugInstrumentationData;

@protocol MTLRenderPipelineStateSPI <Swift>

@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long uniqueIdentifier;
@property (retain, nonatomic, readonly) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property (retain, nonatomic, readonly) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;

- (MISSING_TYPE *)getVertexShaderTelemetryID;
- (MISSING_TYPE *)getFragmentShaderTelemetryID;
- (MISSING_TYPE *)newVertexShaderDebugInfo;
- (MISSING_TYPE *)newFragmentShaderDebugInfo;

@end
