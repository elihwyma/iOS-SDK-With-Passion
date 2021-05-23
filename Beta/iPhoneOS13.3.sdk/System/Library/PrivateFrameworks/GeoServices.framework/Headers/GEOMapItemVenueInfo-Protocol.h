/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOMapItemParentVenue, NSArray;

@protocol GEOMapItemVenueContents, GEOVenueIdentifier;

@protocol GEOMapItemVenueInfo <Swift>

@property (nonatomic, readonly) id <GEOVenueIdentifier> venueIdentifier;
@property (nonatomic, readonly) int venueFeatureType;
@property (nonatomic, readonly) NSArray *filters;
@property (nonatomic, readonly) GEOMapItemParentVenue *parent;
@property (nonatomic, readonly) id <GEOMapItemVenueContents> contents;

@end
