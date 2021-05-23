/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class VKPolylineOverlay;

@protocol VKGlobeLineContainerDelegate, VKRouteMatchedAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKGlobeLineContainer : NSObject

{
    id <VKRouteMatchedAnnotationPresentation> _routeLineSplitAnnotation;
    id <VKGlobeLineContainerDelegate> _delegate;
    set_f5697f57 _overlays;
    set_f5697f57 _persistentOverlays;
    set_f5697f57 _nonPersistentOverlays;
    struct RouteRenderLayer *_routeRenderLayer;
    struct map<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<VKPolylineOverlay *>, std::__1::allocator<std::__1::pair<VKPolylineOverlay *const, std::__1::weak_ptr<altitude::RouteLineData>>>> _polylinesToRoutes;
    VKPolylineOverlay *_selectedPolyline;
    struct VKGlobeRouteSplit *_routeSplit;
}

@property (retain, nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property (nonatomic) id <VKGlobeLineContainerDelegate> delegate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id).cxx_construct;
- (void)update;
- (const set_f5697f57 *)overlays;
- (void)addLine:(id)arg1;
- (id)initWithRouteRenderLayer:(struct RouteRenderLayer *)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addNonPersistentOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeNonPersistentOverlay:(id)arg1;
- (float)halfWidthForLine:(id)arg1 styleZ:(float)arg2;
- (const set_f5697f57 *)persistentOverlays;
- (_Bool)hasPersistentOverlay:(id *)arg1;
- (_Bool)hasNonPersistentOverlay:(id *)arg1;
- (const set_f5697f57 *)nonPersistentOverlays;
- (void)clearLineSelection;
- (void)setSelected:(id)arg1 selected:(_Bool)arg2;
- (void)_addOverlay:(id)arg1;
- (void)removeLine:(id)arg1;
- (void)_removeOverlay:(id)arg1;
- (void)_recreateLinesIfNeeded;
- (void)_updateRouteSplit;

@end
