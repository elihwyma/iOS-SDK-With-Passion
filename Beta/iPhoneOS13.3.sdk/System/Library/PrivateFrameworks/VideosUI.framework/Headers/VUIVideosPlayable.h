/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL, VUIContentMetadata, VUIExtrasInfo;

__attribute__((visibility("hidden")))
@interface VUIVideosPlayable : NSObject

{
    NSDictionary *_videosPlayableDict;
    NSString *_bookmarkID;
    NSURL *_previewArtwork;
    VUIContentMetadata *_metadata;
}

@property (nonatomic, readonly) NSString *canonicalID;
@property (nonatomic, readonly) NSString *referenceID;
@property (nonatomic, readonly) NSString *showCanonicalID;
@property (nonatomic, readonly) NSString *seasonCanonicalID;
@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic, readonly) _Bool isRental;
@property (nonatomic, readonly) NSNumber *rentalID;
@property (nonatomic, readonly) NSString *bookmarkID;
@property (nonatomic, readonly) _Bool isSubscription;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) NSString *channelName;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) _Bool isMovie;
@property (nonatomic, readonly) NSURL *playbackURL;
@property (nonatomic, readonly) NSURL *hlsURL;
@property (nonatomic, readonly) NSURL *downloadURL;
@property (nonatomic, readonly) NSURL *fpsCertificateURL;
@property (nonatomic, readonly) NSURL *fpsKeyServerURL;
@property (nonatomic, readonly) NSDictionary *fpsAdditionalServerParams;
@property (nonatomic, readonly) NSURL *fpsNonceURL;
@property (nonatomic, readonly) NSURL *scrubVideoURL;
@property (nonatomic, readonly) NSString *buyParams;
@property (nonatomic, readonly) NSURL *previewArtwork;
@property (nonatomic, readonly) NSNumber *resumeTime;
@property (nonatomic, readonly) NSDate *resumeTimeTimeStamp;
@property (nonatomic, readonly) VUIContentMetadata *metadata;
@property (nonatomic, readonly) NSDictionary *vpafMetrics;
@property (nonatomic, readonly) NSDictionary *mediaMetrics;
@property (nonatomic, readonly) NSURL *tokenServerURL;
@property (nonatomic, readonly) NSURL *stopURL;
@property (nonatomic, readonly) NSDictionary *tokenServerParams;
@property (nonatomic, readonly) NSString *liveStreamServiceID;
@property (nonatomic, readonly) NSString *externalServiceID;
@property (nonatomic, readonly) _Bool disableScrubbing;
@property (nonatomic, readonly) NSString *rtcServiceIdentifier;
@property (nonatomic, readonly) VUIExtrasInfo *extrasInfo;
@property (nonatomic, readonly) NSURL *tvAppDeeplinkURL;
@property (nonatomic, readonly) NSNumber *requiredAgeForPlayback;
@property (nonatomic, readonly) NSNumber *frequencyOfAgeConfirmation;
@property (nonatomic, readonly) _Bool isiTunesPurchaseOrRental;
@property (nonatomic, readonly, getter=isSharedPurchase) _Bool sharedPurchase;

+ (id)videosPlayablesFromDictionaries:(id)arg1 andMetadataDictionary:(id)arg2;

- (id)initWithDictionary:(id)arg1 andMetadataDictionary:(id)arg2;

@end
