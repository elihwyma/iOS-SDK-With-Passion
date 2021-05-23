/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVFigObjectInspector.h>

@class AVDisplayCriteria, AVMetadataItem, NSArray, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetInspector : AVFigObjectInspector

@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) float preferredRate;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) float preferredSoundCheckVolumeNormalization;
@property (nonatomic, readonly) struct CGAffineTransform preferredTransform;
@property (nonatomic, readonly) CDStruct_1b6d18a9 minimumTimeOffsetFromLive;
@property (nonatomic, readonly) struct CGSize naturalSize;
@property (nonatomic, readonly) int naturalTimeScale;
@property (nonatomic, readonly) _Bool providesPreciseDurationAndTiming;
@property (nonatomic, readonly) long long trackCount;
@property (nonatomic, readonly) NSArray *trackIDs;
@property (nonatomic, readonly) NSArray *alternateTrackGroups;
@property (nonatomic, readonly) NSDictionary *trackReferences;
@property (nonatomic, readonly, getter=_mediaSelectionGroupDictionaries) NSArray *mediaSelectionGroupDictionaries;
@property (nonatomic, readonly) AVMetadataItem *creationDate;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly, getter=isPlayable) _Bool playable;
@property (nonatomic, readonly, getter=isExportable) _Bool exportable;
@property (nonatomic, readonly, getter=isReadable) _Bool readable;
@property (nonatomic, readonly, getter=isComposable) _Bool composable;
@property (nonatomic, readonly, getter=isCompatibleWithSavedPhotosAlbum) _Bool compatibleWithSavedPhotosAlbum;
@property (nonatomic, readonly, getter=isCompatibleWithAirPlayVideo) _Bool compatibleWithAirPlayVideo;
@property (nonatomic, readonly) NSData *SHA1Digest;
@property (nonatomic, readonly) _Bool canContainFragments;
@property (nonatomic, readonly) _Bool containsFragments;
@property (nonatomic, readonly) CDStruct_1b6d18a9 overallDurationHint;
@property (nonatomic, readonly) long long firstFragmentSequenceNumber;
@property (nonatomic, readonly) long long fragmentCount;
@property (nonatomic, readonly) id propertyListForProxy;
@property (nonatomic, readonly) NSString *identifyingTagClass;
@property (nonatomic, readonly) NSString *identifyingTag;
@property (nonatomic, readonly) struct CGSize maximumVideoResolution;
@property (nonatomic, readonly) NSArray *availableVideoDynamicRanges;
@property (nonatomic, readonly) AVDisplayCriteria *preferredDisplayCriteria;
@property (nonatomic, readonly, getter=_instanceIdentifier) NSString *instanceIdentifier;
@property (nonatomic, readonly) _Bool supportsAnalysisReporting;
@property (nonatomic, readonly, getter=_assetAnalysisMessages) NSArray *assetAnalysisMessages;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasProtectedContent;
- (id)metadataForFormat:(id)arg1;
- (_Bool)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1;
- (id)makePropertyListForProxyWithOptions:(id)arg1;

@end
