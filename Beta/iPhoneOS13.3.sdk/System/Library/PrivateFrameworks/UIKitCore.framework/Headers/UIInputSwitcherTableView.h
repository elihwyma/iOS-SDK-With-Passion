/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableView.h>

@class UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableView : UITableView

{
    UIKeyboardMenuView *_menu;
}

@property (nonatomic) UIKeyboardMenuView *menu;

- (void)selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;

@end
