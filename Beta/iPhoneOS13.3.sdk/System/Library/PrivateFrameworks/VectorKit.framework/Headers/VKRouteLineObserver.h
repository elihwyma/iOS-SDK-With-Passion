/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class VKRouteLine;

__attribute__((visibility("hidden")))
@interface VKRouteLineObserver : NSObject

{
    struct LabelTransitSupport *_transitSupport;
    VKRouteLine *_routeLine;
}

- (void)dealloc;
- (id)initWithTransitSupport:(struct LabelTransitSupport *)arg1 andRouteLine:(id)arg2;
- (void)routeLineDidUpdateSections:(id)arg1;

@end
