/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface UIKeyboardEmojiCategory : NSObject

{
    long long _categoryType;
    NSArray *_emoji;
    long long _lastVisibleFirstEmojiIndex;
    NSString *_displaySymbol;
}

@property long long categoryType;
@property (retain) NSArray *emoji;
@property (nonatomic) long long lastVisibleFirstEmojiIndex;
@property (nonatomic, readonly, getter=name) NSString *name;
@property (readonly, getter=displaySymbol) NSString *displaySymbol;

+ (id)categoryForType:(long long)arg1;
+ (id)enabledCategoryIndexes;
+ (long long)numberOfCategories;
+ (id)categories;
+ (id)emojiCategoryStringForCategoryType:(long long)arg1;
+ (unsigned long long)hasVariantsForEmoji:(id)arg1;
+ (long long)categoryTypeForCategoryIndex:(unsigned long long)arg1;
+ (unsigned long long)categoryIndexForCategoryType:(long long)arg1;
+ (id)professionSkinToneEmojiBaseKey:(id)arg1;
+ (id)emojiRecentsFromPreferences;
+ (id)loadPrecomputedEmojiFlagCategory;
+ (long long)emojiCategoryTypeForCategoryString:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
+ (id)displayName:(long long)arg1;
+ (id)fallbackDisplayName:(long long)arg1;

- (void)dealloc;
- (void)releaseCategories;

@end
