/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INPersonResolutionResult.h>

@interface INStartCallContactResolutionResult : INPersonResolutionResult

+ (id)unsupportedForReason:(long long)arg1;
+ (id)confirmationRequiredWithPersonToConfirm:(id)arg1 forReason:(long long)arg2;

- (id)initWithPersonResolutionResult:(id)arg1;
- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;

@end
