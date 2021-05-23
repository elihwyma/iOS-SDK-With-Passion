/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <Foundation/NSObject.h>

@class NSError, NSProgress, NSString, NSURL, NSUUID, PFMediaCapabilities, PHMediaFormatConversionCompositeRequest, PHMediaFormatConversionDestination, PHMediaFormatConversionSource;

@interface PHMediaFormatConversionRequest : NSObject

{
    double _formatConversionExpansionFactor;
    _Bool _forceFormatConversion;
    _Bool _shouldPadOutputFileToEstimatedLength;
    _Bool _shouldStripLocation;
    _Bool _useTransferBehaviorUserPreference;
    _Bool _requiresSinglePassVideoConversion;
    _Bool _preflighted;
    long long _livePhotoPairingIdentifierBehavior;
    NSString *_livePhotoPairingIdentifier;
    long long _status;
    NSProgress *_progress;
    NSError *_error;
    NSString *_outputFilename;
    PHMediaFormatConversionDestination *_destination;
    id _userInfo;
    NSUUID *_identifier;
    PHMediaFormatConversionSource *_source;
    PFMediaCapabilities *_destinationCapabilities;
    PHMediaFormatConversionCompositeRequest *_parentRequest;
    NSURL *_directoryForTemporaryFiles;
    long long _transferBehaviorUserPreference;
    CDUnknownBlockType _singlePassVideoConversionUpdateHandler;
    long long _passthroughConversionAdditionalByteCount;
}

@property (readonly) NSUUID *identifier;
@property (retain) PHMediaFormatConversionSource *source;
@property (retain) PFMediaCapabilities *destinationCapabilities;
@property (weak) PHMediaFormatConversionCompositeRequest *parentRequest;
@property (readonly) NSString *statusString;
@property (readonly) _Bool requiresFormatConversion;
@property (readonly) _Bool requiresPassthroughConversion;
@property (readonly) _Bool requiresMetadataChanges;
@property (readonly) _Bool isCompositeRequest;
@property (retain) NSProgress *progress;
@property (retain) NSURL *directoryForTemporaryFiles;
@property long long transferBehaviorUserPreference;
@property (copy) CDUnknownBlockType singlePassVideoConversionUpdateHandler;
@property _Bool requiresSinglePassVideoConversion;
@property (nonatomic) double formatConversionExpansionFactor;
@property (nonatomic) long long passthroughConversionAdditionalByteCount;
@property long long status;
@property _Bool preflighted;
@property (retain) NSError *error;
@property (retain) PHMediaFormatConversionDestination *destination;
@property (readonly) long long backwardsCompatibilityStatus;
@property (readonly) unsigned long long estimatedOutputFileLength;
@property long long livePhotoPairingIdentifierBehavior;
@property (copy) NSString *livePhotoPairingIdentifier;
@property _Bool forceFormatConversion;
@property _Bool shouldPadOutputFileToEstimatedLength;
@property _Bool shouldStripLocation;
@property (retain) NSString *outputFilename;
@property (readonly) NSString *outputPathExtension;
@property (readonly) NSString *outputFileType;
@property _Bool useTransferBehaviorUserPreference;
@property (retain) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id *)arg3;
+ (double)heifToJPEGFactorWithImageDimensions:(struct CGSize)arg1 fileLength:(unsigned long long)arg2;
+ (id)stringForRequestStatus:(long long)arg1;
+ (double)bitsPerPixelWithImageDimensions:(struct CGSize)arg1 fileLength:(unsigned long long)arg2;
+ (double)heifToJPEGFactorForBitsPerPixel:(double)arg1;

- (id)init;
- (void)markAsCancelled;
- (void)enableSinglePassVideoEncodingWithUpdateHandler:(CDUnknownBlockType)arg1;
- (_Bool)prepareWithError:(id *)arg1;
- (void)setupProgress;
- (void)preflightWithConversionManager:(id)arg1;
- (_Bool)requiresLivePhotoPairingIdentifierChange;
- (_Bool)requiresLocationMetadataChange;
- (_Bool)userPreferenceProhibitsFormatConversion;
- (void)padOutputFileToEstimatedLength;
- (void)didFinishProcessing;
- (void)updateSinglePassVideoConversionStatus:(long long)arg1 addedRange:(struct _NSRange)arg2 error:(id)arg3;

@end
