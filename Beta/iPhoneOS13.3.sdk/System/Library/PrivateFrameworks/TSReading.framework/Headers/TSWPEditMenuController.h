/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface TSWPEditMenuController : NSObject

{
    int _menuState;
    _Bool _showMenuOnKeyboard;
    _Bool _isBeginningEditing;
    UIView *_targetView;
    struct CGRect _targetRect;
}

@property (nonatomic) _Bool showMenuOnKeyboard;
@property (nonatomic) struct CGRect targetRect;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) _Bool isBeginningEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isAnimating;
+ (void)hideEditMenu;
+ (id)p_sharedEditMenuController;
+ (int)menuState;
+ (id)sharedEditMenuController;
+ (void)showEditMenuAtTargetRect:(struct CGRect)arg1 canCenterHUD:(_Bool)arg2 interactiveCanvasController:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)keyboardDidShowOrDock:(id)arg1;
- (void)keyboardDidHideOrUndock:(id)arg1;
- (void)p_setMenuVisible:(id)arg1;
- (void)p_willShowMenu:(id)arg1;
- (void)p_didShowMenu:(id)arg1;
- (void)p_willHideMenu:(id)arg1;
- (void)p_didHideMenu:(id)arg1;
- (void)p_didAnimateKeyboard;
- (void)p_clearIsBeginningEditing;

@end
