/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLDeviceFeatureQueries : NSObject

@property (nonatomic, readonly) _Bool supportsQuadReduction;
@property (nonatomic, readonly) _Bool supportsBufferlessClientStorageTexture;
@property (nonatomic, readonly) _Bool supportsArgumentBuffersTier2;
@property (nonatomic, readonly) _Bool supportsReadWriteTextureArgumentsTier2;
@property (nonatomic, readonly) _Bool supportsProgrammableSamplePositions;
@property (nonatomic, readonly) _Bool supportsBCTextureCompression;
@property (nonatomic, readonly) _Bool supports3DBCTextures;
@property (nonatomic, readonly) _Bool supportsLargeFramebufferConfigs;
@property (nonatomic, readonly) _Bool supportsCustomBorderColor;
@property (nonatomic, readonly) _Bool supportsSamplerAddressModeClampToHalfBorder;
@property (nonatomic, readonly) _Bool supports32bpcMSAATextures;
@property (nonatomic, readonly) _Bool supportsVertexAmplification;
@property (nonatomic, readonly) _Bool supportsPlacementHeaps;
@property (nonatomic, readonly) _Bool supportsOpenCLTextureWriteSwizzles;
@property (nonatomic, readonly) _Bool supportsLimitedYUVFormats;
@property (nonatomic, readonly) _Bool supportsNonPrivateDepthStencilTextures;
@property (nonatomic, readonly) _Bool supportsNonPrivateMSAATextures;
@property (nonatomic, readonly) _Bool supportsLinearTextureFromSharedBuffer;
@property (nonatomic, readonly) _Bool supportsPipelineLibraries;
@property (nonatomic, readonly) _Bool supportsFragmentOnlyEncoders;
@property (nonatomic, readonly) _Bool supportsBufferWithIOSurface;
@property (nonatomic, readonly) _Bool supportsProgrammableBlending;
@property (nonatomic, readonly) _Bool supportsRenderToLinearTextures;
@property (nonatomic, readonly) _Bool supportsMemorylessRenderTargets;
@property (nonatomic, readonly) _Bool supportsFastMathInfNaNPropagation;
@property (nonatomic, readonly) _Bool supportsInvariantVertexPosition;
@property (nonatomic, readonly) _Bool supportsShaderLODAverage;
@property (nonatomic, readonly) _Bool supportsRelaxedTextureViewRequirements;
@property (nonatomic, readonly) _Bool supportsSeparateDepthStencil;
@property (nonatomic, readonly) _Bool supportsGPUStatistics;
@property (nonatomic, readonly) _Bool supportsASTCTextureCompression;
@property (nonatomic, readonly) _Bool supportsExtendedYUVFormats;
@property (nonatomic, readonly) _Bool supportsPublicXR10Formats;
@property (nonatomic, readonly) _Bool supportsSRGBwrites;
@property (nonatomic, readonly) _Bool supportsDepthClipMode;
@property (nonatomic, readonly) _Bool supportsPacked32TextureBufferWrites;
@property (nonatomic, readonly) _Bool supports3DASTCTextures;
@property (nonatomic, readonly) _Bool supportsExtendedXR10Formats;
@property (nonatomic, readonly) _Bool supportsFragmentBufferWrites;
@property (nonatomic, readonly) _Bool supportsCountingOcclusionQuery;
@property (nonatomic, readonly) _Bool supportsBaseVertexInstanceDrawing;
@property (nonatomic, readonly) _Bool supportsIndirectDrawAndDispatch;
@property (nonatomic, readonly) _Bool supportsTessellation;
@property (nonatomic, readonly) _Bool supportsReadWriteBufferArguments;
@property (nonatomic, readonly) _Bool supportsArrayOfTextures;
@property (nonatomic, readonly) _Bool supportsArrayOfSamplers;
@property (nonatomic, readonly) _Bool supportsCombinedMSAAStoreAndResolveAction;
@property (nonatomic, readonly) _Bool supportsMutableTier1ArgumentBuffers;
@property (nonatomic, readonly) _Bool supportsSamplerCompareFunction;
@property (nonatomic, readonly) _Bool supportsMSAADepthResolve;
@property (nonatomic, readonly) _Bool supportsMSAAStencilResolve;
@property (nonatomic, readonly) _Bool supportsMSAADepthResolveFilter;
@property (nonatomic, readonly) _Bool supportsGFXIndirectCommandBuffers;
@property (nonatomic, readonly) _Bool supportsCMPIndirectCommandBuffers;
@property (nonatomic, readonly) _Bool supportsIndirectStageInRegion;
@property (nonatomic, readonly) _Bool supportsIndirectTextures;
@property (nonatomic, readonly) _Bool supportsNorm16BCubicFiltering;
@property (nonatomic, readonly) _Bool supportsTextureOutOfBoundsReads;
@property (nonatomic, readonly) _Bool supportsTextureSwizzle;
@property (nonatomic, readonly) _Bool supportsAlphaYUVFormats;
@property (nonatomic, readonly) _Bool supportsMemoryOrderAtomics;
@property (nonatomic, readonly) _Bool supportsQuadGroup;
@property (nonatomic, readonly) _Bool supportsRenderTextureWrites;
@property (nonatomic, readonly) _Bool supportsImageBlocks;
@property (nonatomic, readonly) _Bool supportsTileShaders;
@property (nonatomic, readonly) _Bool supportsImageBlockSampleCoverageControl;
@property (nonatomic, readonly) _Bool supportsNativeHardwareFP16;
@property (nonatomic, readonly) _Bool supportsPostDepthCoverage;
@property (nonatomic, readonly) _Bool supportsMipLevelsSmallerThanBlockSize;
@property (nonatomic, readonly) _Bool supportsNonUniformThreadgroupSize;
@property (nonatomic, readonly) _Bool supportsReadWriteTextureArguments;
@property (nonatomic, readonly) _Bool supportsReadWriteTextureCubeArguments;
@property (nonatomic, readonly) _Bool supportsTextureCubeArray;
@property (nonatomic, readonly) _Bool supportsQuadShufflesAndBroadcast;
@property (nonatomic, readonly) _Bool supportsConcurrentComputeDispatch;
@property (nonatomic, readonly) _Bool supportsRenderPassWithoutRenderTarget;
@property (nonatomic, readonly) _Bool supportsRasterOrderGroups;
@property (nonatomic, readonly) _Bool supportsLinearTexture2DArray;
@property (nonatomic, readonly) _Bool supportsNonSquareTileShaders;
@property (nonatomic, readonly) _Bool supportsSeparateVisibilityAndShadingRate;
@property (nonatomic, readonly) _Bool supports2DLinearTexArraySPI;
@property (nonatomic, readonly) _Bool supportsLayeredRendering;
@property (nonatomic, readonly) _Bool supportsViewportAndScissorArray;
@property (nonatomic, readonly) _Bool supportsIndirectTessellation;
@property (nonatomic, readonly) _Bool supportsMSAAStencilResolveFilter;
@property (nonatomic, readonly) _Bool supportsStencilFeedback;
@property (nonatomic, readonly) _Bool supportsFP32TessFactors;
@property (nonatomic, readonly) _Bool supportsSIMDGroup;
@property (nonatomic, readonly) _Bool supportsShaderMinLODClamp;
@property (nonatomic, readonly) _Bool supportsSIMDShufflesAndBroadcast;
@property (nonatomic, readonly) _Bool supportsVariableRateRasterization;
@property (nonatomic, readonly) _Bool supportsYCBCRFormats;
@property (nonatomic, readonly) _Bool supportsYCBCRFormatsPQ;
@property (nonatomic, readonly) _Bool supportsYCBCRFormats12;
@property (nonatomic, readonly) _Bool supportsYCBCRFormatsXR;
@property (nonatomic, readonly) _Bool supportsASTCHDRTextureCompression;
@property (nonatomic, readonly) _Bool supportsSparseTextures;
@property (nonatomic, readonly) _Bool supportsBlackOrWhiteSamplerBorderColors;
@property (nonatomic, readonly) _Bool supportsMirrorClampToEdgeSamplerMode;
@property (nonatomic, readonly) _Bool supportsSIMDReduction;
@property (nonatomic, readonly) _Bool supportsDepthClipModeClampExtended;
@property (nonatomic, readonly) _Bool supportsTexture2DMultisampleArray;
@property (nonatomic, readonly) _Bool supportsForceSeamsOnCubemaps;
@property (nonatomic, readonly) _Bool supportsFloat16BCubicFiltering;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)initWithDevice:(id)arg1;

@end
