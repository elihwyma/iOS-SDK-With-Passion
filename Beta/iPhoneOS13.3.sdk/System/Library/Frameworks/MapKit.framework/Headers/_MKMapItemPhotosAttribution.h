/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemPhotosAttribution, NSArray;

@interface _MKMapItemPhotosAttribution : _MKMapItemAttribution

{
    GEOMapItemPhotosAttribution *_geoPhotosAttribution;
}

@property (nonatomic, readonly) NSArray *addPhotoURLs;

- (id)urlsForPhotoWithIdentifier:(id)arg1;
- (id)initWithGEOMapItemAttribution:(id)arg1;

@end
