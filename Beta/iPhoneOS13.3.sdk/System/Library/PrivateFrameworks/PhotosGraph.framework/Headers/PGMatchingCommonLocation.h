/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGMatchingCommonLocation : NSObject

{
    double _distance;
    NSString *_label;
    struct CLLocationCoordinate2D _coordinate;
    struct CLLocationCoordinate2D _addressCoordinate;
}

@property (retain, nonatomic) NSString *label;
@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (nonatomic) struct CLLocationCoordinate2D addressCoordinate;

+ (id)matchingCommonLocationWithLabel:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 forAddressCoordinate:(struct CLLocationCoordinate2D)arg3;

- (double)distanceBetweenCoordinates;

@end
