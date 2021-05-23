/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKFeatureMarker.h>

@class GEOMapItemIdentifier, NSArray;

@interface VKVenueFeatureMarker : VKFeatureMarker

{
    _Bool _localize;
}

@property (nonatomic, readonly) unsigned long long businessID;
@property (nonatomic, readonly) GEOMapItemIdentifier *mapIdentifier;
@property (nonatomic, readonly) NSArray *buildings;

- (id)name;
- (id)shortName;
- (id)initWithVenue:(const struct Venue *)arg1 localize:(_Bool)arg2;
- (const shared_ptr_c500bfa8 *)venueFeatureMarker;

@end
