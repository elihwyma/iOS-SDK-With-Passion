/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class CLLocation, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSTimeZone;

@interface IPAMetadata : NSObject

{
    _Bool _xmpLoaded;
    NSString *_filePath;
    NSMutableDictionary *_exifProperties;
    NSMutableDictionary *_iptcProperties;
    NSMutableDictionary *_basicProperties;
    NSMutableDictionary *_fileSystemProperties;
    NSMutableDictionary *_customInfo;
    NSMutableDictionary *_cgImageProperties;
    NSDictionary *_audioVideoProperties;
    NSArray *_focusPoints;
    long long _originalOrientation;
    long long _orientation;
    NSArray *_cgImageMetadataProperties;
    NSDate *_timeZoneAdjustedImageDate;
    NSTimeZone *_imageTimeZone;
    NSString *_jsonFormattedDescription;
    NSString *_fileTypeIdentifier;
    CLLocation *_exifLocation;
    struct CGSize _originalUnrotatedSize;
}

@property (retain, nonatomic) NSDate *timeZoneAdjustedImageDate;
@property (retain, nonatomic) NSTimeZone *imageTimeZone;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSMutableDictionary *exifProperties;
@property (retain, nonatomic) NSMutableDictionary *iptcProperties;
@property (retain, nonatomic) NSMutableDictionary *basicProperties;
@property (retain, nonatomic) NSMutableDictionary *fileSystemProperties;
@property (retain, nonatomic) NSMutableDictionary *customInfo;
@property (nonatomic) _Bool xmpLoaded;
@property (retain, nonatomic) NSString *jsonFormattedDescription;
@property (retain, nonatomic) NSMutableDictionary *cgImageProperties;
@property (retain, nonatomic) NSDictionary *audioVideoProperties;
@property (retain, nonatomic) NSArray *focusPoints;
@property (nonatomic) struct CGSize originalUnrotatedSize;
@property (nonatomic) long long originalOrientation;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSArray *cgImageMetadataProperties;
@property (retain, nonatomic) NSString *fileTypeIdentifier;
@property (retain, nonatomic) CLLocation *exifLocation;
@property (nonatomic, readonly) struct CGSize imageSize;
@property (nonatomic, readonly) NSDate *imageDate;
@property (nonatomic, readonly) NSString *timeZoneName;
@property (nonatomic, readonly) NSNumber *timeZoneOffset;
@property (nonatomic, readonly) NSString *exifImageDateTimeString;
@property (nonatomic, readonly) NSString *burstUuid;
@property (nonatomic, readonly) NSString *groupingUuid;
@property (nonatomic, readonly) NSString *mediaGroupUUID;
@property (nonatomic, readonly) NSString *deferredPhotoProcessingIdentifer;
@property (nonatomic, readonly) NSString *spatialOverCaptureIdentifier;
@property (nonatomic, readonly) _Bool isSpatialOverCapture;
@property (nonatomic, readonly) _Bool isDeferredPhotoProxy;
@property (nonatomic, readonly) _Bool hasCustomRendered;
@property (nonatomic, readonly) long long customRendered;
@property (nonatomic, readonly) _Bool isAutoloop;
@property (nonatomic, readonly) _Bool isMirror;
@property (nonatomic, readonly) _Bool isLongExposure;
@property (nonatomic, readonly) _Bool isPortrait;
@property (nonatomic, readonly) _Bool isCompositeHDR;
@property (nonatomic, readonly) _Bool isSDOF;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double nominalFrameRate;
@property (nonatomic, readonly) NSString *codecFourCharCode;
@property (nonatomic, readonly) NSString *cameraMake;
@property (nonatomic, readonly) NSString *cameraModel;

+ (id)utiFromFastModernizeVideoMediaWithMetadata:(id)arg1;
+ (id)proxyPropertyListForAVAsset:(id)arg1 reduceMetadata:(_Bool)arg2;
+ (id)metadataIdentifierTypeMapVideo;
+ (id)metadataIdentifierTypeMapImage;
+ (struct CGImageSource *)newImageSourceForURL:(id)arg1 options:(id)arg2;
+ (struct CGImageSource *)newImageSourceForData:(id)arg1 uti:(id)arg2 options:(id)arg3;
+ (id)defaultOptionsForCGImageSource;
+ (id)metadataIdentifierTypeMapCommon;
+ (void)test_digestedDateTimeExifAttributesFromExif:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)encodedData;
- (id)initWithPath:(id)arg1 options:(id)arg2;
- (void)setCustomProperties:(id)arg1;
- (id)initWithPath:(id)arg1 fileData:(id)arg2 options:(id)arg3 loadXmpData:(_Bool)arg4 xmpSidecarPath:(id)arg5;
- (void)loadAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(_Bool)arg3;
- (void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1;
- (id)initWithPath:(id)arg1 cgImageProperties:(id)arg2;
- (id)initWithPath:(id)arg1 imageSource:(struct CGImageSource *)arg2 options:(id)arg3 loadXmpData:(_Bool)arg4 xmpSidecarPath:(id)arg5;
- (void)setEncodedAudioVideoData:(id)arg1;
- (void)setEncodedImageData:(id)arg1;
- (void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(_Bool)arg2;
- (id)initWithPath:(id)arg1 loadMinMetadata:(_Bool)arg2;
- (_Bool)isSloMoForType:(unsigned char)arg1;
- (id)descriptionDictionary;
- (_Bool)conformsToUTType:(struct __CFString *)arg1 forExtention:(id)arg2;
- (id)initWithPath:(id)arg1 fileData:(id)arg2 imageSource:(struct CGImageSource *)arg3 cgImageProperties:(id)arg4 options:(id)arg5 loadMinMetadata:(_Bool)arg6 loadXmpData:(_Bool)arg7 xmpSidecarPath:(id)arg8;
- (id)utiForExtension:(id)arg1;
- (void)clearImageAttributes;
- (void)mergeMetadata:(id)arg1;
- (void)setRawFileSystemAttributes:(id)arg1;
- (void)setCustomProperty:(id)arg1 forKey:(id)arg2;
- (id)customPropertyForKey:(id)arg1;
- (void)setExifProperty:(id)arg1 forKey:(id)arg2;
- (id)exifPropertyForKey:(id)arg1;
- (void)setIPTCProperty:(id)arg1 forKey:(id)arg2;
- (id)iptcPropertyForKey:(id)arg1;
- (void)extractFocusPointsFrom:(id)arg1 orExifAux:(id)arg2;
- (void)setCGImageProperties:(id)arg1;
- (id)_digestedIptcAttributesFromRawAttributes:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2;
- (id)_digestedExifAttributesFromRawAttributes:(id)arg1;
- (void)_enforceProperFormatting:(id)arg1;
- (void)_digestedOrientationExifAttributesFromExif:(id)arg1;
- (void)digestedDateTimeExifAttributesFromExif:(id)arg1;
- (void)_digestedDateTimeExifAttributesFromExif:(id)arg1;
- (void)_digestedCameraSettingsExifAttributesFromExif:(id)arg1;
- (void)_digestedAVExifAttributesFromExif:(id)arg1;
- (void)_digestedGPSExifAttributesFromExif:(id)arg1;
- (void)_digestedCollapseArrayExifAttributesFromExif:(id)arg1;
- (void)setAudioVideoAttributesFromDictionary:(id)arg1;
- (void)setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(_Bool)arg2 readyHandler:(CDUnknownBlockType)arg3;
- (id)exifTimezoneOffsetFromDateString:(id)arg1 offsetInSeconds:(long long *)arg2;
- (void)setAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(_Bool)arg3 readyHandler:(CDUnknownBlockType)arg4;
- (void)setAudioVideoAttributesForAVProxyData:(id)arg1 readyHandler:(CDUnknownBlockType)arg2;
- (void)waitForAsync_setAudioVideoAttributesForAVProxyData:(id)arg1;
- (void)audioVideoProxyPropertyListForAsset:(id)arg1 performExport:(_Bool)arg2 atEnd:(CDUnknownBlockType)arg3;
- (long long)hdrType;
- (id)encodedDataReduceIfLargerThan:(unsigned long long)arg1;
- (void)mergeMetadataFromFileToSidecarFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ofType:(id)arg3;
- (void)restoreImportantMetadataFromPropertySet:(id)arg1 toSidecarSet:(id)arg2;
- (void)dumpXmpProperties;
- (_Bool)convertGPSString:(id)arg1 toLatitude:(id *)arg2 longitude:(id *)arg3;

@end
