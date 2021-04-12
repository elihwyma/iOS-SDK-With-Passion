//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLDeviceSPI-Protocol.h>

@class MTLToolsPointerArray, NSArray, NSString;
@protocol MTLDeviceSPI;

@interface MTLToolsDevice : MTLToolsObject <MTLDeviceSPI>
{
    id <MTLDeviceSPI> _deviceWrapper;
    BOOL _integrated;
    NSUInteger _memorySize;
    MTLToolsPointerArray *_heaps;
    MTLToolsPointerArray *_buffers;
    MTLToolsPointerArray *_depthStencilStates;
    MTLToolsPointerArray *_textures;
    MTLToolsPointerArray *_textureLayouts;
    MTLToolsPointerArray *_samplers;
    MTLToolsPointerArray *_commandQueues;
    MTLToolsPointerArray *_libraries;
    MTLToolsPointerArray *_pipelineStates;
    MTLToolsPointerArray *_computePipelineStates;
    MTLToolsPointerArray *_functions;
    MTLToolsPointerArray *_events;
    MTLToolsPointerArray *_pipelineLibraries;
    MTLToolsPointerArray *_fences;
    MTLToolsPointerArray *_indirectArgumentEncoders;
    MTLToolsPointerArray *_argumentEncoders;
    MTLToolsPointerArray *_indirectCommandBuffers;
    MTLToolsPointerArray *_resourceGroups;
    MTLToolsPointerArray *_rasterizationRateMaps;
}

+ (void)registerDevices;
@property(readonly, nonatomic) MTLToolsPointerArray *rasterizationRateMaps; // @synthesize rasterizationRateMaps=_rasterizationRateMaps;
@property(readonly, nonatomic) MTLToolsPointerArray *resourceGroups; // @synthesize resourceGroups=_resourceGroups;
@property(readonly, nonatomic) MTLToolsPointerArray *indirectCommandBuffers; // @synthesize indirectCommandBuffers=_indirectCommandBuffers;
@property(readonly, nonatomic) MTLToolsPointerArray *argumentEncoders; // @synthesize argumentEncoders=_argumentEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *indirectArgumentEncoders; // @synthesize indirectArgumentEncoders=_indirectArgumentEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *fences; // @synthesize fences=_fences;
@property(readonly, nonatomic) MTLToolsPointerArray *pipelineLibraries; // @synthesize pipelineLibraries=_pipelineLibraries;
@property(readonly, nonatomic) MTLToolsPointerArray *events; // @synthesize events=_events;
@property(readonly, nonatomic) MTLToolsPointerArray *functions; // @synthesize functions=_functions;
@property(readonly, nonatomic) MTLToolsPointerArray *computePipelineStates; // @synthesize computePipelineStates=_computePipelineStates;
@property(readonly, nonatomic) MTLToolsPointerArray *pipelineStates; // @synthesize pipelineStates=_pipelineStates;
@property(readonly, nonatomic) MTLToolsPointerArray *libraries; // @synthesize libraries=_libraries;
@property(readonly, nonatomic) MTLToolsPointerArray *commandQueues; // @synthesize commandQueues=_commandQueues;
@property(readonly, nonatomic) MTLToolsPointerArray *samplers; // @synthesize samplers=_samplers;
@property(readonly, nonatomic) MTLToolsPointerArray *textureLayouts; // @synthesize textureLayouts=_textureLayouts;
@property(readonly, nonatomic) MTLToolsPointerArray *textures; // @synthesize textures=_textures;
@property(readonly, nonatomic) MTLToolsPointerArray *depthStencilStates; // @synthesize depthStencilStates=_depthStencilStates;
@property(readonly, nonatomic) MTLToolsPointerArray *buffers; // @synthesize buffers=_buffers;
@property(readonly, nonatomic) MTLToolsPointerArray *heaps; // @synthesize heaps=_heaps;
@property(readonly) NSUInteger memorySize; // @synthesize memorySize=_memorySize;
@property(readonly, getter=isIntegrated) BOOL integrated; // @synthesize integrated=_integrated;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL supportsFloat16BCubicFiltering;
@property(readonly, nonatomic) BOOL supportsForceSeamsOnCubemaps;
@property(readonly, nonatomic) BOOL supportsTexture2DMultisampleArray;
@property(readonly, nonatomic) BOOL supportsDepthClipModeClampExtended;
@property(readonly, nonatomic) BOOL supportsSIMDReduction;
@property(readonly, nonatomic) BOOL supportsMirrorClampToEdgeSamplerMode;
@property(readonly, nonatomic) BOOL supportsBlackOrWhiteSamplerBorderColors;
@property(readonly, nonatomic) BOOL supportsSparseTextures;
@property(readonly, nonatomic) BOOL supportsASTCHDRTextureCompression;
@property(readonly, nonatomic) BOOL supportsYCBCRFormatsXR;
@property(readonly, nonatomic) BOOL supportsYCBCRFormats12;
@property(readonly, nonatomic) BOOL supportsYCBCRFormatsPQ;
@property(readonly, nonatomic) BOOL supportsYCBCRFormats;
@property(readonly, nonatomic) BOOL supportsVariableRateRasterization;
@property(readonly, nonatomic) BOOL supportsSIMDShufflesAndBroadcast;
@property(readonly, nonatomic) BOOL supportsShaderMinLODClamp;
@property(readonly, nonatomic) BOOL supportsSIMDGroup;
@property(readonly, nonatomic) BOOL supportsFP32TessFactors;
@property(readonly, nonatomic) BOOL supportsStencilFeedback;
@property(readonly, nonatomic) BOOL supportsMSAAStencilResolveFilter;
@property(readonly, nonatomic) BOOL supportsIndirectTessellation;
@property(readonly, nonatomic) BOOL supportsViewportAndScissorArray;
@property(readonly, nonatomic) BOOL supportsLayeredRendering;
@property(readonly, nonatomic) BOOL supports2DLinearTexArraySPI;
@property(readonly, nonatomic) BOOL supportsSeparateVisibilityAndShadingRate;
@property(readonly, nonatomic) BOOL supportsNonSquareTileShaders;
@property(readonly, nonatomic) BOOL supportsLinearTexture2DArray;
@property(readonly, nonatomic) BOOL supportsRasterOrderGroups;
@property(readonly, nonatomic) BOOL supportsRenderPassWithoutRenderTarget;
@property(readonly, nonatomic) BOOL supportsConcurrentComputeDispatch;
@property(readonly, nonatomic) BOOL supportsQuadShufflesAndBroadcast;
@property(readonly, nonatomic) BOOL supportsTextureCubeArray;
@property(readonly, nonatomic) BOOL supportsReadWriteTextureCubeArguments;
@property(readonly, nonatomic) BOOL supportsReadWriteTextureArguments;
@property(readonly, nonatomic) BOOL supportsNonUniformThreadgroupSize;
@property(readonly, nonatomic) BOOL supportsMipLevelsSmallerThanBlockSize;
@property(readonly, nonatomic) BOOL supportsPostDepthCoverage;
@property(readonly, nonatomic) BOOL supportsNativeHardwareFP16;
@property(readonly, nonatomic) BOOL supportsImageBlockSampleCoverageControl;
@property(readonly, nonatomic) BOOL supportsTileShaders;
@property(readonly, nonatomic) BOOL supportsImageBlocks;
@property(readonly, nonatomic) BOOL supportsRenderTextureWrites;
@property(readonly, nonatomic) BOOL supportsQuadGroup;
@property(readonly, nonatomic) BOOL supportsMemoryOrderAtomics;
@property(readonly, nonatomic) BOOL supportsAlphaYUVFormats;
@property(readonly, nonatomic) BOOL supportsTextureSwizzle;
@property(readonly, nonatomic) BOOL supportsTextureOutOfBoundsReads;
@property(readonly, nonatomic) BOOL supportsNorm16BCubicFiltering;
@property(readonly, nonatomic) BOOL supportsIndirectTextures;
@property(readonly, nonatomic) BOOL supportsIndirectStageInRegion;
@property(readonly, nonatomic) BOOL supportsCMPIndirectCommandBuffers;
@property(readonly, nonatomic) BOOL supportsGFXIndirectCommandBuffers;
@property(readonly, nonatomic) BOOL supportsMSAADepthResolveFilter;
@property(readonly, nonatomic) BOOL supportsMSAAStencilResolve;
@property(readonly, nonatomic) BOOL supportsMSAADepthResolve;
@property(readonly, nonatomic) BOOL supportsSamplerCompareFunction;
@property(readonly, nonatomic) BOOL supportsMutableTier1ArgumentBuffers;
@property(readonly, nonatomic) BOOL supportsCombinedMSAAStoreAndResolveAction;
@property(readonly, nonatomic) BOOL supportsArrayOfSamplers;
@property(readonly, nonatomic) BOOL supportsArrayOfTextures;
@property(readonly, nonatomic) BOOL supportsReadWriteBufferArguments;
@property(readonly, nonatomic) BOOL supportsTessellation;
@property(readonly, nonatomic) BOOL supportsIndirectDrawAndDispatch;
@property(readonly, nonatomic) BOOL supportsBaseVertexInstanceDrawing;
@property(readonly, nonatomic) BOOL supportsCountingOcclusionQuery;
@property(readonly, nonatomic) BOOL supportsFragmentBufferWrites;
@property(readonly, nonatomic) BOOL supportsExtendedXR10Formats;
@property(readonly, nonatomic) BOOL supports3DASTCTextures;
@property(readonly, nonatomic) BOOL supportsPacked32TextureBufferWrites;
@property(readonly, nonatomic) BOOL supportsDepthClipMode;
@property(readonly, nonatomic) BOOL supportsSRGBwrites;
@property(readonly, nonatomic) BOOL supportsPublicXR10Formats;
@property(readonly, nonatomic) BOOL supportsExtendedYUVFormats;
@property(readonly, nonatomic) BOOL supportsASTCTextureCompression;
@property(readonly, nonatomic) BOOL supportsGPUStatistics;
@property(readonly, nonatomic) BOOL supportsSeparateDepthStencil;
@property(readonly, nonatomic) BOOL supportsRelaxedTextureViewRequirements;
@property(readonly, nonatomic) BOOL supportsShaderLODAverage;
@property(readonly, nonatomic) BOOL supportsInvariantVertexPosition;
@property(readonly, nonatomic) BOOL supportsFastMathInfNaNPropagation;
@property(readonly, nonatomic) BOOL supportsMemorylessRenderTargets;
@property(readonly, nonatomic) BOOL supportsRenderToLinearTextures;
@property(readonly, nonatomic) BOOL supportsProgrammableBlending;
@property(readonly, nonatomic) BOOL supportsBufferWithIOSurface;
@property(readonly, nonatomic) BOOL supportsFragmentOnlyEncoders;
@property(readonly, nonatomic) BOOL supportsPipelineLibraries;
@property(readonly, nonatomic) BOOL supportsLinearTextureFromSharedBuffer;
@property(readonly, nonatomic) BOOL supportsNonPrivateMSAATextures;
@property(readonly, nonatomic) BOOL supportsNonPrivateDepthStencilTextures;
@property(readonly, nonatomic) BOOL supportsLimitedYUVFormats;
@property(readonly, nonatomic) BOOL supportsOpenCLTextureWriteSwizzles;
@property(readonly, nonatomic) BOOL supportsPlacementHeaps;
@property(readonly, nonatomic) BOOL supportsVertexAmplification;
@property(readonly, nonatomic) BOOL supports32bpcMSAATextures;
@property(readonly, nonatomic) BOOL supportsSamplerAddressModeClampToHalfBorder;
@property(readonly, nonatomic) BOOL supportsCustomBorderColor;
@property(readonly, nonatomic) BOOL supportsLargeFramebufferConfigs;
@property(readonly, nonatomic) BOOL supports3DBCTextures;
@property(readonly, nonatomic) BOOL supportsBCTextureCompression;
@property(readonly, nonatomic) BOOL supportsProgrammableSamplePositions;
@property(readonly, nonatomic) BOOL supportsReadWriteTextureArgumentsTier2;
@property(readonly, nonatomic) BOOL supportsArgumentBuffersTier2;
@property(readonly, nonatomic) BOOL supportsBufferlessClientStorageTexture;
@property(readonly, nonatomic) BOOL supportsQuadReduction;
- (BOOL)supportsVertexAmplificationCount:(NSUInteger)arg1;
@property(readonly, getter=isPlacementHeapSupported) BOOL placementHeapSupported;
- (void)convertSparseTileRegions:(const CDStruct_1e3be3a8 )arg1 toPixelRegions:(CDStruct_1e3be3a8 )arg2 withTileSize:(CDStruct_14f26992)arg3 numRegions:(NSUInteger)arg4;
- (void)convertSparsePixelRegions:(const CDStruct_1e3be3a8 )arg1 toTileRegions:(CDStruct_1e3be3a8 )arg2 withTileSize:(CDStruct_14f26992)arg3 alignmentMode:(NSUInteger)arg4 numRegions:(NSUInteger)arg5;
@property(readonly) NSUInteger sparseTileSizeInBytes;
- (BOOL)setResourcesPurgeableState:(id )arg1 newState:(NSUInteger)arg2 oldState:(NSUInteger )arg3 count:(int)arg4;
- (void)allowLibrariesFromOtherPlatforms;
@property(readonly) NSUInteger currentAllocatedSize;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setupMPSFunctionTable:(struct MPSFunctionTable )arg1;
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(BOOL)arg2;
- (void)eventSignaled:(id)arg1 value:(NSUInteger)arg2;
- (id)newSharedEventWithHandle:(id)arg1;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;
- (id)newSharedEvent;
- (id)newEvent;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface )arg2 plane:(NSUInteger)arg3;
@property(nonatomic) BOOL metalAssertionsEnabled;
- (id)newResourceGroupFromResources:(const id )arg1 count:(NSUInteger)arg2;
- (CDStruct_14f26992)sparseTileSizeWithTextureType:(NSUInteger)arg1 pixelFormat:(NSUInteger)arg2 sampleCount:(NSUInteger)arg3;
- (CDStruct_14f26992)tileSizeWithSparsePageSize:(NSUInteger)arg1 textureType:(NSUInteger)arg2 pixelFormat:(NSUInteger)arg3 sampleCount:(NSUInteger)arg4;
@property(readonly) NSUInteger sparseTexturesSupport;
@property(readonly, getter=isQuadDataSharingSupported) BOOL quadDataSharingSupported;
@property(readonly, getter=areRasterOrderGroupsSupported) BOOL rasterOrderGroupsSupported;
@property(readonly) NSUInteger argumentBuffersSupport;
@property(readonly) NSUInteger readWriteTextureSupport;
@property(readonly) NSUInteger maxBufferLength;
@property(readonly) NSUInteger minTilePixels;
@property(readonly) NSUInteger maxTileInlineDataSize;
@property(readonly) NSUInteger maxTileSamplers;
@property(readonly) NSUInteger maxTileTextures;
@property(readonly) NSUInteger maxTileBuffers;
@property(readonly) NSUInteger linearTextureArrayAlignmentSlice;
@property(readonly) NSUInteger linearTextureArrayAlignmentBytes;
@property(readonly) NSUInteger maxFramebufferStorageBits;
@property(readonly) NSUInteger maxComputeAttributes;
@property(readonly) NSUInteger maxTextureBufferWidth;
@property(readonly) NSUInteger maxVertexAmplificationCount;
@property(readonly) NSUInteger maxVertexAmplificationFactor;
@property(readonly) NSUInteger maxCustomSamplePositions;
@property(readonly) NSUInteger maxViewportCount;
@property(readonly) NSUInteger maxIndirectSamplersPerDevice;
@property(readonly) NSUInteger maxIndirectSamplers;
@property(readonly) NSUInteger maxIndirectTextures;
@property(readonly) NSUInteger maxIndirectBuffers;
@property(readonly) NSUInteger maxTessellationFactor;
@property(readonly) NSUInteger maxInterpolatedComponents;
@property(readonly) NSUInteger maxComputeThreadgroupMemoryAlignmentBytes;
@property(readonly) NSUInteger maxFunctionConstantIndices;
@property(readonly) NSUInteger deviceLinearReadOnlyTextureAlignmentBytes;
@property(readonly) NSUInteger deviceLinearTextureAlignmentBytes;
@property(readonly) NSUInteger iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) NSUInteger iosurfaceTextureAlignmentBytes;
@property(readonly) NSUInteger linearTextureAlignmentBytes;
@property(readonly) NSUInteger maxTextureLayers;
@property(readonly) NSUInteger maxTextureDimensionCube;
@property(readonly) NSUInteger maxTextureDepth3D;
@property(readonly) NSUInteger maxTextureHeight3D;
@property(readonly) NSUInteger maxTextureWidth3D;
@property(readonly) NSUInteger maxTextureHeight2D;
@property(readonly) NSUInteger maxTextureWidth2D;
@property(readonly) NSUInteger maxTextureWidth1D;
@property(readonly) NSUInteger minBufferNoCopyAlignmentBytes;
@property(readonly) NSUInteger minConstantBufferAlignmentBytes;
@property(readonly) NSUInteger maxVisibilityQueryOffset;
@property(readonly) float maxPointSize;
@property(readonly) float maxLineWidth;
@property(readonly) NSUInteger maxComputeThreadgroupMemory;
@property(readonly) NSUInteger maxTotalComputeThreadsPerThreadgroup;
@property(readonly) NSUInteger maxComputeLocalMemorySizes;
@property(readonly) NSUInteger maxComputeInlineDataSize;
@property(readonly) NSUInteger maxComputeSamplers;
@property(readonly) NSUInteger maxComputeTextures;
@property(readonly) NSUInteger maxComputeBuffers;
@property(readonly) NSUInteger maxFragmentInlineDataSize;
@property(readonly) NSUInteger maxFragmentSamplers;
@property(readonly) NSUInteger maxFragmentTextures;
@property(readonly) NSUInteger maxFragmentBuffers;
@property(readonly) NSUInteger maxInterpolants;
@property(readonly) NSUInteger maxVertexInlineDataSize;
@property(readonly) NSUInteger maxVertexSamplers;
@property(readonly) NSUInteger maxVertexTextures;
@property(readonly) NSUInteger maxVertexBuffers;
@property(readonly) NSUInteger maxVertexAttributes;
@property(readonly) NSUInteger maxColorAttachments;
@property(readonly) BOOL supportPriorityBand;
@property(readonly) const CDStruct_886a8514 limits;
@property(readonly) NSUInteger featureProfile;
@property(readonly) NSUInteger doubleFPConfig;
@property(readonly) NSUInteger singleFPConfig;
@property(readonly) NSUInteger halfFPConfig;
- (void)reserveResourceIndicesForResourceType:(NSUInteger)arg1 indices:(NSUInteger )arg2 indexCount:(NSUInteger)arg3;
- (NSUInteger)resourcePatchingTypeForResourceType:(NSUInteger)arg1;
- (id)newBufferWithIOSurface:(struct __IOSurface )arg1;
- (id)_deviceWrapper;
- (void)_setDeviceWrapper:(id)arg1;
@property(readonly) NSUInteger maxRasterizationRateLayerCount;
- (id)newRasterizationRateMapWithDescriptor:(id)arg1;
- (BOOL)supportsRasterizationRateMapWithLayerCount:(NSUInteger)arg1;
- (void)getDefaultSamplePositions:(CDStruct_b2fbf00d )arg1 count:(NSUInteger)arg2;
@property(readonly, getter=areProgrammableSamplePositionsSupported) BOOL programmableSamplePositionsSupported;
- (NSUInteger)minimumTextureBufferAlignmentForPixelFormat:(NSUInteger)arg1;
- (NSUInteger)minimumLinearTextureAlignmentForPixelFormat:(NSUInteger)arg1;
- (NSUInteger)minLinearTextureAlignmentForPixelFormat:(NSUInteger)arg1;
- (BOOL)supportsSampleCount:(NSUInteger)arg1;
- (BOOL)supportsTextureSampleCount:(NSUInteger)arg1;
- (BOOL)supportsFamily:(long long)arg1;
- (BOOL)supportsFeatureSet:(NSUInteger)arg1;
- (BOOL)deviceOrFeatureProfileSupportsFeatureSet:(NSUInteger)arg1;
- (BOOL)deviceSupportsFeatureSet:(NSUInteger)arg1;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa )arg2 error:(id )arg3;
- (id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa )arg2 error:(id )arg3;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa )arg2 error:(id )arg3;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa )arg2 error:(id )arg3;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(NSUInteger)arg2 reflection:(id )arg3 error:(id )arg4;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id )arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(NSUInteger)arg2 reflection:(id )arg3 error:(id )arg4;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id )arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(NSUInteger)arg2 reflection:(id )arg3 error:(id )arg4;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id )arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(NSUInteger)arg2 reflection:(id )arg3 error:(id )arg4;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id )arg2;
- (id)unwrapMTLTileRenderPipelineDescriptor:(id)arg1;
- (id)unwrapMTLComputePipelineDescriptor:(id)arg1;
- (id)unwrapMTLRenderPipelineDescriptor:(id)arg1;
@property(readonly) NSUInteger maxArgumentBufferSamplerCount;
@property(readonly) NSUInteger maxThreadgroupMemoryLength;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newIndirectArgumentEncoderWithLayout:(id)arg1;
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1;
@property(readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities;
- (id)newFence;
- (id)newHeapWithDescriptor:(id)arg1;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (id)serializeStructType:(id)arg1;
- (id)newComputePipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2;
- (id)newRenderPipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2;
- (id)serializeRenderPipelineDescriptor:(id)arg1;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id )arg2;
- (id)endCollectingPipelineDescriptors;
- (void)startCollectingPipelineDescriptors;
- (id)newLibraryWithData:(id)arg1 error:(id )arg2;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id )arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id )arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id )arg2;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id )arg2;
- (id)newDefaultLibrary;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newTextureWithBytesNoCopy:(void )arg1 length:(NSUInteger)arg2 descriptor:(id)arg3 deallocator:(id /* CDUnknownBlockType */)arg4;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(NSUInteger)arg2 options:(NSUInteger)arg3;
- (id)newIndirectComputeCommandEncoderWithBuffer:(id)arg1;
- (id)newIndirectRenderCommandEncoderWithBuffer:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCount:(NSUInteger)arg2 options:(NSUInteger)arg3;
- (id)newBufferWithBytesNoCopy:(void )arg1 length:(NSUInteger)arg2 options:(NSUInteger)arg3 deallocator:(id /* CDUnknownBlockType */)arg4;
- (id)newBufferWithBytes:(const void )arg1 length:(NSUInteger)arg2 options:(NSUInteger)arg3;
- (id)newBufferWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(NSUInteger)arg1;
- (id)newCommandQueue;
- (void)compilerPropagatesThreadPriority:(BOOL)arg1;
- (void )getShaderCacheKeys;
- (BOOL)copyShaderCacheToPath:(id)arg1;
- (CDStruct_c0454aff)pipelineCacheStats;
- (CDStruct_c0454aff)libraryCacheStats;
- (void)unloadShaderCaches;
@property(readonly, getter=isDepth24Stencil8PixelFormatSupported) BOOL depth24Stencil8PixelFormatSupported;
@property(readonly) NSUInteger dedicatedMemorySize;
@property(readonly) NSUInteger sharedMemorySize;
@property(readonly) NSUInteger recommendedMaxWorkingSetSize;
@property(readonly) BOOL hasUnifiedMemory;
@property(readonly, getter=isRemovable) BOOL removable;
@property(readonly, getter=isHeadless) BOOL headless;
@property(readonly, getter=isLowPower) BOOL lowPower;
@property(readonly) CDStruct_14f26992 maxThreadsPerThreadgroup;
- (NSUInteger)offsetFromIndirectBufferAddress:(NSUInteger)arg1;
- (NSUInteger)resourceIndexFromIndirectBufferAddress:(NSUInteger)arg1;
- (NSUInteger)indirectBufferAddressForResourceIndex:(NSUInteger)arg1 offset:(NSUInteger)arg2;
- (void)removeResourceFromGlobalResourceTable:(NSUInteger)arg1 resourceType:(NSUInteger)arg2;
- (void)addIndirectCommandBufferToGlobalResourceTable:(id)arg1;
- (void)addRenderPipelineStateToGlobalResourceTable:(id)arg1;
- (void)addComputePipelineStateToGlobalResourceTable:(id)arg1;
- (void)addSamplerStateToGlobalResourceTable:(id)arg1;
- (void)addTextureToGlobalResourceTable:(id)arg1;
- (void)addBufferToGlobalResourceTable:(id)arg1;
- (BOOL)requiresIndirectionForAllResourceTypes;
- (id)newBufferWithBytesNoCopy:(void )arg1 length:(NSUInteger)arg2 options:(NSUInteger)arg3 atResourceIndex:(NSUInteger)arg4 deallocator:(id /* CDUnknownBlockType */)arg5;
- (id)newBufferWithBytes:(const void )arg1 length:(NSUInteger)arg2 options:(NSUInteger)arg3 atResourceIndex:(NSUInteger)arg4;
- (id)newBufferWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2 atResourceIndex:(NSUInteger)arg3;
- (id)utilityBufferForRenderCommandEncoder:(id)arg1;
- (id)utilityBufferForComputeCommandEncoder:(id)arg1;
- (NSUInteger)createNewUtilityBuffer;
- (BOOL)useDeviceResourceTableForType:(NSUInteger)arg1;
@property(readonly, getter=isUtilityBufferRequired) BOOL utilityBufferRequired;
@property(retain, nonatomic) NSArray *utilityBuffers;
@property NSUInteger currentUtilityBufferIndex;
@property(nonatomic, getter=isResourceIndirectionEnabled) BOOL resourceIndirectionEnabled;
@property(getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) BOOL gpuAssertionsEnabled;
- (id)productName;
- (id)familyName;
- (id)vendorName;
@property(readonly) NSUInteger registryID;
@property(readonly) NSString *name;
- (id)reportLeaks;
- (void)unmapShaderSampleBuffer;
- (BOOL)mapShaderSampleBufferWithBuffer:(CDStruct_32a7f38a )arg1 capacity:(NSUInteger)arg2 size:(NSUInteger)arg3;
@property BOOL shaderDebugInfoCaching;
- (id)newFunctionWithGLIR:(void )arg1 inputsDescription:(id)arg2 functionType:(NSUInteger)arg3;
- (id)newFunctionWithGLIR:(void )arg1 functionType:(NSUInteger)arg2;
- (void)dealloc;
- (void)acceptVisitor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(struct ILayerLockingPolicy )arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

@end

