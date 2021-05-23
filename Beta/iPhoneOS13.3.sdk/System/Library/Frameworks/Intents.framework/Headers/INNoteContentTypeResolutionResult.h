/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INNoteContentTypeResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedNoteContentType:(long long)arg1;
+ (id)confirmationRequiredWithNoteContentTypeToConfirm:(long long)arg1;

- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
