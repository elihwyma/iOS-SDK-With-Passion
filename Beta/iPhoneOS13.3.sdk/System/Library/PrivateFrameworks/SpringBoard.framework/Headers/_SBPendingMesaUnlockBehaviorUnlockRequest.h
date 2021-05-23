/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBAuthenticationFeedback;

@protocol SBBiometricUnlockBehavior;

@interface _SBPendingMesaUnlockBehaviorUnlockRequest : NSObject

{
    id <SBBiometricUnlockBehavior> _behavior;
    id _request;
    SBAuthenticationFeedback *_feedback;
}

@property (nonatomic, readonly) id <SBBiometricUnlockBehavior> behavior;
@property (nonatomic, readonly) id request;
@property (nonatomic, readonly) SBAuthenticationFeedback *feedback;

- (id)initWithBehavior:(id)arg1 request:(id)arg2 feedback:(id)arg3;

@end
