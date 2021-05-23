/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDRestaurantReservationLink, NSArray, NSMapTable;

@interface GEORestaurantFeaturesLink : NSObject

{
    GEOPDRestaurantReservationLink *_restaurantReservationLink;
    NSMapTable *_attributionMap;
}

@property (retain, nonatomic) GEOPDRestaurantReservationLink *restaurantReservationLink;
@property (nonatomic, readonly) _Bool hasFeatures;
@property (nonatomic, readonly) NSArray *featureProviders;
@property (nonatomic, readonly) NSArray *featureTypes;

- (id)applicationsForVendorID:(id)arg1;
- (id)initWithRestaurantReservationLink:(id)arg1 attributionMap:(id)arg2;
- (id)displayNameForVendorID:(id)arg1;
- (unsigned long long)extensionModeForVendorID:(id)arg1;

@end
