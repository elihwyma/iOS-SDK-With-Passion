/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapItemParentVenue, NSArray, NSString;

@protocol GEOMapItemVenueContents, GEOVenueIdentifier;

@interface GEOMapItemVenueInfo : NSObject

{
    id <GEOVenueIdentifier> _venueIdentifier;
    int _venueFeatureType;
    NSArray *_filters;
    GEOMapItemParentVenue *_parent;
    id <GEOMapItemVenueContents> _contents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <GEOVenueIdentifier> venueIdentifier;
@property (nonatomic, readonly) int venueFeatureType;
@property (nonatomic, readonly) NSArray *filters;
@property (nonatomic, readonly) GEOMapItemParentVenue *parent;
@property (nonatomic, readonly) id <GEOMapItemVenueContents> contents;

- (id)init;
- (id)initWithVenueInfo:(id)arg1;
- (id)_filtersFromVenueInfo:(id)arg1;
- (id)initWithIdentifier:(id)arg1 featureType:(int)arg2 filters:(id)arg3 parent:(id)arg4 contents:(id)arg5;

@end
