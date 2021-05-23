/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class NSString;

@protocol GEOMapItem;

@protocol MSPFavoritePlace <Swift>

@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) id <GEOMapItem> geoMapItem;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinateOfDroppedPin;
@property (nonatomic, readonly) int floorOrdinalOfDroppedPin;

@end
