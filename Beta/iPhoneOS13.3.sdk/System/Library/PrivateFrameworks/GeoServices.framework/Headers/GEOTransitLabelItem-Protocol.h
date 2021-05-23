/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSString;

@protocol GEOTransitArtworkDataSource;

@protocol GEOTransitLabelItem <Swift>

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> labelArtwork;

@end
