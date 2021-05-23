/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputSettings, NSArray, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputConfigurationState : NSObject

{
    NSString *_mediaType;
    AVOutputSettings *_outputSettings;
    struct opaqueCMFormatDescription *_sourceFormatHint;
    int _trackID;
    NSDictionary *_sourcePixelBufferAttributes;
    NSArray *_metadataItems;
    struct CGAffineTransform _transform;
    int _mediaTimeScale;
    _Bool _expectsMediaDataInRealTime;
    struct CGSize _naturalSize;
    NSString *_languageCode;
    NSString *_extendedLanguageTag;
    _Bool _marksOutputTrackAsEnabled;
    float _preferredVolume;
    long long _layer;
    short _alternateGroupID;
    short _provisionalAlternateGroupID;
    NSDictionary *_trackReferences;
    _Bool _performsMultiPassEncodingIfSupported;
    CDStruct_1b6d18a9 _chunkDuration;
    long long _chunkAlignment;
    long long _chunkSize;
    NSString *_mediaDataLocation;
    NSURL *_sampleReferenceBaseURL;
    _Bool _maximizePowerEfficiency;
}

@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) AVOutputSettings *outputSettings;
@property (retain, nonatomic) struct opaqueCMFormatDescription *sourceFormatHint;
@property (nonatomic) int trackID;
@property (copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (copy, nonatomic) NSArray *metadataItems;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) int mediaTimeScale;
@property (nonatomic) _Bool expectsMediaDataInRealTime;
@property (nonatomic) struct CGSize naturalSize;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (nonatomic) _Bool marksOutputTrackAsEnabled;
@property (nonatomic) float preferredVolume;
@property (nonatomic) long long layer;
@property (nonatomic) short alternateGroupID;
@property (nonatomic) short provisionalAlternateGroupID;
@property (copy, nonatomic) NSDictionary *trackReferences;
@property (nonatomic) _Bool performsMultiPassEncodingIfSupported;
@property (nonatomic) CDStruct_1b6d18a9 preferredMediaChunkDuration;
@property (nonatomic) long long preferredMediaChunkAlignment;
@property (nonatomic) long long preferredMediaChunkSize;
@property (copy, nonatomic) NSString *mediaDataLocation;
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property (nonatomic) _Bool maximizePowerEfficiency;

- (void)dealloc;

@end
