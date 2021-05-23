/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVTextureDescription.h>

@interface ASVTextureConversionEstimate : ASVTextureDescription

{
    long long _converterType;
    CDStruct_ba838cea _estimatedMemoryDelta;
}

@property (nonatomic) long long converterType;
@property (nonatomic) CDStruct_ba838cea estimatedMemoryDelta;
@property (nonatomic, readonly) unsigned long long weight;

+ (id)textureDescription:(id)arg1 downsampledToTryAndFitDestinationWithinSize: /* Error: Ran out of types for this method. */;
+ (id)conversionEstimatesSortedByPeakMemoryUsage:(id)arg1;
+ (unsigned long long)peakMemoryForConversionEstimates:(id)arg1;
+ (id)heaviestConversionEstimate:(id)arg1 withMinimumDestinationSize: /* Error: Ran out of types for this method. */;
+ (id)conversionEstimatesFromTextureDescriptions:(id)arg1 toFitAvailableMemory:(unsigned long long)arg2 withConverters:(id)arg3 preferredMaxTextureSize:(long long *)arg4 outcome: /* Error: Ran out of types for this method. */;

- (id)debugDescription;
- (unsigned long long)peakMemoryUsage;
- (void)updateFromConverter:(id)arg1;
- (id)initWithTextureDescription:(id)arg1 converter:(id)arg2;

@end
