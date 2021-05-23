/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPModelFileAsset, MPModelPlaybackPosition, MPModelStoreAsset, MPModelTVSeason, MPModelTVShow, NSDate, NSString;

@interface MPModelTVEpisode : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) double duration;
@property (nonatomic, getter=isMusicShow) _Bool musicShow;
@property (nonatomic) long long episodeNumber;
@property (retain, nonatomic) MPModelFileAsset *localFileAsset;
@property (retain, nonatomic) MPModelPlaybackPosition *playbackPosition;
@property (retain, nonatomic) MPModelStoreAsset *storeAsset;
@property (retain, nonatomic) MPModelTVSeason *season;
@property (retain, nonatomic) MPModelTVShow *show;
@property (nonatomic) long long explicitRating;
@property (nonatomic) _Bool hasCloudSyncSource;
@property (copy, nonatomic) NSDate *releaseDate;
@property (nonatomic) long long episodeType;
@property (copy, nonatomic) NSString *episodeTypeDisplayName;
@property (nonatomic, getter=isLibraryAdded) _Bool libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic, getter=isLibraryAddEligible) _Bool libraryAddEligible;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock;
@property (copy, nonatomic, readonly) NSDate *downloadedDate;
@property (copy, nonatomic, readonly) NSDate *lastDevicePlaybackDate;

+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)__title_KEY;
+ (id)__duration_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__lastDevicePlaybackDate_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__hasCloudSyncSource_KEY;
+ (id)__storeAsset_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__downloadedDate_KEY;
+ (id)__descriptionText_KEY;
+ (id)__musicShow_KEY;
+ (id)__episodeNumber_KEY;
+ (id)__explicitRating_KEY;
+ (id)__season_KEY;
+ (id)__show_KEY;
+ (id)__releaseDate_KEY;
+ (id)__episodeType_KEY;
+ (id)__episodeTypeDisplayName_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (_Bool)supportsLibraryAddStatusObservation;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (_Bool)supportsLibraryRemoval;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (_Bool)supportsKeepLocalStatusObservation;

- (id)humanDescription;
- (id)artworkCatalog;
- (id)mediaItemPropertyValues;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;

@end
