/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICStoreHLSAssetInfo, ICStorePlatformMetadata, NSArray, NSDate, NSDictionary;

@interface ICRadioStationTrack : NSObject

{
    NSDictionary *_responseDictionary;
    long long _responseVersion;
    NSDate *_expirationDate;
    ICRadioStationTrack *_parentTrack;
}

@property (nonatomic, readonly) long long storeAdamID;
@property (copy, nonatomic, readonly) ICStorePlatformMetadata *storePlatformMetadata;
@property (copy, nonatomic, readonly) NSDictionary *serverTrackInfo;
@property (copy, nonatomic, readonly) NSArray *fileAssets;
@property (copy, nonatomic, readonly) ICStoreHLSAssetInfo *hlsAsset;
@property (copy, nonatomic, readonly) NSArray *radioStreamAssets;
@property (nonatomic, readonly) long long likeState;
@property (nonatomic, readonly, getter=isSkippable) _Bool skippable;
@property (nonatomic, readonly) long long trackType;
@property (nonatomic, readonly) _Bool hasStartTime;
@property (nonatomic, readonly) double startTime;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) ICRadioStationTrack *beforePromoContentTrack;
@property (nonatomic, readonly) ICRadioStationTrack *afterPromoContentTrack;
@property (nonatomic, readonly) ICRadioStationTrack *parentTrack;

+ (id)flattenedTracksWithTracks:(id)arg1;

- (id)initWithResponseDictionary:(id)arg1 responseVersion:(long long)arg2 expirationDate:(id)arg3;
- (id)_hlsAssetFromAssetDictionary:(id)arg1;

@end
