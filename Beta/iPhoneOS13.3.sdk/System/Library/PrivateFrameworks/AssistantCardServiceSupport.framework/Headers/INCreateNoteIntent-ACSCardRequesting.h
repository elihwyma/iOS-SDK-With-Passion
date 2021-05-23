/*
 Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport
 */

#import <Intents/INCreateNoteIntent.h>

@interface INCreateNoteIntent (ACSCardRequesting)

- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;
- (void)_buildCardFromRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
