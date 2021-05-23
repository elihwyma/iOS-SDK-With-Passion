/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSArray;

@protocol GEOVenueIdentifier <Swift>

@property (nonatomic, readonly, getter=_hasVenueID) _Bool hasVenueID;
@property (nonatomic, readonly) unsigned long long venueID;
@property (nonatomic, readonly, getter=_hasFeatureID) _Bool hasFeatureID;
@property (nonatomic, readonly) unsigned long long featureID;
@property (nonatomic, readonly, getter=_hasBusinessID) _Bool hasBusinessID;
@property (nonatomic, readonly) unsigned long long businessID;
@property (nonatomic, readonly) NSArray *componentIdentifiers;

- (unsigned short)placeDataVenueIdentifier;
- (unsigned short)placeDataVenueIdentifierForVenue;

@end
