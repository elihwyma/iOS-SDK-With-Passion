/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INVisualCodeTypeResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedVisualCodeType:(long long)arg1;
+ (id)confirmationRequiredWithVisualCodeTypeToConfirm:(long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
