/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol GEOVenueIdentifier;

@interface GEOVenueSearchFilter : NSObject

{
    id <GEOVenueIdentifier> _identifier;
}

@property (nonatomic, readonly) id <GEOVenueIdentifier> identifier;

- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)applyToSearchParameters:(id)arg1 error:(id *)arg2;

@end
