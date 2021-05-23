/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIToolbarButton.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface UIToolbarTextButton : UIToolbarButton

{
    NSString *_title;
    NSString *_pressedTitle;
    NSSet *_possibleTitles;
}

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setPressed:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 pressedTitle:(id)arg2 withFont:(id)arg3 withBarStyle:(long long)arg4 withStyle:(long long)arg5 withTitleWidth:(double)arg6 possibleTitles:(id)arg7 withToolbarTintColor:(id)arg8;

@end
