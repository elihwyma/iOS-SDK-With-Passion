/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL;

@interface PFAssetBundle : NSObject

{
    _Bool _didReadOriginalPairedVideoMetadata;
    NSURL *_photoURL;
    NSURL *_videoURL;
    NSURL *_audioURL;
    NSURL *_alternatePhotoURL;
    NSURL *_fullSizePhotoURL;
    NSURL *_fullSizeVideoURL;
    NSURL *_adjustmentDataURL;
    NSURL *_adjustmentBasePhotoURL;
    NSURL *_pairedVideoURL;
    NSURL *_fullSizePairedVideoURL;
    NSURL *_adjustmentBasePairedVideoURL;
    NSURL *_spatialOvercapturePhotoURL;
    NSURL *_spatialOvercapturePairedVideoURL;
    NSURL *_spatialOvercaptureVideoURL;
    NSURL *_adjustmentBaseVideoURL;
    NSURL *_originalAdjustmentDataURL;
    NSDictionary *_propertyList;
    NSMutableDictionary *_metadata;
    NSString *_livePhotoOriginalPairingIdentifier;
    CDStruct_1b6d18a9 _livePhotoOriginalImageDisplayTime;
    CDStruct_1b6d18a9 _livePhotoOriginalVideoDuration;
}

@property (copy, nonatomic) NSDictionary *propertyList;
@property (copy, nonatomic, readonly) NSMutableDictionary *metadata;
@property (nonatomic, readonly) _Bool didReadOriginalPairedVideoMetadata;
@property (copy, nonatomic) NSString *livePhotoOriginalPairingIdentifier;
@property (nonatomic) CDStruct_1b6d18a9 livePhotoOriginalImageDisplayTime;
@property (nonatomic) CDStruct_1b6d18a9 livePhotoOriginalVideoDuration;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long playbackVariation;
@property (nonatomic, readonly) unsigned short videoComplementVisibilityState;
@property (nonatomic, readonly) unsigned long long reframeVariation;
@property (nonatomic, readonly) NSURL *photoURL;
@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) NSURL *audioURL;
@property (nonatomic, readonly) NSURL *alternatePhotoURL;
@property (nonatomic, readonly) NSURL *fullSizePhotoURL;
@property (nonatomic, readonly) NSURL *fullSizeVideoURL;
@property (nonatomic, readonly) NSURL *adjustmentDataURL;
@property (nonatomic, readonly) NSURL *adjustmentBasePhotoURL;
@property (nonatomic, readonly) NSURL *pairedVideoURL;
@property (nonatomic, readonly) NSURL *fullSizePairedVideoURL;
@property (nonatomic, readonly) NSURL *adjustmentBasePairedVideoURL;
@property (nonatomic, readonly) NSURL *spatialOvercapturePhotoURL;
@property (nonatomic, readonly) NSURL *spatialOvercapturePairedVideoURL;
@property (nonatomic, readonly) NSURL *spatialOvercaptureVideoURL;
@property (nonatomic, readonly) NSURL *adjustmentBaseVideoURL;
@property (nonatomic, readonly) NSURL *originalAdjustmentDataURL;
@property (copy, nonatomic, readonly) NSString *livePhotoPairingIdentifier;
@property (nonatomic, readonly) CDStruct_1b6d18a9 livePhotoImageDisplayTime;
@property (copy, nonatomic) NSSet *keywordTitles;
@property (copy, nonatomic) NSString *assetDescription;
@property (copy, nonatomic) NSString *assetTitle;
@property (copy, nonatomic) NSDate *libraryCreationDate;
@property (retain, nonatomic) id libraryLocation;
@property (nonatomic) _Bool spatialOvercaptureResourcesPurgeable;

+ (id)currentFormatVersion;

- (id)init;
- (id)initWithPropertyList:(id)arg1;
- (_Bool)writeToBundleAtURL:(id)arg1 error:(id *)arg2;
- (id)initWithAssetBundleAtURL:(id)arg1;
- (_Bool)isMediaSubtype:(unsigned long long)arg1;
- (void)_readLivePhotoVideoMetadataIfNeeded;
- (_Bool)linkOrCopyURL:(id)arg1 toURL:(id)arg2 forceCopy:(_Bool)arg3 error:(id *)arg4;
- (id)urlsByPathKey;
- (_Bool)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 withUpdatedFilename:(id)arg3 updateManifest:(id)arg4 bundlePathKey:(id)arg5 verifyUTIType:(struct __CFString *)arg6 error:(id *)arg7;
- (_Bool)_pathExtension:(id)arg1 matchesUTIType:(struct __CFString *)arg2 error:(id *)arg3;
- (_Bool)_verifyFileSourceExistsAtURL:(id)arg1 error:(id *)arg2;
- (id)createAssetBundleWritingErrorWithDescription:(id)arg1;
- (_Bool)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 writtenFileURL:(id *)arg3 error:(id *)arg4;
- (_Bool)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 withUpdatedFilename:(id)arg3 writtenFileURL:(id *)arg4 error:(id *)arg5;
- (id)initWithOriginalPhotoURL:(id)arg1 alternatePhotoURL:(id)arg2 fullSizePhotoURL:(id)arg3 adjustmentBaseFullSizePhotoURL:(id)arg4 spatialOvercapturePhotoURL:(id)arg5 originalPairedVideoURL:(id)arg6 fullSizePairedVideoURL:(id)arg7 adjustmentBaseFullSizePairedVideoURL:(id)arg8 spatialOvercapturePairedVideoURL:(id)arg9 fullSizeVideoURL:(id)arg10 adjustmentsURL:(id)arg11 originalAdjustmentsURL:(id)arg12 mediaSubtypes:(unsigned long long)arg13 playbackStyle:(long long)arg14 playbackVariation:(unsigned long long)arg15 videoComplementVisibilityState:(unsigned short)arg16 reframeVariation:(unsigned long long)arg17;
- (id)initWithOriginalVideoURL:(id)arg1 fullSizeRenderedVideoURL:(id)arg2 adjustmentBaseVideoURL:(id)arg3 spatialOvercaptureVideoURL:(id)arg4 adjustmentsURL:(id)arg5 originalAdjustmentsURL:(id)arg6 mediaSubtypes:(unsigned long long)arg7 playbackStyle:(long long)arg8 playbackVariation:(unsigned long long)arg9 reframeVariation:(unsigned long long)arg10;
- (id)writeDowngradedRepresentationToDirectory:(id)arg1 error:(id *)arg2;

@end
