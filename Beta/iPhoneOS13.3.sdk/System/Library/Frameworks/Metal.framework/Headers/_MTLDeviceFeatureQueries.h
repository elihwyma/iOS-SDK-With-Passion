/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLDeviceFeatureQueries.h>

@class NSString;

@protocol MTLDeviceSPI;

__attribute__((visibility("hidden")))
@interface _MTLDeviceFeatureQueries : MTLDeviceFeatureQueries

{
    struct {
        NSString *name;
        long long requirement;
        _Bool supported;
    } _featureInfo[104];
    id <MTLDeviceSPI> _device;
}

- (id)initWithDevice:(id)arg1;
- (void)validate;
- (_Bool)supportsQuadReduction;
- (_Bool)supportsBufferlessClientStorageTexture;
- (_Bool)supportsArgumentBuffersTier2;
- (_Bool)supportsReadWriteTextureArgumentsTier2;
- (_Bool)supportsProgrammableSamplePositions;
- (_Bool)supportsBCTextureCompression;
- (_Bool)supports3DBCTextures;
- (_Bool)supportsLargeFramebufferConfigs;
- (_Bool)supportsCustomBorderColor;
- (_Bool)supportsSamplerAddressModeClampToHalfBorder;
- (_Bool)supports32bpcMSAATextures;
- (_Bool)supportsVertexAmplification;
- (_Bool)supportsPlacementHeaps;
- (_Bool)supportsOpenCLTextureWriteSwizzles;
- (_Bool)supportsLimitedYUVFormats;
- (_Bool)supportsNonPrivateDepthStencilTextures;
- (_Bool)supportsNonPrivateMSAATextures;
- (_Bool)supportsLinearTextureFromSharedBuffer;
- (_Bool)supportsPipelineLibraries;
- (_Bool)supportsFragmentOnlyEncoders;
- (_Bool)supportsBufferWithIOSurface;
- (_Bool)supportsProgrammableBlending;
- (_Bool)supportsRenderToLinearTextures;
- (_Bool)supportsMemorylessRenderTargets;
- (_Bool)supportsFastMathInfNaNPropagation;
- (_Bool)supportsInvariantVertexPosition;
- (_Bool)supportsShaderLODAverage;
- (_Bool)supportsRelaxedTextureViewRequirements;
- (_Bool)supportsSeparateDepthStencil;
- (_Bool)supportsGPUStatistics;
- (_Bool)supportsASTCTextureCompression;
- (_Bool)supportsExtendedYUVFormats;
- (_Bool)supportsPublicXR10Formats;
- (_Bool)supportsSRGBwrites;
- (_Bool)supportsDepthClipMode;
- (_Bool)supportsPacked32TextureBufferWrites;
- (_Bool)supports3DASTCTextures;
- (_Bool)supportsExtendedXR10Formats;
- (_Bool)supportsFragmentBufferWrites;
- (_Bool)supportsCountingOcclusionQuery;
- (_Bool)supportsBaseVertexInstanceDrawing;
- (_Bool)supportsIndirectDrawAndDispatch;
- (_Bool)supportsTessellation;
- (_Bool)supportsReadWriteBufferArguments;
- (_Bool)supportsArrayOfTextures;
- (_Bool)supportsArrayOfSamplers;
- (_Bool)supportsCombinedMSAAStoreAndResolveAction;
- (_Bool)supportsMutableTier1ArgumentBuffers;
- (_Bool)supportsSamplerCompareFunction;
- (_Bool)supportsMSAADepthResolve;
- (_Bool)supportsMSAAStencilResolve;
- (_Bool)supportsMSAADepthResolveFilter;
- (_Bool)supportsGFXIndirectCommandBuffers;
- (_Bool)supportsCMPIndirectCommandBuffers;
- (_Bool)supportsIndirectStageInRegion;
- (_Bool)supportsIndirectTextures;
- (_Bool)supportsNorm16BCubicFiltering;
- (_Bool)supportsTextureOutOfBoundsReads;
- (_Bool)supportsTextureSwizzle;
- (_Bool)supportsAlphaYUVFormats;
- (_Bool)supportsMemoryOrderAtomics;
- (_Bool)supportsQuadGroup;
- (_Bool)supportsRenderTextureWrites;
- (_Bool)supportsImageBlocks;
- (_Bool)supportsTileShaders;
- (_Bool)supportsImageBlockSampleCoverageControl;
- (_Bool)supportsNativeHardwareFP16;
- (_Bool)supportsPostDepthCoverage;
- (_Bool)supportsMipLevelsSmallerThanBlockSize;
- (_Bool)supportsNonUniformThreadgroupSize;
- (_Bool)supportsReadWriteTextureArguments;
- (_Bool)supportsReadWriteTextureCubeArguments;
- (_Bool)supportsTextureCubeArray;
- (_Bool)supportsQuadShufflesAndBroadcast;
- (_Bool)supportsConcurrentComputeDispatch;
- (_Bool)supportsRenderPassWithoutRenderTarget;
- (_Bool)supportsRasterOrderGroups;
- (_Bool)supportsLinearTexture2DArray;
- (_Bool)supportsNonSquareTileShaders;
- (_Bool)supportsSeparateVisibilityAndShadingRate;
- (_Bool)supports2DLinearTexArraySPI;
- (_Bool)supportsLayeredRendering;
- (_Bool)supportsViewportAndScissorArray;
- (_Bool)supportsIndirectTessellation;
- (_Bool)supportsMSAAStencilResolveFilter;
- (_Bool)supportsStencilFeedback;
- (_Bool)supportsFP32TessFactors;
- (_Bool)supportsSIMDGroup;
- (_Bool)supportsShaderMinLODClamp;
- (_Bool)supportsSIMDShufflesAndBroadcast;
- (_Bool)supportsVariableRateRasterization;
- (_Bool)supportsYCBCRFormats;
- (_Bool)supportsYCBCRFormatsPQ;
- (_Bool)supportsYCBCRFormats12;
- (_Bool)supportsYCBCRFormatsXR;
- (_Bool)supportsASTCHDRTextureCompression;
- (_Bool)supportsSparseTextures;
- (_Bool)supportsBlackOrWhiteSamplerBorderColors;
- (_Bool)supportsMirrorClampToEdgeSamplerMode;
- (_Bool)supportsSIMDReduction;
- (_Bool)supportsDepthClipModeClampExtended;
- (_Bool)supportsTexture2DMultisampleArray;
- (_Bool)supportsForceSeamsOnCubemaps;
- (_Bool)supportsFloat16BCubicFiltering;
- (_Bool)supportForFeature:(long long)arg1;
- (long long)requirementForFeature:(long long)arg1;
- (id)nameForFeature:(long long)arg1;

@end
