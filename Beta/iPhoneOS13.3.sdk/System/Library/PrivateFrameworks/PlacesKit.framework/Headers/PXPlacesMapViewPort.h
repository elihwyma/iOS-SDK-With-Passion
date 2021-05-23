/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@interface PXPlacesMapViewPort : NSObject

{
    double _zoomLevel;
    double _pitch;
    double _scale;
    struct CGSize _viewSize;
    CDStruct_02837cd9 _mapRect;
}

@property (nonatomic) CDStruct_02837cd9 mapRect;
@property (nonatomic) struct CGSize viewSize;
@property (nonatomic) double zoomLevel;
@property (nonatomic) double pitch;
@property (nonatomic) double scale;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMapRect:(CDStruct_02837cd9)arg1 andViewSize:(struct CGSize)arg2 zoomLevel:(double)arg3 pitch:(double)arg4;
- (_Bool)isSpanning180thMerdian;
- (id)viewPortsBySplitingAt180thMerdian;

@end
