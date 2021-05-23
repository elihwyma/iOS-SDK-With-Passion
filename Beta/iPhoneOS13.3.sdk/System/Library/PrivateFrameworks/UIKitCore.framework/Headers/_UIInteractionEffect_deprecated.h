/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIDynamicAnimator, UIDynamicItemBehavior, UIPushBehavior, _UIDynamicTransformer, _UISpringBehavior;

__attribute__((visibility("hidden")))
@interface _UIInteractionEffect_deprecated : NSObject

{
    UIDynamicAnimator *_animator;
    _UIDynamicTransformer *_transformer;
    _UISpringBehavior *_springBehavior;
    UIPushBehavior *_forceBehavior;
    UIDynamicItemBehavior *_itemProperties;
    double _damping;
    double _frequency;
    double _density;
    double _resistance;
    struct CGAffineTransform _preferredContentTransform;
    double _progress;
    double _forceFactor;
    CDUnknownBlockType _updateBlock;
}

@property (nonatomic) double forceFactor;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (nonatomic, readonly) struct CGAffineTransform preferredContentTransform;
@property (nonatomic, readonly) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect bounds;

- (id)init;
- (void)_prepareAnimatorIfNeeded;
- (void)_updateAnimatorIfNeeded;
- (void)_updateFromTransformer:(id)arg1;
- (void)_stopAnimations;

@end
