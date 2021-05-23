/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, TIInputMode;

@interface TIEmojiCandidateGenerator : NSObject

{
    void *m_emojiGeneratorPrimaryLanguage;
    void *m_emojiGeneratorSecondaryLanguage;
    _Bool m_didAttemptPrimaryEmojiGeneratorLoad;
    _Bool m_didAttemptSecondaryEmojiGeneratorLoad;
    _Bool m_shouldShowEmojis;
    struct __EmojiLocaleDataWrapper *m_emojiDataForPrimaryLocale;
    struct __EmojiLocaleDataWrapper *m_emojiDataForSecondaryLocale;
    _Bool m_didAttemptPrimaryLocaleForEmojiLoad;
    _Bool m_didAttemptSecondaryLocaleForEmojiLoad;
    _Bool m_isEmojiInputModeEnabled;
    NSArray *_activeInputModes;
}

@property (nonatomic, readonly) TIInputMode *primaryInputMode;
@property (retain, nonatomic) NSArray *activeInputModes;

- (void)dealloc;
- (id)initWithActiveInputModes:(id)arg1;
- (void)updateEmojiLocale;
- (void)updateEmojiAdornmentGenerators;
- (id)createAndAddEmojiTokensFrom:(struct __CFArray *)arg1 inArray:(id)arg2 forInputString:(id)arg3;
- (id)enumerateForEmojiCandidatesIn:(id)arg1 forEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg2 asReplacementCandidate:(_Bool)arg3;
- (id)randomShuffle:(id)arg1;
- (id)extractTokensForEmojiComputation:(id)arg1;
- (id)getSkinToneSensitiveEmojis:(id)arg1;
- (id)skinToneModifiedAdornmentEmojis:(id)arg1 forLocale:(struct __EmojiLocaleDataWrapper *)arg2 forInput:(id)arg3;
- (id)emojiAppendCandidates:(id)arg1;
- (id)emojiAdornmentCandidates:(id)arg1;
- (id)generateEmojiAdornmentCandidates:(id)arg1;
- (void)updateForActiveInputModes:(id)arg1;
- (void)updateEmojiStatusForKeyboardState:(id)arg1;
- (id)emojiReplacementCandidates:(id)arg1;
- (id)emojiReplacementCandidatesForKeyboardState:(id)arg1;
- (id)emojiReplacementCandidatesForText:(id)arg1;
- (id)emojiAdornmentCandidatesForKeyboardState:(id)arg1;
- (void)logEmojiUsageFromCandidateBar:(id)arg1;

@end
