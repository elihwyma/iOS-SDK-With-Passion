/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMuninViewState, GEOURLCollectionStorage, GEOURLExtraStorage, GEOUserSessionEntity, NSString, NSURL;

@interface GEOMapURLParser : NSObject

{
    NSURL *_url;
    int _mapType;
    int _transportType;
    int _trackingMode;
    _Bool _trackingModeSpecified;
    _Bool _exactPositionSpecified;
    CDStruct_2c43369c _centerCoordinate;
    CDStruct_951efa70 _span;
    float _zoomLevel;
    NSString *_addressString;
    NSString *_directionsSourceAddressString;
    NSString *_directionsDestinationAddressString;
    NSString *_searchQuery;
    CDStruct_2c43369c _searchCoordinate;
    struct {
        CDStruct_2c43369c center;
        CDStruct_951efa70 span;
    } _searchRegion;
    int _searchProviderID;
    unsigned long long _searchUID;
    NSString *_contentProvider;
    NSString *_contentProviderID;
    NSString *_abRecordID;
    NSString *_abAddressID;
    NSString *_cnContactIdentifier;
    NSString *_cnAddressIdentifier;
    GEOUserSessionEntity *_userSessionEntity;
    double _altitude;
    double _rotation;
    double _tilt;
    double _roll;
    unsigned long long _lineMUID;
    NSString *_lineName;
    long long _favoritesType;
    _Bool _tester;
    GEOURLCollectionStorage *_collectionStorage;
    GEOURLExtraStorage *_extraStorage;
    GEOMuninViewState *_muninViewState;
    NSString *_label;
    _Bool _showCarDestinations;
}

@property (nonatomic, readonly) int mapType;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) int trackingMode;
@property (nonatomic, readonly) _Bool trackingModeSpecified;
@property (nonatomic, readonly) _Bool exactPositionSpecified;
@property (nonatomic, readonly) CDStruct_c3b9c2ee centerCoordinate;
@property (nonatomic, readonly) CDStruct_c3b9c2ee span;
@property (nonatomic, readonly) float zoomLevel;
@property (nonatomic, readonly) NSString *addressString;
@property (nonatomic, readonly) NSString *directionsSourceAddressString;
@property (nonatomic, readonly) NSString *directionsDestinationAddressString;
@property (nonatomic, readonly) NSString *searchQuery;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) CDStruct_c3b9c2ee searchCoordinate;
@property (nonatomic, readonly) CDStruct_90e2a262 searchRegion;
@property (nonatomic, readonly) int searchProviderID;
@property (nonatomic, readonly) unsigned long long searchUID;
@property (nonatomic, readonly) NSString *contentProvider;
@property (nonatomic, readonly) NSString *contentProviderID;
@property (nonatomic, readonly) NSString *abRecordID;
@property (nonatomic, readonly) NSString *abAddressID;
@property (nonatomic, readonly) NSString *cnContactIdentifier;
@property (nonatomic, readonly) NSString *cnAddressIdentifier;
@property (nonatomic, readonly) GEOUserSessionEntity *userSessionEntity;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) double tilt;
@property (nonatomic, readonly) double roll;
@property (nonatomic, readonly) unsigned long long lineMUID;
@property (copy, nonatomic, readonly) NSString *lineName;
@property (nonatomic, readonly) long long favoritesType;
@property (nonatomic, readonly) _Bool tester;
@property (nonatomic, readonly) GEOURLCollectionStorage *collectionStorage;
@property (nonatomic, readonly) GEOURLExtraStorage *extraStorage;
@property (nonatomic, readonly) GEOMuninViewState *muninViewState;
@property (nonatomic, readonly) _Bool showCarDestinations;

+ (_Bool)isValidMapURL:(id)arg1;
+ (_Bool)isValidMapsCategoryURL:(id)arg1;
+ (_Bool)isValidMapsURLForAppendingSharedSessionID:(id)arg1;

- (id)initWithURL:(id)arg1;
- (id)restoreCodableOfClass:(Class)arg1 queryItem:(id)arg2 key:(id)arg3 compressedKey:(id)arg4;
- (_Bool)parseIncludingCustomParameters:(_Bool)arg1;

@end
