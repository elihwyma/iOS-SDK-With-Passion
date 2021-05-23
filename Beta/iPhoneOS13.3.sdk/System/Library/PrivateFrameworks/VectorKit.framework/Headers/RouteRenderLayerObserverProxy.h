/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RouteRenderLayerObserverProxy : NSObject

{
    struct PolylineGroupChangeObserver *_polylineGroupObserver;
    struct vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>> _retainedGroups;
    struct set<VKPolylineGroupOverlay *, std::__1::less<VKPolylineGroupOverlay *>, std::__1::allocator<VKPolylineGroupOverlay *>> _observedGroupsSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didFocusPolyline:(id)arg2;
- (id)initWithPolylineGroupObserver:(struct PolylineGroupChangeObserver *)arg1;
- (void)startObserving:(id)arg1;
- (void)stopObserving:(id)arg1;

@end
