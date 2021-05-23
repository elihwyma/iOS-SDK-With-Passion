/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRouteLeg, GEOComposedRouteStep;

@interface GEOComposedRouteSection : NSObject

{
    unsigned int _startPointIndex;
    unsigned int _pointCount;
    CDStruct_869f9c67 *_points;
    int _transportType;
    GEOComposedRouteLeg *_composedRouteLeg;
    GEOComposedRouteStep *_composedRouteStep;
    unsigned long long _composedRouteLegIndex;
    CDStruct_953f3dc7 _bounds;
    CDStruct_02837cd9 _overlayBounds;
    unsigned long long _finalStepIndex;
    double _startDistance;
    double _lengthScaleFactor;
}

@property (nonatomic, readonly) unsigned int startPointIndex;
@property (nonatomic, readonly) unsigned int endPointIndex;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) CDStruct_869f9c67 *points;
@property (nonatomic, readonly) CDStruct_953f3dc7 bounds;
@property (weak, nonatomic, readonly) GEOComposedRouteLeg *composedRouteLeg;
@property (weak, nonatomic, readonly) GEOComposedRouteStep *composedRouteStep;
@property (nonatomic, readonly) unsigned long long composedRouteLegIndex;
@property (nonatomic, readonly) unsigned long long finalStepIndex;
@property (nonatomic, readonly) double startDistance;
@property (nonatomic) double lengthScaleFactor;
@property (nonatomic, readonly) int transportType;

- (void)dealloc;
- (id)description;
- (_Bool)_MapsCarPlay_isEqual:(id)arg1;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 bounds:(CDStruct_953f3dc7)arg4 transportType:(int)arg5 finalStepIndex:(unsigned long long)arg6 startDistance:(double)arg7 lengthScaleFactor:(double)arg8;
- (void)_initStepForRoute:(id)arg1;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 transportType:(int)arg4 finalStepIndex:(unsigned long long)arg5 fallbackStartCoordinate:(CDStruct_c3b9c2ee)arg6 fallbackEndCoordinate:(CDStruct_c3b9c2ee)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9;
- (_Bool)isTransfer;

@end
