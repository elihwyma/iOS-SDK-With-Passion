/*
 Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport
 */

#import <Intents/INIntent.h>

@interface INIntent (ACSCardRequesting)

- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;
- (_Bool)acs_needsTitleCardSection;
- (id)acs_utteranceForCardService;

@end
