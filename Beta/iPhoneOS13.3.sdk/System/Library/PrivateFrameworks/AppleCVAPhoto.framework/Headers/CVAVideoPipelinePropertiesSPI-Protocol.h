/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/Swift-Protocol.h>

@class MISSING_TYPE, NSDictionary;

@protocol CVAVideoPipelinePropertiesSPI <Swift>

@property (readonly) unsigned long long videoPipelineDevice;
@property int depthPixelBufferXPadding;
@property int depthPixelBufferYPadding;
@property int depthPixelBufferXReplication;
@property int depthPixelBufferYReplication;
@property float depthPixelBufferScale;
@property float depthPixelBufferOffset;
@property float disparityStereoFocalLengthPixels;
@property float disparityStereoBaselineMeters;
@property float depthPixelBufferMaxLeftOcclusionDisparityChange;
@property float depthPixelBufferMaxRightOcclusionDisparityChange;
@property float backgroundDisparityUpdateRate;
@property float invalidDisparityRatioUpdateRate;
@property int backgroundDisparityStatsWindowSize;
@property int invalidDisparityRatioStatsWindowSize;
@property float minDeltaCanonicalDisparity;
@property float maxDeltaCanonicalDisparity;
@property float centerDeltaCanonicalDisparity;
@property float dsCanonicalLowThld;
@property float dsCanonicalLowScale;
@property float dsCanonicalHighThld;
@property float linearDeltaDepthMultiplier;
@property float linearDeltaDepthOffset;
@property float dsCanonicalHighScale;
@property float foregroundPercentile;
@property float closeDisparityPercentile;
@property float deltaDepth;
@property float mattingUpdateRate;
@property float mattingUpdateRateFast;
@property float guidedFilterUnconfidentWeight;
@property float guidedFilterMinDistToDeweight;
@property float referenceDisparity;
@property float deltaCanonicalDisparity;
@property float alphaCoeffFilterColorStd;
@property float alphaCoeffFilterColorStdFast;
@property float alphaMaxLaplacian;
@property float alphaContrastExponent;
@property float alphaGammaExponent;
@property float disparityFilterColorStd;
@property float disparityFilterUpdateRate;
@property float minimumConfidenceToKeepDisparity;
@property float maximumSimilarityToKeepDisparity;
@property float maxDisparityFillingInconsistency;
@property float maxDisparityFillingDistFromForeground;
@property int maxDistToPushDisparityEdgesFwd;
@property int maxDistToPushDisparityEdgesRev;
@property int disparityPushingBackgroundToForegroundDisparityDifference;
@property float renderingDisparityUpdateRate;
@property float renderingDisparityBlurRadius;
@property float offsetNoiseBitCalculation;
@property float gainMultiplierNoiseBitCalculation;
@property float luxMultiplierNoiseBitCalculation;
@property float renderingLensFocalLength;
@property float focusThresholdHardness;
@property float focusUpdateRateSlow;
@property float focusUpdateRateFast;
@property int maxFramesWithoutFace;
@property float faceSizeRatioInFocus;
@property float foregroundMaskDilationRadius;
@property float infConvolutionDownsampling;
@property float laplacianLimitingDownsampling;
@property float laplacianLimitingBlurSize;
@property int relightDisplayMode;
@property (retain) NSDictionary *faceKitProcessOutputOverride;
@property float relightEffectStrength;
@property float portraitStyleStrengthOverride;
@property float stageLightStateMachineIntensityIncrement;
@property double stageLightStageMachineMaxOrientationDifference;
@property float sdofStateMachineIntensityIncrement;
@property double sdofStateMachineMaxOrientationDifference;
@property _Bool modulateFocalRatio;
@property float stableBackgroundDisparitySumVariance;
@property float unstableBackgroundDisparitySumVariance;
@property float stableInvalidDisparityRatio;
@property float unstableInvalidDisparityRatio;
@property float backgroundSeparationLikelihoodLow;
@property float backgroundSeparationLikelihoodHigh;
@property float depthQualityMetricFocalPlaneOffsetMeters;
@property int guidedFilterWidth;
@property int guidedFilterHeight;
@property unsigned long long focusStatisticsXTileCount;
@property unsigned long long focusStatisticsYTileCount;
@property unsigned long long proxyToFaceEffectLerpNumFrames;
@property int rawShiftInvalidThreshold;

- (MISSING_TYPE *)validateWithError: /* Error: Ran out of types for this method. */;

@end
