/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOMapItemIdentifier, GEOPBTransitLine, GEOStyleAttributes, NSArray, NSString;

@protocol GEOTransitArtworkDataSource, GEOTransitSystem;

__attribute__((visibility("hidden")))
@interface _GEOTransitLine : NSObject <Swift>

{
    GEOPBTransitLine *_line;
    id <GEOTransitSystem> _system;
    CDStruct_2c43369c _locationHint;
}

@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLine:(id)arg1 system:(id)arg2 locationHint:(CDStruct_c3b9c2ee)arg3;

@end
