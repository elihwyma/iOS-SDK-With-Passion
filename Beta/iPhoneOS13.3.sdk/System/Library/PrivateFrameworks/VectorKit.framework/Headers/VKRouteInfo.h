/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, VKRouteEtaDescription;

@interface VKRouteInfo : NSObject

{
    GEOComposedRoute *_route;
    VKRouteEtaDescription *_etaDescription;
    _Bool _hasFocus;
}

@property (nonatomic, readonly) GEOComposedRoute *route;
@property (retain, nonatomic) VKRouteEtaDescription *etaDescription;
@property (nonatomic, readonly) _Bool hasRouteEta;
@property (nonatomic) _Bool hasFocus;

- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2;

@end
