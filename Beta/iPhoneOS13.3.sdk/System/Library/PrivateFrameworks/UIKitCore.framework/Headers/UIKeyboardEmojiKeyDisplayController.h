/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIKeyboardEmojiCategory, UIKeyboardEmojiKeyView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiKeyDisplayController : NSObject

{
    UIKeyboardEmojiKeyView *_inputView;
    UIKeyboardEmojiKeyView *_categoryView;
    UIKeyboardEmojiCategory *_lastViewedCategory;
}

@property (retain, nonatomic) UIKeyboardEmojiKeyView *inputView;
@property (retain, nonatomic) UIKeyboardEmojiKeyView *categoryView;
@property UIKeyboardEmojiCategory *lastViewedCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)classForInputView;
+ (Class)classForCategoryControl;
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;

- (id)init;
- (void)dealloc;
- (void)updateEmojiKeyManagerWithKey:(id)arg1 withKeyView:(id)arg2;
- (_Bool)userHasSelectedSkinToneEmoji;
- (void)reloadForCategory:(long long)arg1 withSender:(id)arg2;
- (long long)reloadCategoryForOffsetPercentage:(double)arg1 withSender:(id)arg2;
- (_Bool)hasLastUsedVariantForEmojiString:(id)arg1;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;
- (void)emojiUsed:(id)arg1 language:(id)arg2;
- (id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long *)arg2;
- (id)emojiWithoutDuplicateRecents:(id)arg1;
- (id)lastUsedVariantEmojiForEmojiString:(id)arg1;
- (long long)lastVisibleFirstEmojiIndexforCategory:(id)arg1;
- (id)recents;
- (id)skinToneBaseKeyPreferences;
- (void)emojiUsed:(id)arg1;

@end
