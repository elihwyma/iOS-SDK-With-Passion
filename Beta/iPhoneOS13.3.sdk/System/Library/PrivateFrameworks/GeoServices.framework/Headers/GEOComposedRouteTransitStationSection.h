/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedRouteSection.h>

@class NSString;

@interface GEOComposedRouteTransitStationSection : GEOComposedRouteSection

{
    CDStruct_2c43369c _fromNodeLocation;
    CDStruct_2c43369c _toNodeLocation;
    CDStruct_79c5c966 _fromNodeID;
    CDStruct_79c5c966 _toNodeID;
    int _toNodeSignificance;
    CDStruct_02837cd9 _originalBounds;
}

@property (nonatomic, readonly) CDStruct_79c5c966 fromNodeID;
@property (nonatomic, readonly) CDStruct_79c5c966 toNodeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long lineID;
@property (nonatomic, readonly) _Bool isTransfer;
@property (nonatomic, readonly) int toNodeSignificance;

- (_Bool)_MapsCarPlay_isEqual:(id)arg1;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 step:(id)arg4 toNodeSignificance:(int)arg5 startDistance:(double)arg6 lengthScaleFactor:(double)arg7;

@end
