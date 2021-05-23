/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIApplicationSceneDeactivationManager;

@interface UIApplicationSceneDeactivationAssertion : NSObject

{
    long long _reason;
    CDUnknownBlockType _predicate;
    UIApplicationSceneDeactivationManager *_manager;
    _Bool _acquired;
}

@property (weak, nonatomic, readonly) UIApplicationSceneDeactivationManager *manager;
@property (nonatomic, readonly) long long reason;
@property (copy, nonatomic, readonly) CDUnknownBlockType predicate;
@property (nonatomic, readonly, getter=isAcquired) _Bool acquired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)acquire;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)relinquish;
- (void)acquireWithPredicate:(CDUnknownBlockType)arg1 transitionContext:(id)arg2;
- (id)initWithReason:(long long)arg1 manager:(id)arg2;

@end
