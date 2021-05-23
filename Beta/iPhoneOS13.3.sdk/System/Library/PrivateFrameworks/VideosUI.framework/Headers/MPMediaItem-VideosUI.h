/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <MediaPlayer/MPMediaItem.h>

@class HSHomeSharingLibrary, NSDate, NSNumber, NSObject, NSSet, NSString, NSURL, VUIMediaEntityType, VUIMediaItemCredits, _TVContentRating;

@protocol VUIMediaEntityIdentifier;

@interface MPMediaItem (VideosUI)

@property (nonatomic, readonly) VUIMediaEntityType *vui_mediaEntityType;
@property (nonatomic, readonly) NSNumber *vui_resolution;
@property (nonatomic, readonly) NSNumber *vui_colorCapability;
@property (nonatomic, readonly) NSNumber *vui_audioCapability;
@property (nonatomic, readonly) NSNumber *vui_HLSResolution;
@property (nonatomic, readonly) NSNumber *vui_HLSColorCapability;
@property (nonatomic, readonly) NSNumber *vui_HLSAudioCapability;
@property (nonatomic, readonly) NSString *vui_coverArtImageIdentifier;
@property (nonatomic, readonly) NSString *vui_previewFrameImageIdentifier;
@property (nonatomic, readonly) NSObject<VUIMediaEntityIdentifier> *vui_showIdentifier;
@property (nonatomic, readonly) NSObject<VUIMediaEntityIdentifier> *vui_seasonIdentifier;
@property (nonatomic, readonly) NSString *vui_studio;
@property (nonatomic, readonly) VUIMediaItemCredits *vui_credits;
@property (nonatomic, readonly) _TVContentRating *vui_contentRating;
@property (nonatomic, readonly) NSNumber *vui_isLocal;
@property (nonatomic, readonly) NSNumber *vui_isPlayable;
@property (nonatomic, readonly) NSURL *vui_extrasURL;
@property (nonatomic, readonly) NSNumber *vui_playedState;
@property (nonatomic, readonly) NSDate *vui_rentalEndDate;
@property (nonatomic, readonly) NSDate *vui_rentalPlaybackEndDate;
@property (nonatomic, readonly) NSDate *vui_rentalExpirationDate;
@property (nonatomic, readonly) NSNumber *vui_assetType;
@property (nonatomic, readonly) _Bool vui_isHomeSharingMediaItem;
@property (nonatomic, readonly) HSHomeSharingLibrary *vui_homeSharingLibrary;
@property (nonatomic, readonly, getter=wlk_jsPropertyStrings) NSSet *jsPropertyStrings;
@property (copy, nonatomic, readonly, getter=wlk_mediaTypeString) NSString *mediaTypeString;
@property (copy, nonatomic, readonly, getter=wlk_playState) NSString *playState;

+ (id)wlk_mediaItemForPersistentIdentifier:(id)arg1;
+ (unsigned long long)vui_VUIMediaEntityResolutionFromMPMediaItemVideoQuality:(long long)arg1;
+ (unsigned long long)vui_VUIMediaEntityColorCapabilityFromMPMediaItemColorCapability:(long long)arg1;
+ (unsigned long long)vui_VUIMediaEntityAudioCapabilityFromMPMediaItemAudioCapability:(long long)arg1;
+ (_Bool)_vui_isLocalWithPropertyValues:(id)arg1;
+ (_Bool)_vui_isNetworkPlayableWithPropertyValues:(id)arg1;
+ (long long)vui_MPMediaItemVideoQualityFromVUIMediaEntityResolution:(unsigned long long)arg1;
+ (long long)vui_MPMediaItemColorCapabilityFromVUIMediaEntityColorCapability:(unsigned long long)arg1;
+ (long long)vui_MPMediaItemAudioCapabilityFromVUIMediaEntityAudioCapability:(unsigned long long)arg1;
+ (id)wlk_JSgenericProperties;
+ (id)wlk_mediaItemForStoreIdentifier:(id)arg1;
+ (id)wlk_JSmovieProperties;
+ (id)wlk_JStvShowProperties;

- (id)_vui_imageIdentifierWithImageType:(unsigned long long)arg1;
- (id)vui_assetTypeIgnoringLocalAsset:(_Bool)arg1;
- (id)vui_artworkCatalogWithImageType:(unsigned long long)arg1;
- (id)vui_imageIdentifierWithImageType:(unsigned long long)arg1;
- (id)vui_imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)wlk_stringIdentifierForProperty:(id)arg1;
- (id)wlk_stringIdentifierForSeason;

@end
