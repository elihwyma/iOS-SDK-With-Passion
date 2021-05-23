/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSOrderedSet, NSString, TDImageColorHistogram, TDPNGAsset, TDThemeCompressionType;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec

{
    struct CGRect _alignmentRect;
    _Bool _isBackstop;
    TDImageColorHistogram *_histogram;
}

@property (nonatomic) _Bool allowsMultiPassEncoding;
@property (nonatomic) _Bool allowsOptimalRowbytesPacking;
@property (nonatomic) _Bool allowsCompactCompression;
@property (nonatomic) _Bool allowsPaletteImageCompression;
@property (nonatomic) _Bool allowsHevcCompression;
@property (nonatomic) _Bool allowsDeepmapCompression;
@property (nonatomic) _Bool allowsDeepmap2Compression;
@property (retain, nonatomic) TDPNGAsset *asset;
@property (retain, nonatomic) NSOrderedSet *slices;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (retain, nonatomic) TDImageColorHistogram *histogram;
@property (nonatomic) struct CGRect alignmentRect;
@property (nonatomic) struct CGRect primitiveAlignmentRect;
@property (retain, nonatomic) NSString *alignmentRectString;
@property (retain, nonatomic) NSString *originalImageSizeString;
@property (retain, nonatomic) NSString *nonAlphaImageAreaString;
@property (retain, nonatomic) NSString *physicalSizeInMetersString;
@property (nonatomic) struct CGSize physicalSizeInMeters;
@property (nonatomic) _Bool isTintable;
@property (nonatomic) _Bool isBackstop;
@property (nonatomic) double postScaleFactor;

+ (void)initialize;

- (void)dealloc;
- (void)awakeFromFetch;
- (void)_logError:(id)arg1;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (struct CGImage *)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned int *)arg3 vectorBased:(_Bool *)arg4;
- (_Bool)updatePackingPropertiesWithDocument:(id)arg1;
- (_Bool)canBePackedWithDocument:(id)arg1;
- (void)copyAttributesInto:(id)arg1;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)drawPackableRenditionInContext:(struct CGContext *)arg1 withDocument:(id)arg2;
- (id)_slicesToUseForCSI;
- (int)_rawPixelFormatOfCGImage:(struct CGImage *)arg1;
- (struct CGSize)_scaleRecognitionImageFromSize:(struct CGSize)arg1;
- (id)_sliceRectanglesForRenditionSize:(CDStruct_1ef3fb1f)arg1 unadjustedSliceRectangles:(id *)arg2 imageSlicesNeedAdjustment:(_Bool *)arg3 newRenditionSize:(CDStruct_1ef3fb1f *)arg4;
- (CDStruct_1ba92a5e)_edgeMetricsForAlignmentRect:(struct CGRect)arg1 originalRenditionSize:(CDStruct_1ef3fb1f)arg2 newRenditionSize:(CDStruct_1ef3fb1f)arg3;

@end
