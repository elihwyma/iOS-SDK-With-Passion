/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/TBRemoteFetchResponse.h>

@class GEOWiFiQualityNetworkSearchResult;

@interface TBNetworkRemoteFetchResponse : TBRemoteFetchResponse

{
    GEOWiFiQualityNetworkSearchResult *_networkSearchResult;
}

@property (retain, nonatomic) GEOWiFiQualityNetworkSearchResult *networkSearchResult;

+ (id)responseWithNetworkSearchResults:(id)arg1;

- (id)initWithNetworkSearchResults:(id)arg1;

@end
