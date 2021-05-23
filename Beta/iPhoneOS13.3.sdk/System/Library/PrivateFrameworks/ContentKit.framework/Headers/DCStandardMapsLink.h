/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/DCMapsLink.h>

@class NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface DCStandardMapsLink : DCMapsLink

{
    NSURL *_URL;
    NSDictionary *_queryDictionary;
}

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDictionary *queryDictionary;

+ (_Bool)isMapsURL:(id)arg1;
+ (id)mapsLinkWithURL:(id)arg1;
+ (_Bool)isStandardAppleMapsURL:(id)arg1;
+ (_Bool)isStandardGoogleMapsURL:(id)arg1;

- (id)initWithURL:(id)arg1;
- (id)destinationAddress;
- (unsigned long long)mapType;
- (id)searchLocation;
- (id)searchQuery;
- (long long)zoomLevel;
- (_Bool)showsTraffic;
- (id)startAddress;
- (unsigned long long)directionsMode;
- (id)searchNearQuery;
- (id)centerLocation;
- (_Bool)showsTransit;
- (_Bool)showsStreetView;
- (_Bool)showsBicycling;
- (id)streetViewLocation;

@end
