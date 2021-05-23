/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRadioResponse.h>

@class ICRadioStationMetadata, NSArray, NSDate;

@interface ICRadioGetTracksResponse : ICRadioResponse

{
    NSDate *_assetExpirationDate;
}

@property (nonatomic, readonly) ICRadioStationMetadata *stationMetadata;
@property (nonatomic, readonly) long long tracklistActionType;
@property (copy, nonatomic, readonly) NSArray *tracks;
@property (copy, nonatomic, readonly) NSDate *assetExpirationDate;

- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;

@end
