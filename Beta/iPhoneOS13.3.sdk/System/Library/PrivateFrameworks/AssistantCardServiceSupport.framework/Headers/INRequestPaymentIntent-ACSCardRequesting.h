/*
 Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport
 */

#import <Intents/INRequestPaymentIntent.h>

@interface INRequestPaymentIntent (ACSCardRequesting)

- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

@end
