/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardMenuView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView

{
    struct CGSize m_preferredSize;
    NSArray *_items;
    CDUnknownBlockType _finishSplitTransitionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock;

+ (id)sharedInstance;
+ (id)activeInstance;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)preferredSize;
- (unsigned long long)numberOfItems;
- (unsigned long long)defaultSelectedIndex;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)didFinishSplitTransition;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;
- (int)visibleItemForIndex:(unsigned long long)arg1;
- (void)actionForItem:(id)arg1;
- (void)setSplitAndUndocked:(_Bool)arg1;

@end
