/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKRouteContextObserverThunk : NSObject

{
    struct LabelTransitSupport *_transitSupport;
    struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _routeContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)routeContextStateDidChange:(id)arg1;
- (id)initWithRouteContext:(id)arg1 transitSupport:(struct LabelTransitSupport *)arg2;

@end
