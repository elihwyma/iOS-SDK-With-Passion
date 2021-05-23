/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIVideoManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *adamID;
@property (retain, nonatomic) NSData *additionalFPSRequestParamsJSONData;
@property (copy, nonatomic) NSNumber *bookmarkTime;
@property (copy, nonatomic) NSDate *bookmarkTimeStamp;
@property (copy, nonatomic) NSString *brandID;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *canonicalID;
@property (copy, nonatomic) NSString *contentRatingDomain;
@property (copy, nonatomic) NSNumber *contentRatingRank;
@property (copy, nonatomic) NSDate *dateAdded;
@property (nonatomic) long long downloadState;
@property (copy, nonatomic) NSNumber *downloadTaskIdentifier;
@property (copy, nonatomic) NSURL *downloadURL;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSURL *fpsCertificateURL;
@property (copy, nonatomic) NSURL *fpsKeyServerURL;
@property (copy, nonatomic) NSURL *fpsNonceURL;
@property (copy, nonatomic) NSNumber *frequencyOfAgeConfirmation;
@property (copy, nonatomic) NSString *genreName;
@property (nonatomic) _Bool isAdultContent;
@property (copy, nonatomic) NSString *localPlaybackRelativeFilePath;
@property (copy, nonatomic) NSURL *localPlaybackURL;
@property (retain, nonatomic) NSData *mediaMetricsJSONData;
@property (copy, nonatomic) NSURL *playbackURL;
@property (copy, nonatomic) NSString *referenceID;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSNumber *requiredAgeForPlayback;
@property (copy, nonatomic) NSString *rtcServiceIdentifier;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSData *vpafMetricsJSONData;
@property (retain, nonatomic) NSSet *fpsKeyInfo;
@property (retain, nonatomic) NSSet *imageInfos;

+ (id)fetchRequest;
+ (id)keyPathsForValuesAffectingLocalPlaybackURL;

- (id)mediaMetrics;
- (id)additionalFPSRequestParams;

@end
