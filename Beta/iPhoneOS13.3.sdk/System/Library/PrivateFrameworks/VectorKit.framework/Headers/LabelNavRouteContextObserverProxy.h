/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LabelNavRouteContextObserverProxy : NSObject

{
    struct RouteContextChangeObserver *_observer;
    struct vector<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, geo::StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator>> _observedContexts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)startObserving:(id)arg1;
- (void)stopObserving:(id)arg1;
- (id)initWithRouteContextChangeObserver:(struct RouteContextChangeObserver *)arg1;
- (void)routeContextStateDidChange:(id)arg1;

@end
