/*
 Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport
 */

#import <Intents/INSendPaymentIntent.h>

@interface INSendPaymentIntent (ACSCardRequesting)

- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

@end
