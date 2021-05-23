/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class EMFEmojiPreferencesClient, NSArray, NSDictionary;

@protocol OS_dispatch_queue;

@interface UIKeyboardEmojiPreferences : NSObject

{
    EMFEmojiPreferencesClient *_preferencesClient;
    NSObject<OS_dispatch_queue> *_clientDispatchQueue;
    NSArray *_localRecentsWithClient;
    NSArray *_localRecentsWithoutClient;
}

@property (nonatomic, readonly) EMFEmojiPreferencesClient *preferencesClient;
@property (nonatomic) unsigned long long maximumRecentsCount;
@property (retain, nonatomic) NSArray *recents;
@property (retain, nonatomic) NSDictionary *skinToneBaseKeyPreferences;
@property (nonatomic) long long selectedCategoryType;
@property (nonatomic, readonly) _Bool hasDisplayedSkinToneHelp;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (long long)emojiCategoryDefaultsIndex:(id)arg1;
- (void)clearEmojiKeyboardPreferenceClient;
- (void)didDisplaySkinToneHelp;
- (_Bool)hasLastUsedVariantForEmojiString:(id)arg1;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;
- (void)emojiUsed:(id)arg1 language:(id)arg2;
- (id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long *)arg2;
- (id)emojiWithoutDuplicateRecents:(id)arg1;
- (id)lastUsedVariantEmojiForEmojiString:(id)arg1;
- (void)writeEmojiDefaults;
- (void)refreshLocalRecents;
- (void)setEmojiCategoryDefaultsIndex:(long long)arg1 forCategory:(id)arg2;
- (void)emojiUsed:(id)arg1;
- (void)readEmojiDefaults;
- (void)handleSuspend:(id)arg1;
- (void)handleWrite:(id)arg1;
- (void)handleRead:(id)arg1;
- (void)clearLocalRecentsCache;
- (void)_usageForEmoji:(id)arg1 language:(id)arg2 mode:(id)arg3 typingName:(id)arg4;
- (void)emojiPredicted:(id)arg1 typingName:(id)arg2 language:(id)arg3;
- (id)typingNameForEmoji:(id)arg1 language:(id)arg2;

@end
