/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFiTunesObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface WFiTunesSoftwareObject : WFiTunesObject

{
    _Bool _isUniversal;
    _Bool _supportsGameCenter;
    NSString *_artistID;
    NSString *_artistName;
    NSDate *_releaseDate;
    NSNumber *_price;
    NSString *_currencyCode;
    NSString *_formattedPrice;
    NSArray *_screenshotURLs;
    NSArray *_iPadScreenshotURLs;
    NSArray *_supportedLanguages;
    NSArray *_supportedDevices;
    NSString *_bundleIdentifier;
    NSDate *_lastUpdated;
    NSString *_category;
    NSString *_version;
    NSString *_descriptionText;
    NSString *_releaseNotes;
    NSString *_contentRating;
    NSString *_minimumOSVersion;
    NSNumber *_fileSize;
    NSNumber *_averageRating;
    NSNumber *_numberOfRatings;
    NSNumber *_averageRatingLatestVersion;
    NSNumber *_numberOfRatingsLatestVersion;
}

@property (nonatomic, readonly) NSString *artistID;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSString *formattedPrice;
@property (nonatomic, readonly) NSArray *screenshotURLs;
@property (nonatomic, readonly) NSArray *iPadScreenshotURLs;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSArray *supportedDevices;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) _Bool isUniversal;
@property (nonatomic, readonly) _Bool supportsGameCenter;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) NSString *releaseNotes;
@property (nonatomic, readonly) NSString *contentRating;
@property (nonatomic, readonly) NSString *minimumOSVersion;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) NSNumber *averageRating;
@property (nonatomic, readonly) NSNumber *numberOfRatings;
@property (nonatomic, readonly) NSNumber *averageRatingLatestVersion;
@property (nonatomic, readonly) NSNumber *numberOfRatingsLatestVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)isUniversalJSONTransformer;
+ (id)supportsGameCenterJSONTransformer;
+ (id)screenshotURLsJSONTransformer;
+ (id)iPadScreenshotURLsJSONTransformer;
+ (id)fileSizeJSONTransformer;
+ (id)lastUpdatedJSONTransformer;

@end
