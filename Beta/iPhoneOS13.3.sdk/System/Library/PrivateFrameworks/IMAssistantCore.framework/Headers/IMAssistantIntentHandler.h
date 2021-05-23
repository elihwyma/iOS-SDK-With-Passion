/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Intents/_INExtension.h>

@class NSMutableArray;

@interface IMAssistantIntentHandler : _INExtension

{
    NSMutableArray *_recentIntentHandlers;
}

- (id)init;
- (id)handlerForIntent:(id)arg1;
- (id)existingHandlerForIntentIdentifier:(id)arg1;
- (void)updateRecentlyUsedHandlersWithHandler:(id)arg1;

@end
