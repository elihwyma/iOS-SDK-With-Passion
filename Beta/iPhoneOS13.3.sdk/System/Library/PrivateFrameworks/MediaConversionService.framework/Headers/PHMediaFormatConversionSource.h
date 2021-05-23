/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <MediaConversionService/PHMediaFormatConversionContent.h>

@class NSString;

@interface PHMediaFormatConversionSource : PHMediaFormatConversionContent

{
    _Bool _preflighted;
    _Bool _containsHEVCVideo;
    _Bool _containsHEIFImage;
    _Bool _didCheckForLivePhotoPairingIdentifier;
    NSString *_renderOriginatingSignature;
    NSString *_livePhotoPairingIdentifier;
    long long _locationMetadataStatus;
    id _hevcTrackFormatDescription;
    struct CGSize _imageDimensions;
}

@property struct CGSize imageDimensions;
@property _Bool preflighted;
@property _Bool containsHEVCVideo;
@property _Bool containsHEIFImage;
@property (retain, nonatomic) NSString *livePhotoPairingIdentifier;
@property _Bool didCheckForLivePhotoPairingIdentifier;
@property long long locationMetadataStatus;
@property (retain) id hevcTrackFormatDescription;
@property (copy) NSString *renderOriginatingSignature;

+ (Class)requestClass;
+ (id)imageSourceForFileURL:(id)arg1 dimensions:(struct CGSize)arg2;
+ (id)videoSourceForFileURL:(id)arg1;
+ (id)imageSourceForFileURL:(id)arg1;
+ (id)sourceForFileURL:(id)arg1 mediaType:(long long)arg2 imageDimensions:(struct CGSize)arg3;
+ (id)sourceForFileURL:(id)arg1;

- (void)markLivePhotoPairingIdentifierAsCheckedWithValue:(id)arg1;
- (_Bool)determineMediaTypeFromPathExtensionWithError:(id *)arg1;
- (void)checkForHEVCVideo;
- (void)checkForHEIFImage;
- (_Bool)preflightWithError:(id *)arg1;
- (void)checkForLivePhotoPairingIdentifier;
- (void)checkForLocationData;
- (long long)imageSourceLocationMetadataStatus;
- (long long)videoSourceLocationMetadataStatus;
- (void)markLocationMetadataAsCheckedWithStatus:(long long)arg1;

@end
