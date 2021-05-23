/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@protocol GEOVenueIdentifier, GEOVenueLabel;

@protocol GEOVenueFilterItem

@property (nonatomic, readonly) id <GEOVenueIdentifier> filterID;
@property (nonatomic, readonly) id <GEOVenueLabel> label;
@property (nonatomic, readonly) _Bool describesParentVenue;

@end
