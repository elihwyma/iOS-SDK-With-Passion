/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPModelTVEpisode, MPModelTVShow, NSDate, NSString;

@interface MPModelTVSeason : MPModelObject

@property (nonatomic) long long number;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) long long year;
@property (nonatomic) long long episodesCount;
@property (nonatomic) _Bool hasCleanContent;
@property (nonatomic) _Bool hasExplicitContent;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic, getter=isLibraryAdded) _Bool libraryAdded;
@property (nonatomic, getter=isLibraryAddEligible) _Bool libraryAddEligible;
@property (nonatomic) long long sortType;
@property (retain, nonatomic) MPModelTVShow *show;
@property (retain, nonatomic) MPModelTVEpisode *representativeEpisode;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock;
@property (copy, nonatomic, readonly) NSDate *downloadedDate;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__year_KEY;
+ (id)__downloadedDate_KEY;
+ (id)__descriptionText_KEY;
+ (id)__show_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)kindWithEpisodeKind:(id)arg1;
+ (_Bool)supportsLibraryAddStatusObservation;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)__hasCleanContent_KEY;
+ (id)__number_KEY;
+ (id)__episodesCount_KEY;
+ (id)__sortType_KEY;
+ (id)__representativeEpisode_KEY;

- (id)humanDescription;
- (id)artworkCatalog;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;

@end
