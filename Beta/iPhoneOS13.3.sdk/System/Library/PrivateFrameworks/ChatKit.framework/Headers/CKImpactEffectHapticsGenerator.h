/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@protocol CK_UIFeedBackImpactBehavior;

@interface CKImpactEffectHapticsGenerator : NSObject

{
    _Bool _sendFeedbackImpactBehavior;
    NSObject<CK_UIFeedBackImpactBehavior> *_expressiveSendFeedbackImpactBehavior;
    double _feedbackImpactBehaviorDispatchDelay;
}

@property (retain, nonatomic) NSObject<CK_UIFeedBackImpactBehavior> *expressiveSendFeedbackImpactBehavior;
@property (nonatomic) double feedbackImpactBehaviorDispatchDelay;
@property (nonatomic) _Bool sendFeedbackImpactBehavior;

- (id)init;
- (void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg1 cleanUpOnSend:(_Bool)arg2;
- (void)_setUpExpressiveSendFeedbackImpactBehaviorForCoordinateSpace:(id)arg1;
- (void)cleanUpImpactBehaviorFeedback;
- (void)setImpactBehaviorFeedbackDispatchTimeForSendWithImpactMessage:(id)arg1;
- (void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg1;

@end
