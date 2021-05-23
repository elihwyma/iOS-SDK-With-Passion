/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOBaseMapItem.h>

@class GEOFeatureStyleAttributes, GEOMapItemIdentifier, GEOPDLinkedPlace;

__attribute__((visibility("hidden")))
@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem

{
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (id)description;
- (id)name;
- (_Bool)isValid;
- (id)_identifier;
- (CDStruct_c3b9c2ee)coordinate;
- (int)referenceFrame;
- (id)_styleAttributes;
- (unsigned long long)_muid;
- (_Bool)_hasMUID;
- (int)_resultProviderID;
- (_Bool)_hasResolvablePartialInformation;
- (_Bool)_responseStatusIsIncomplete;
- (_Bool)_hasResultProviderID;
- (_Bool)_isInLinkedPlaceRelationship;
- (id)initWithLinkedPlace:(id)arg1;

@end
