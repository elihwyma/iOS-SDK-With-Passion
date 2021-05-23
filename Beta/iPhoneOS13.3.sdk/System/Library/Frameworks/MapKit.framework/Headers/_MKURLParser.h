/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOMapURLParser, GEOMuninViewState, GEOURLCollectionStorage, GEOURLExtraStorage, GEOUserSessionEntity, MKMapCamera, NSString;

@interface _MKURLParser : NSObject

{
    GEOMapURLParser *parser;
}

@property (nonatomic, readonly) unsigned long long mapType;
@property (nonatomic, readonly) unsigned long long transportType;
@property (nonatomic, readonly) _Bool trackingModeSpecified;
@property (nonatomic, readonly) long long trackingMode;
@property (nonatomic, readonly) _Bool exactPositionSpecified;
@property (nonatomic, readonly) struct CLLocationCoordinate2D centerCoordinate;
@property (nonatomic, readonly) CDStruct_c3b9c2ee span;
@property (nonatomic, readonly) float zoomLevel;
@property (readonly) NSString *addressString;
@property (readonly) NSString *directionsSourceAddressString;
@property (readonly) NSString *directionsDestinationAddressString;
@property (readonly) NSString *searchQuery;
@property (readonly) NSString *label;
@property (nonatomic, readonly) struct CLLocationCoordinate2D searchCoordinate;
@property (nonatomic, readonly) CDStruct_b7cb895d searchRegion;
@property (nonatomic, readonly) int searchProviderID;
@property (nonatomic, readonly) unsigned long long searchUID;
@property (nonatomic, readonly) NSString *contentProvider;
@property (nonatomic, readonly) NSString *contentProviderID;
@property (nonatomic, readonly) NSString *abRecordID;
@property (nonatomic, readonly) NSString *abAddressID;
@property (nonatomic, readonly) NSString *cnContactIdentifier;
@property (nonatomic, readonly) NSString *cnAddressIdentifier;
@property (readonly) GEOUserSessionEntity *userSessionEntity;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) double tilt;
@property (nonatomic, readonly) double roll;
@property (nonatomic, readonly) MKMapCamera *mapCamera;
@property (nonatomic, readonly) unsigned long long lineMUID;
@property (copy, readonly) NSString *lineName;
@property (nonatomic, readonly) long long favoritesType;
@property (nonatomic, readonly) _Bool tester;
@property (nonatomic, readonly) GEOURLCollectionStorage *collectionStorage;
@property (nonatomic, readonly) GEOURLExtraStorage *extraStorage;
@property (nonatomic, readonly) GEOMuninViewState *muninViewState;
@property (readonly) _Bool showCarDestinations;

+ (_Bool)isValidMapURL:(id)arg1;

- (id)initWithURL:(id)arg1;
- (_Bool)parseIncludingCustomParameters:(_Bool)arg1;

@end
