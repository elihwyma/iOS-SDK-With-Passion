/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedRouteSection.h>

@class NSString;

@interface GEOComposedRouteTransitTripSection : GEOComposedRouteSection

{
    CDStruct_79c5c966 _fromNodeID;
    CDStruct_79c5c966 _toNodeID;
    unsigned long long _lineID;
    CDStruct_2c43369c _fromNodeLocation;
    CDStruct_2c43369c _toNodeLocation;
    int _toNodeSignificance;
    Color_124dee43 _lineColor;
    CDStruct_02837cd9 _originalBounds;
}

@property (nonatomic, readonly) Color_124dee43 lineColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_79c5c966 fromNodeID;
@property (nonatomic, readonly) CDStruct_79c5c966 toNodeID;
@property (nonatomic, readonly) unsigned long long lineID;
@property (nonatomic, readonly) _Bool isTransfer;
@property (nonatomic, readonly) int toNodeSignificance;

- (id).cxx_construct;
- (_Bool)_MapsCarPlay_isEqual:(id)arg1;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 toNodeSignificance:(int)arg6 currentTransitLineColor:(id)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9 fallbackStartCoordinate:(CDStruct_c3b9c2ee)arg10 fallbackEndCoordinate:(CDStruct_c3b9c2ee)arg11;
- (void)initSupportWithRoute:(id)arg1 step:(id)arg2 toNodeSignificance:(int)arg3 currentTransitLineColor:(id)arg4;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 toNodeSignificance:(int)arg6 currentTransitLineColor:(id)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9;

@end
