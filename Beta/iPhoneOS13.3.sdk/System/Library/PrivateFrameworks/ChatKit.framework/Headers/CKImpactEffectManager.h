/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CABackdropLayer, CKBalloonView, NSString, UIScrollView, UIWindow;

@protocol CKSendAnimationBalloonProvider, CKSendAnimationManagerDelegate;

@interface CKImpactEffectManager : NSObject

{
    _Bool _isAnimating;
    _Bool _isDisabled;
    id <CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
    id <CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;
    id <CKSendAnimationManagerDelegate> _delegate;
    NSString *_animatingIdentifier;
    UIWindow *_expressiveSendAnimationWindow;
    CKBalloonView *_expressiveSendAnimationBalloon;
    CKBalloonView *_originalBalloonView;
    UIScrollView *_expressiveSendScrollView;
    CABackdropLayer *_expressiveSendAnimationBackdrop;
}

@property (retain, nonatomic) UIWindow *expressiveSendAnimationWindow;
@property (retain, nonatomic) CKBalloonView *expressiveSendAnimationBalloon;
@property (retain, nonatomic) CKBalloonView *originalBalloonView;
@property (retain, nonatomic) UIScrollView *expressiveSendScrollView;
@property (retain, nonatomic) CABackdropLayer *expressiveSendAnimationBackdrop;
@property (nonatomic) _Bool isAnimating;
@property (weak, nonatomic) id <CKSendAnimationManagerDelegate> delegate;
@property (nonatomic, readonly) NSString *animatingIdentifier;
@property (nonatomic) _Bool isDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
@property (weak, nonatomic) id <CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;

+ (_Bool)identifierIsAnimatedImpactEffect:(id)arg1;
+ (_Bool)identifierIsValidImpactEffect:(id)arg1;
+ (_Bool)identifierShouldPlayInWindow:(id)arg1;
+ (id)maskingStringForID:(id)arg1;

- (id)init;
- (void)animateMessages:(id)arg1;
- (void)stopAllEffects;
- (void)matchScrollViewOffset:(id)arg1;
- (void)_animateLastMessage:(id)arg1;
- (void)_sizeAnimationWindow;
- (id)_sendAnimationContextForIdentifier:(id)arg1 message:(id)arg2 isSender:(_Bool)arg3;
- (void)_cleanupExpressiveSendComponents;
- (void)_visibleCells:(id *)arg1 aboveItem:(id)arg2;
- (id)cloneBalloonForAnimationWithChatItem:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)animationDidFinishWithContext:(id)arg1;

@end
