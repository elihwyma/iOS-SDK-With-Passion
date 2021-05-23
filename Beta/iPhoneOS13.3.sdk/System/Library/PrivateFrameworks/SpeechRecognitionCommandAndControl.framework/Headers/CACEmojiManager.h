/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class EMFEmojiLocaleData, EMFEmojiPreferences, NSString;

@interface CACEmojiManager : NSObject

{
    NSString *_localeIdentifier;
    EMFEmojiLocaleData *_emojiLocaleData;
    EMFEmojiPreferences *_emojiPreferences;
}

@property (retain, nonatomic) EMFEmojiLocaleData *emojiLocaleData;
@property (retain, nonatomic) EMFEmojiPreferences *emojiPreferences;
@property (copy, nonatomic, readonly) NSString *localeIdentifier;

+ (id)sharedManager;

- (id)initWithLocaleIdentifier:(id)arg1;
- (id)emojiStringsFromEmojiTokens:(id)arg1 skinToneFilter:(int)arg2;
- (id)emojiTokenUsingPrefixApproachForText:(id)arg1 skinToneFilter:(int)arg2;
- (_Bool)isEmoji:(id)arg1;
- (id)stringByReplacingEmojisWithDescriptions:(id)arg1;
- (id)emojisForText:(id)arg1 skinToneFilter:(int)arg2;
- (void)enumerateEmojisInText:(id)arg1 skinToneFilter:(int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)relatedEmojisForEmoji:(id)arg1 skinToneFilter:(int)arg2;
- (void)willInsertStringPotentiallyContainingEmojis:(id)arg1;

@end
