/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol GEOVenueIdentifier, GEOVenueLabel;

@interface GEOVenueFilterItem : NSObject

{
    id <GEOVenueIdentifier> _filterID;
    id <GEOVenueLabel> _label;
    _Bool _describesParentVenue;
}

@property (nonatomic, readonly) id <GEOVenueIdentifier> filterID;
@property (nonatomic, readonly) id <GEOVenueLabel> label;
@property (nonatomic, readonly) _Bool describesParentVenue;

- (id)init;
- (id)initWithLabel:(id)arg1 filterID:(id)arg2;
- (id)initWithFilterElementInfo:(id)arg1;

@end
