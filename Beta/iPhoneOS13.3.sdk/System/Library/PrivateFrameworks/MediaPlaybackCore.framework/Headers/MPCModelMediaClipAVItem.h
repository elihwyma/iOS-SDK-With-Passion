/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAVItem.h>

@class MPModelGenericObject, MPModelMediaClip, NSString;

@interface MPCModelMediaClipAVItem : MPAVItem

{
    MPModelGenericObject *_modelGenericObject;
    id _rtcReportingParentHierarchyToken;
    MPModelMediaClip *_mediaClip;
}

@property (nonatomic, readonly) MPModelMediaClip *mediaClip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id rtcReportingParentHierarchyToken;
@property (copy, nonatomic, readonly) NSString *rtcReportingServiceIdentifier;
@property (nonatomic, readonly) long long rtcReportingAssetType;

+ (id)requiredMediaClipProperties;

- (_Bool)allowsExternalPlayback;
- (_Bool)isStreamable;
- (void)loadAssetAndPlayerItem;
- (void)notePlaybackFinishedByHittingEnd;
- (void)setPlaybackFinishedTime:(double)arg1;
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;
- (_Bool)isAssetURLValid;
- (id)mainTitle;
- (double)durationFromExternalMetadata;
- (void)_applyLoudnessInfo;
- (void)reevaluateType;
- (_Bool)prefersSeekOverSkip;
- (id)modelGenericObject;
- (_Bool)allowsAirPlayFromCloud;
- (CDUnknownBlockType)artworkCatalogBlock;
- (_Bool)_allowsCellularPlayback;
- (id)_currentPreferredStaticAsset;
- (_Bool)_isVideoAsset;
- (id)initWithMediaClip:(id)arg1;

@end
