/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSelectionExtraView : UIView

{
    double m_pointerOffset;
    unsigned long long _roundedCorners;
    UIKeyboardMenuView *_menu;
    struct CGRect _keyRect;
}

@property (nonatomic) double pointerOffset;
@property (nonatomic) struct CGRect keyRect;
@property (nonatomic) unsigned long long roundedCorners;
@property (nonatomic) UIKeyboardMenuView *menu;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
