/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class GEOMapRegion, NSString;

@protocol MSPFavoriteRegion <Swift>

@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) GEOMapRegion *geoMapRegion;

@end
