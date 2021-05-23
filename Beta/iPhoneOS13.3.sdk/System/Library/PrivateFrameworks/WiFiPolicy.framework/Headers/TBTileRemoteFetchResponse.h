/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/TBRemoteFetchResponse.h>

@class GEOWiFiQualityLocationSearchResult;

@interface TBTileRemoteFetchResponse : TBRemoteFetchResponse

{
    GEOWiFiQualityLocationSearchResult *_locationSearchResult;
}

@property (retain, nonatomic) GEOWiFiQualityLocationSearchResult *locationSearchResult;

+ (id)responseWithTileItems:(id)arg1;

- (id)initWithTileItems:(id)arg1;

@end
