/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOMapItemIdentifier, NSArray, NSString;

@protocol GEOTransitArtworkDataSource, GEOTransitSystem;

@protocol GEOTransitLine <Swift>

@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) id <GEOTransitSystem> system;
@property (nonatomic, readonly) unsigned long long departureTimeDisplayStyle;
@property (nonatomic, readonly) _Bool departuresAreVehicleSpecific;
@property (nonatomic, readonly) _Bool isBus;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> artwork;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> modeArtwork;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> alternateArtwork;
@property (nonatomic, readonly) _Bool hasLineColorString;
@property (nonatomic, readonly) NSString *lineColorString;
@property (nonatomic, readonly) _Bool showVehicleNumber;
@property (nonatomic, readonly) NSArray *operatingHours;

@end
