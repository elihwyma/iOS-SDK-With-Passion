/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKRouteInfo.h>

@interface VKAlternateRouteInfo : VKRouteInfo

{
    struct PolylineCoordinate _divergenceCoordinate;
    struct PolylineCoordinate _convergenceCoordinate;
    unsigned char _etaComparisonToMain;
}

@property (nonatomic, readonly) struct PolylineCoordinate divergenceCoordinate;
@property (nonatomic, readonly) struct PolylineCoordinate convergenceCoordinate;
@property (nonatomic) unsigned char etaComparisionToMain;

- (id).cxx_construct;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2 divergenceRouteCoordinate:(struct PolylineCoordinate)arg3 convergenceRouteCoordinate:(struct PolylineCoordinate)arg4;
- (id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2 divergenceRouteCoordinate:(struct PolylineCoordinate)arg3 convergenceRouteCoordinate:(struct PolylineCoordinate)arg4;

@end
