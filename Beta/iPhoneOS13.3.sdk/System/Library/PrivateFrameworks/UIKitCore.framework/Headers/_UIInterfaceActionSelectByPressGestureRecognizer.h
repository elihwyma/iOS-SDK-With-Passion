/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITapGestureRecognizer.h>

@class UIInterfaceAction, UIInterfaceActionGroupView;

@protocol UIFocusedInterfaceActionPressDelegate;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSelectByPressGestureRecognizer : UITapGestureRecognizer

{
    id <UIFocusedInterfaceActionPressDelegate> _pressDelegate;
    UIInterfaceActionGroupView *_actionGroupView;
    UIInterfaceAction *_interfaceActionOnPressBegan;
}

@property (weak, nonatomic) UIInterfaceAction *interfaceActionOnPressBegan;
@property (weak, nonatomic) id <UIFocusedInterfaceActionPressDelegate> pressDelegate;
@property (weak, nonatomic) UIInterfaceActionGroupView *actionGroupView;

- (void)reset;
- (id)initWithFocusedInterfaceActionPressDelegate:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_gestureChanged:(id)arg1;

@end
