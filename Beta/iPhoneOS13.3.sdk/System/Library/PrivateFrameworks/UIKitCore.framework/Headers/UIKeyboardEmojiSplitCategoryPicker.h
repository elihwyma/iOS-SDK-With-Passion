/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardEmojiSplit.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit

{
    _Bool _whiteText;
    unsigned long long _currentSelected;
    long long _lastUsedCategory;
}

@property _Bool whiteText;

- (void)dealloc;
- (void)didMoveToWindow;
- (void)setRenderConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateToCategory:(long long)arg1;
- (void)updateCategorySelectedIndicator:(long long)arg1;
- (id)titleForRow:(long long)arg1 fallback:(_Bool)arg2;
- (id)symbolForRow:(long long)arg1;

@end
