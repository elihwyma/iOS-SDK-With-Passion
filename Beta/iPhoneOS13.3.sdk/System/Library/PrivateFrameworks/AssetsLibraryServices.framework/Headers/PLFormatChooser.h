/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, PLDeviceConfiguration, PLImageFormat;

@interface PLFormatChooser : NSObject

{
    PLDeviceConfiguration *_deviceConfiguration;
    PLImageFormat *_posterThumbnailFormat;
    NSArray *_supportedDerivativeFormats;
    PLImageFormat *_fullScreenFormatForCurrentDevice;
    PLImageFormat *_indexSheetUnbakedFormat;
    PLImageFormat *_largestUncroppedNonJPEGThumbnailFormat;
    PLImageFormat *_masterThumbnailFormat;
    PLImageFormat *_portraitScrubberThumbnailFormat;
    PLImageFormat *_landscapeScrubberThumbnailFormat;
}

@property (nonatomic, readonly) NSArray *supportedDerivativeFormats;
@property (nonatomic, readonly) PLImageFormat *fullScreenFormatForCurrentDevice;
@property (nonatomic, readonly) PLImageFormat *indexSheetUnbakedFormat;
@property (nonatomic, readonly) PLImageFormat *largestUncroppedNonJPEGThumbnailFormat;
@property (nonatomic, readonly) PLImageFormat *masterThumbnailFormat;
@property (nonatomic, readonly) PLImageFormat *portraitScrubberThumbnailFormat;
@property (nonatomic, readonly) PLImageFormat *landscapeScrubberThumbnailFormat;

+ (id)defaultFormatChooser;
+ (struct CGSize)_desiredImageSizeForRequestedViewSizeInPixels:(struct CGSize)arg1 isAspectFill:(_Bool)arg2 srcAspectRatio:(double)arg3;
+ (id)_suppportedFullSizeFormatIDs;

- (struct CGSize)posterThumbnailSize;
- (id)initWithDeviceConfiguration:(id)arg1;
- (id)derivativeFormatThatFitsSize:(struct CGSize)arg1 contentMode:(long long)arg2 demoteFactor:(double)arg3 srcAspectRatio:(double)arg4 desiredImagePixelSize:(struct CGSize *)arg5;
- (id)_bestFormatWithSize:(struct CGSize)arg1 specificVersionType:(long long)arg2 contentMode:(long long)arg3 demoteFactor:(double)arg4 srcAspectRatio:(double)arg5 hasAdjustmentsHandler:(CDUnknownBlockType)arg6 desiredImagePixelSize:(struct CGSize *)arg7;
- (id)_nextLargestAcceptableFormatForFormat:(id)arg1;
- (id)_standardDegradedFormatFallingBackFromFormat:(id)arg1;
- (id)_fastestDegradedFormatFallingBackFromFormat:(id)arg1;
- (void)chooseFormatsForSize:(struct CGSize)arg1 specificVersionType:(long long)arg2 contentMode:(long long)arg3 demoteFactor:(double)arg4 srcAspectRatio:(double)arg5 degradedFormatPolicy:(long long)arg6 hasAdjustmentsHandler:(CDUnknownBlockType)arg7 desiredImagePixelSize:(struct CGSize *)arg8 bestFormat:(id *)arg9 degradedFormat:(id *)arg10;

@end
