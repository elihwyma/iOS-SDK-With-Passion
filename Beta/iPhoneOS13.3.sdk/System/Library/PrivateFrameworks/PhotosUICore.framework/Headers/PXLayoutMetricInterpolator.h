/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject

{
    struct {
        _Bool referenceValuesByMetricsOrder;
    } _needsUpdateFlags;
    NSMutableArray *__referenceValuesByMetrics;
    double __cachedMetric;
    NSValue *__cachedValue;
}

@property (nonatomic, readonly) NSMutableArray *_referenceValuesByMetrics;
@property (nonatomic, setter=_setCachedMetric:) double _cachedMetric;
@property (retain, nonatomic, setter=_setCachedValue:) NSValue *_cachedValue;

+ (id)memoriesFeedInteritemSpacingInterpolator;
+ (id)memoriesFeedPortraitEdgeInsetsInterpolator;
+ (id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+ (id)memoriesDetailsEdgeInsetsInterpolator;
+ (id)memoriesItemWidthInterpolator;
+ (id)albumsGridEdgeInsetsInterpolator;
+ (id)albumsGridItemWidthInterpolator;
+ (id)legacyLayoutMarginWidthInterpolator;
+ (id)layoutMarginWidthInterpolator;
+ (id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+ (id)gadgetColumnWidthSpanSingleSetAInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+ (id)allLayoutMetricConfigurationSizes;
+ (long long)photosGridSizeSubclassForScreenSize:(struct CGSize)arg1;
+ (unsigned long long)photosGridLayoutColumnsForWidth:(double)arg1;
+ (struct CGSize)zoomableGridLayoutSmallItemSizeForWidth:(double)arg1;
+ (struct CGSize)bestItemSizeForAvailableWidth:(double)arg1 screenScale:(double)arg2 columns:(unsigned long long)arg3 bestSpacing:(double *)arg4 bestInset:(double *)arg5;

- (id)init;
- (void)_setNeedsUpdate;
- (void)_invalidateReferenceValuesByMetricsOrder;
- (void)_updateReferenceValuesByMetricsOrderIfNeeded;
- (void)setReferenceValue:(double)arg1 forMetric:(double)arg2;
- (void)_getReferenceValueForMetric:(double)arg1 exactMatch:(id *)arg2 closestBeforeMatch:(id *)arg3 closestAfterMatch:(id *)arg4;
- (id)_valueForMetric:(double)arg1 fromInterpolationBetweenValue:(id)arg2 secondValue:(id)arg3;
- (double)valueForMetric:(double)arg1;

@end
