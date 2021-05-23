/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDImageColorHistogram, TDPhotoshopLayer;

@interface TDPhotoshopRenditionSpec : TDRenditionSpec

{
    TDImageColorHistogram *_histogram;
}

@property (retain, nonatomic) TDPhotoshopLayer *photoshopLayer;
@property (nonatomic) _Bool isTintable;
@property (retain, nonatomic) TDImageColorHistogram *histogram;

- (void)dealloc;
- (id)debugDescription;
- (void)_logError:(id)arg1;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (_Bool)updatePackingPropertiesWithDocument:(id)arg1;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)arg1;
- (int)_layerIndexInPSDImage:(id)arg1;
- (int)psdSliceNumberForRenditionRow:(int)arg1 sliceRow:(int)arg2 renditionColumn:(int)arg3 sliceColumn:(int)arg4 rowsPerRendition:(int)arg5 columnsPerRendition:(int)arg6 renditionColumnCount:(int)arg7;
- (void)_logWarning:(id)arg1;
- (_Bool)_sliceRectanglesForPSDImage:(id)arg1 rowsPerRendition:(int *)arg2 columnsPerRendition:(int *)arg3 originalColumnWidth:(int *)arg4 newColumnWidth:(int *)arg5 originalRowHeight:(int *)arg6 newRowHeight:(int *)arg7 originalColumnX:(int *)arg8 originalRowY:(int *)arg9 newRenditionSize:(CDStruct_1ef3fb1f *)arg10 newSliceCount:(int *)arg11 renditionRect:(struct CGRect *)arg12 throwawaySliceRect:(struct CGRect *)arg13;
- (CDStruct_1ba92a5e)_subtractThrowawaySliceFromMetricsIfNeeded:(struct CGRect)arg1 metrics:(CDStruct_1ba92a5e)arg2 renditionRect:(struct CGRect)arg3;
- (id)createCSIRepresentationFromGradientPSDImage:(id)arg1 withCompression:(_Bool)arg2 colorSpaceID:(unsigned long long)arg3;
- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(_Bool)arg2 edgeMetricsMask:(id)arg3 textMetricsMask:(id)arg4 baselineMetricsMask:(id)arg5 auxiliary1MetricsMask:(id)arg6 auxiliary2MetricsMask:(id)arg7 colorSpaceID:(unsigned long long)arg8 allowsPaletteImageCompression:(_Bool)arg9 allowsHevcCompression:(_Bool)arg10 allowsDeepmapImageCompression:(_Bool)arg11 allowsDeepmap2ImageCompression:(_Bool)arg12;
- (void)_logExtra:(id)arg1;
- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(_Bool)arg2 colorSpaceID:(unsigned long long)arg3;
- (void)drawPackableRenditionInContext:(struct CGContext *)arg1 withDocument:(id)arg2;

@end
