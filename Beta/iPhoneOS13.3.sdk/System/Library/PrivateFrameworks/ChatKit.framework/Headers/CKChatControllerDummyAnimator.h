/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CAEmitterLayer, NSString;

@protocol CKSendAnimationManager, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKChatControllerDummyAnimator : NSObject

{
    id <CKSendAnimationManager> _animationDelegate;
    CAEmitterLayer *_dustEmitter;
    NSObject<OS_dispatch_group> *_throwAnimationGroup;
}

@property (retain, nonatomic) CAEmitterLayer *dustEmitter;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *throwAnimationGroup;
@property (weak, nonatomic) id <CKSendAnimationManager> animationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)beginAnimationWithSendAnimationContext:(id)arg1;
- (void)stopAnimationWithSendAnimationContext:(id)arg1;
- (void)_beginImpactAnimationWithContext:(id)arg1;
- (void)_beginGentleAnimationWithContext:(id)arg1;
- (void)_beginLoudAnimationsWithContext:(id)arg1;
- (void)_beginFocusAnimationWithContext:(id)arg1;
- (void)_beginThrowAnimationWithContext:(id)arg1;

@end
