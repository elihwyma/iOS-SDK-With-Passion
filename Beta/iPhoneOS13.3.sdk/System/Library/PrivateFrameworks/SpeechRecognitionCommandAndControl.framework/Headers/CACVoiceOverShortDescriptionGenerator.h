/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@interface CACVoiceOverShortDescriptionGenerator : NSObject

+ (id)sharedInstance;

- (id)_items:(id)arg1 byKeyGeneratedUsingBlock:(CDUnknownBlockType)arg2;
- (void)_addToItemShortDescriptionPairs:(id)arg1 foritems:(id)arg2 keyGenerationBlocks:(id)arg3 shortDescriptionGenerationBlocks:(id)arg4 lastResortShortDescriptionGenerationBlock:(CDUnknownBlockType)arg5;
- (id)_lowerPitchForString:(id)arg1;
- (id)shortDescriptionsForItems:(id)arg1 style:(long long)arg2;

@end
