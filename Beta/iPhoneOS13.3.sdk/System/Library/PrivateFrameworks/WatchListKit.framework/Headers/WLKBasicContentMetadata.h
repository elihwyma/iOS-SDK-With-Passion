/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, WLKArtworkVariantListing, WLKContentRating, WLKVideo;

@interface WLKBasicContentMetadata : NSObject

{
    NSString *_contentTypeString;
    _Bool _isEvod;
    _Bool _appleOriginal;
    unsigned long long _contentType;
    NSString *_canonicalID;
    NSURL *_tvAppDeeplinkURL;
    NSString *_title;
    NSString *_shortTitle;
    NSString *_descriptiveText;
    WLKArtworkVariantListing *_images;
    NSNumber *_commonSenseRecommendedAge;
    NSArray *_categories;
    NSArray *_genres;
    WLKVideo *_backgroundVideo;
    NSArray *_trailers;
    NSDictionary *_rolesSummary;
    WLKContentRating *_contentRating;
}

@property (nonatomic, readonly) unsigned long long contentType;
@property (copy, nonatomic, readonly) NSString *canonicalID;
@property (copy, nonatomic, readonly) NSURL *tvAppDeeplinkURL;
@property (nonatomic, readonly) _Bool isEvod;
@property (nonatomic, readonly, getter=isAppleOriginal) _Bool appleOriginal;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *shortTitle;
@property (copy, nonatomic, readonly) NSString *descriptiveText;
@property (nonatomic, readonly) WLKArtworkVariantListing *images;
@property (nonatomic, readonly) NSNumber *commonSenseRecommendedAge;
@property (copy, nonatomic, readonly) NSArray *categories;
@property (copy, nonatomic, readonly) NSArray *genres;
@property (nonatomic, readonly) WLKVideo *backgroundVideo;
@property (nonatomic, readonly) NSArray *trailers;
@property (copy, nonatomic, readonly) NSDictionary *rolesSummary;
@property (nonatomic, readonly) WLKContentRating *contentRating;

+ (unsigned long long)contentTypeForString:(id)arg1;
+ (Class)_classForContentType:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
