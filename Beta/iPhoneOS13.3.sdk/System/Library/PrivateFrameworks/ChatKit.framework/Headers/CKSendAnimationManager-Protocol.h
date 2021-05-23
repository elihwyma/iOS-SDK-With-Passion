/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@protocol CKSendAnimationBalloonProvider, CKSendAnimationManagerDelegate;

@protocol CKSendAnimationManager <Swift>

@property (weak, nonatomic) id <CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
@property (weak, nonatomic) id <CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;

- (unsigned short)animateMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)animationWillBeginWithContext: /* Error: Ran out of types for this method. */;
- (unsigned short)animationDidFinishWithContext: /* Error: Ran out of types for this method. */;

@end
