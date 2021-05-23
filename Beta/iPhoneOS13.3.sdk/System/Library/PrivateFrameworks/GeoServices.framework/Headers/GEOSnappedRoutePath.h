/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRoute, GEOComposedRouteSection, GEOMapRequest, NSArray;

@interface GEOSnappedRoutePath : NSObject

{
    GEOComposedRoute *_route;
    GEOComposedRouteSection *_section;
    NSArray *_edges;
    GEOMapRequest *_edgeSearchRequest;
    struct __CFSet *_observers;
    struct unique_ptr<geo::RouteMapMatchingSection, std::__1::default_delete<geo::RouteMapMatchingSection>> _mapMatchingSection;
    _Bool _hasCompletedMapMatching;
    unsigned int _routeStartIndex;
    unsigned int _routeEndIndex;
    unsigned int _unsnappedPointCount;
    CDStruct_869f9c67 *_unsnappedPoints;
}

@property (readonly) unsigned int routeStartIndex;
@property (readonly) unsigned int routeEndIndex;
@property (readonly) _Bool isMapMatching;
@property (readonly) _Bool isMapMatched;
@property (readonly) _Bool hasCompletedMapMatching;
@property (readonly) NSArray *edges;
@property (weak, readonly) GEOComposedRouteSection *section;
@property (readonly) const struct RouteMapMatchingSection *mapMatchingSection;

- (void)dealloc;
- (id)description;
- (void)addObserver:(id)arg1;
- (_Bool)removeObserver:(id)arg1;
- (id).cxx_construct;
- (id)initWithRoute:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;
- (void)matchWithDecoder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (float)_calculateEdgeLengthFrom:(const Matrix_8746f91e *)arg1 to:(const Matrix_8746f91e *)arg2 startCoord:(const struct PolylineCoordinate *)arg3 endCoord:(const struct PolylineCoordinate *)arg4;
- (void)_debugPrintEdge:(id)arg1;
- (_Bool)hasObserver:(id)arg1;

@end
