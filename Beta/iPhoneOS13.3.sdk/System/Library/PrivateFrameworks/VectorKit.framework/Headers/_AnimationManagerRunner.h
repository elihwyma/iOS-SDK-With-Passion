/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _AnimationManagerRunner : NSObject

{
    struct AnimationManager {
        CDUnknownFunctionPointerType *;
        struct _retain_ptr<_AnimationManagerRunner *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
            CDUnknownFunctionPointerType *_field1;
            id _field2;
            struct _retain_objc _field3;
            struct _release_objc _field4;
        };
        struct RunLoopController *;
        struct mutex;
        struct array<std::__1::unordered_set<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::equal_to<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::allocator<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>>, 2>;
        struct atomic<bool>;
    } *_animationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)animationDidStop:(id)arg1;
- (void)animationDidResume:(id)arg1;
- (id)initWithAnimationManager:(struct AnimationManager *)arg1;

@end
