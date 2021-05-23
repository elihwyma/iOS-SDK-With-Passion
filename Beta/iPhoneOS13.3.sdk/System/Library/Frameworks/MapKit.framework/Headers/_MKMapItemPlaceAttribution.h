/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemPlaceAttribution, NSArray;

@interface _MKMapItemPlaceAttribution : _MKMapItemAttribution

{
    GEOMapItemPlaceAttribution *_geoPlaceAttribution;
}

@property (nonatomic, readonly) NSArray *checkInURLs;

- (id)initWithGEOMapItemAttribution:(id)arg1;

@end
