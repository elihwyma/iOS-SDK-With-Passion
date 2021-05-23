/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <GeoServices/GEOBaseMapItem.h>

@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem

{
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)arg1;

- (id)name;
- (_Bool)isValid;
- (id)_identifier;
- (CDStruct_c3b9c2ee)coordinate;
- (int)referenceFrame;
- (id)_styleAttributes;
- (unsigned long long)_muid;
- (id)_place;
- (_Bool)_hasMUID;
- (_Bool)_hasResolvablePartialInformation;
- (_Bool)_isTransitDisplayFeature;
- (_Bool)_hasVenueFeatureType;
- (int)_venueFeatureType;
- (id)_venueInfo;
- (id)initWithLabelMarker:(id)arg1;
- (id)_labelMarker;

@end
