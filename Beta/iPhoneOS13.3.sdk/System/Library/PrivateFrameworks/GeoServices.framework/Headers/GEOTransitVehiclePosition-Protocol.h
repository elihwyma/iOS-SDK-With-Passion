/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSDate, NSString;

@protocol GEOTransitArtworkDataSource;

@protocol GEOTransitVehiclePosition <Swift>

@property (nonatomic, readonly) unsigned long long tripID;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) double heading;
@property (nonatomic, readonly) NSDate *timestamp;
@property (copy, nonatomic, readonly) NSString *direction;
@property (copy, nonatomic, readonly) NSString *headsign;
@property (copy, nonatomic, readonly) NSString *colorHexString;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> artworkDataSource;

@end
