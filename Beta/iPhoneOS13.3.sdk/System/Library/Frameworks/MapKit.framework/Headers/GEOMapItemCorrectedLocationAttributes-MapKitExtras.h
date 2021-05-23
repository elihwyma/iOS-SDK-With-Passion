/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <GeoServices/GEOMapItemCorrectedLocationAttributes.h>

@interface GEOMapItemCorrectedLocationAttributes (MapKitExtras)

- (id)_addressFormattedAsSinglelineAddress;
- (id)_addressFormattedAsShortenedAddress;
- (id)_formattedPostalAddress;
- (id)_addressFormattedAsName;

@end
