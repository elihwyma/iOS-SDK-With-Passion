/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@interface PFMediaUtilities : NSObject

+ (long long)defaultRasterizationDPI;
+ (_Bool)UTIRequiresRasterizationDPI:(id)arg1;
+ (id)resourceModelUTIForExtension:(id)arg1;
+ (id)UTIForExtension:(id)arg1;
+ (_Bool)isMovieUTI:(id)arg1;
+ (_Bool)isPdfUTI:(id)arg1;
+ (_Bool)isImageUTI:(id)arg1;
+ (id)UTIForURL:(id)arg1 error:(id *)arg2;
+ (id)preferredExtensionForUTI:(id)arg1;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource *)arg1;
+ (long long)rawSourceMaximumPixelCountForBackgroundProcessing;
+ (_Bool)isRawUTI:(id)arg1;
+ (id)mainVideoTrackForAsset:(id)arg1;
+ (_Bool)isPsdUTI:(id)arg1;
+ (_Bool)isPngUTI:(id)arg1;
+ (_Bool)isGifUTI:(id)arg1;
+ (_Bool)isTiffUTI:(id)arg1;
+ (_Bool)isHeifUTI:(id)arg1;
+ (_Bool)isJpeg2000UTI:(id)arg1;
+ (_Bool)isJpegUTI:(id)arg1;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource *)arg1 atIndex:(unsigned long long)arg2;
+ (_Bool)canGenerateImageDerivativesFromUTI:(id)arg1;
+ (id)UTIForHFSType:(unsigned int)arg1;
+ (_Bool)isValidExtension:(id)arg1 forUTI:(id)arg2;
+ (_Bool)isValidImageFileForURL:(id)arg1;
+ (_Bool)isValidAVFileForURL:(id)arg1;
+ (_Bool)isAudioUTI:(id)arg1;
+ (_Bool)isQuicktimeMovieUTI:(id)arg1;
+ (struct CGSize)maximumImageSizeFromProperties:(id)arg1;
+ (_Bool)canLoadAssetAsRawForInteractiveEditingWithImageProperties:(id)arg1;
+ (long long)rawSourceMaximumPixelCountForInteractiveEditing;

@end
