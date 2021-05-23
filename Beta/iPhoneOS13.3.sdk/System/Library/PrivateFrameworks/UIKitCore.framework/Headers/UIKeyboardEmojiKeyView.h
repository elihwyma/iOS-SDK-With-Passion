/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBKeyView.h>

@class NSString, UIKeyboardEmojiKeyDisplayController;

@protocol UIKeyboardEmojiCategoryUpdateDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiKeyView : UIKBKeyView

{
    UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager;
}

@property (nonatomic) UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateToCategory:(long long)arg1;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;

@end
