/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIKeyboardDockItem;

@protocol UIKeyboardDockViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardDockView : UIView

{
    id <UIKeyboardDockViewDelegate> _delegate;
    UIKeyboardDockItem *_leftDockItem;
    UIKeyboardDockItem *_rightDockItem;
    UIKeyboardDockItem *_centerDockItem;
}

@property (weak, nonatomic) id <UIKeyboardDockViewDelegate> delegate;
@property (retain, nonatomic) UIKeyboardDockItem *leftDockItem;
@property (retain, nonatomic) UIKeyboardDockItem *rightDockItem;
@property (retain, nonatomic) UIKeyboardDockItem *centerDockItem;

+ (id)dockViewHomeGestureExclusionZones;
+ (long long)_currentInterfaceOrientation;
+ (CDStruct_b7523c42)_itemFramesForBoundingSize:(struct CGSize)arg1;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_keyboardLongPressInteractionRegions;
- (void)_didReceiveHandBiasChangeNotification:(id)arg1;
- (id)_dockItemWithButton:(id)arg1;
- (void)_dockItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (void)_configureDockItem:(id)arg1;
- (id)_keyboardLayoutView;

@end
