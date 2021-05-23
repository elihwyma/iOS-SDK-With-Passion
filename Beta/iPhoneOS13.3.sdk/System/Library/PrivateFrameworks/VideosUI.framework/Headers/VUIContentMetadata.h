/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VUIContentMetadata : NSObject

{
    NSDictionary *_metadataDictionary;
    NSDictionary *_contentTypeMap;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *mediaDescription;
@property (nonatomic, readonly) NSString *artworkURLFormat;
@property (nonatomic, readonly) NSNumber *artworkWidth;
@property (nonatomic, readonly) NSNumber *artworkHeight;
@property (nonatomic, readonly) NSString *previewFrameURLFormat;
@property (nonatomic, readonly) NSNumber *previewFrameWidth;
@property (nonatomic, readonly) NSNumber *previewFrameHeight;
@property (nonatomic, readonly) NSString *showArtworkURLFormat;
@property (nonatomic, readonly) NSNumber *showArtworkWidth;
@property (nonatomic, readonly) NSNumber *showArtworkHeight;
@property (nonatomic, readonly) NSString *ratingName;
@property (nonatomic, readonly) NSString *ratingSystem;
@property (nonatomic, readonly) NSString *ratingDomain;
@property (nonatomic, readonly) NSDate *releasedDate;
@property (nonatomic, readonly) NSString *formattedReleaseDate;
@property (nonatomic, readonly) NSDate *rentalExpiration;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSNumber *tomatoPercentage;
@property (nonatomic, readonly) unsigned long long tomatoFreshness;
@property (nonatomic, readonly) NSNumber *commonSenseRecommendedAge;
@property (nonatomic, readonly) NSNumber *videoResolutionClass;
@property (nonatomic, readonly) NSNumber *videoDynamicRange;
@property (nonatomic, readonly) NSNumber *hasClosedCaptions;
@property (nonatomic, readonly) NSNumber *hasADLocales;
@property (nonatomic, readonly) NSNumber *hasSDHLocales;
@property (nonatomic, readonly) NSNumber *hasDolbyAtmos;
@property (nonatomic, readonly) NSString *showTitle;
@property (nonatomic, readonly) NSString *seasonTitle;
@property (nonatomic, readonly) NSNumber *seasonNumber;
@property (nonatomic, readonly) NSNumber *episodeNumber;
@property (nonatomic, readonly) _Bool isAdultContent;
@property (nonatomic, readonly) NSNumber *ratingValue;

- (id)initWithDictionary:(id)arg1;

@end
