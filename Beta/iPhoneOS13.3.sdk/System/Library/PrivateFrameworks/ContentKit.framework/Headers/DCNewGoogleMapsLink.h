/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/DCMapsLink.h>

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DCNewGoogleMapsLink : DCMapsLink

{
    _Bool _showsTransit;
    _Bool _showsBicycling;
    _Bool _showsStreetView;
    _Bool _showsTraffic;
    _Bool _parsed;
    int _linkType;
    unsigned long long _mapType;
    unsigned long long _directionsMode;
    long long _zoomLevel;
    NSURL *_URL;
    NSArray *_mapsURLComponents;
    NSString *_location;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSArray *mapsURLComponents;
@property (retain, nonatomic) NSString *location;
@property (nonatomic, readonly) _Bool parsed;
@property (nonatomic, readonly) int linkType;

+ (_Bool)isMapsURL:(id)arg1;
+ (id)mapsLinkWithURL:(id)arg1;

- (id)initWithURL:(id)arg1;
- (void)parse;
- (id)destinationAddress;
- (unsigned long long)mapType;
- (id)searchLocation;
- (id)searchQuery;
- (long long)zoomLevel;
- (_Bool)showsTraffic;
- (id)startAddress;
- (id)dataString;
- (unsigned long long)directionsMode;
- (id)searchNearQuery;
- (id)centerLocation;
- (_Bool)showsTransit;
- (_Bool)showsStreetView;
- (_Bool)showsBicycling;
- (id)streetViewLocation;
- (id)mapsURLComponentAtIndex:(long long)arg1;
- (void)parseLinkType;
- (id)latLonZoomString;
- (void)parseLatLonZoom;
- (void)parseMapsData;

@end
