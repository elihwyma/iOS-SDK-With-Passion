/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXPredictiveTypingModel : NSObject

{
    void *_wordModel;
}

- (id)init;
- (void)dealloc;
- (void)enumerateTokensForText:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned int *)_newContextForText:(id)arg1 includeLastToken:(_Bool)arg2 length:(long long *)arg3;
- (id)_lastPartialWordForText:(id)arg1 orEndOfSentence:(_Bool *)arg2;
- (id)_completionPredictionsForPrefix:(id)arg1 entireText:(id)arg2 desiredNumber:(unsigned long long)arg3;
- (id)_nextWordPredictionsForText:(id)arg1 desiredNumber:(unsigned long long)arg2;
- (id)predictionsForText:(id)arg1 desiredNumber:(unsigned long long)arg2;
- (id)predictionsForText:(id)arg1;

@end
