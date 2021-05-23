/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIView;

@interface UIMenuController : NSObject

{
    struct CGRect _targetRect;
    UIView *_targetView;
    long long _arrowDirection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isMenuVisible) _Bool menuVisible;
@property (nonatomic) long long arrowDirection;
@property (copy, nonatomic) NSArray *menuItems;
@property (nonatomic, readonly) struct CGRect menuFrame;

+ (id)sharedMenuController;

- (id)init;
- (void)dealloc;
- (void)update;
- (void)showMenuFromView:(id)arg1 rect:(struct CGRect)arg2;
- (id)_targetView;
- (struct CGRect)_targetRect;
- (void)calloutBar:(id)arg1 willStartAnimation:(id)arg2;
- (void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2;
- (void)setMenuVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_updateAnimated:(_Bool)arg1 checkVisible:(_Bool)arg2;
- (void)_reparentCalloutBarIfNeeded;
- (void)_windowWillRotate:(id)arg1;
- (void)_removeWindowWillRotateObserver;
- (_Bool)_menuHidden;
- (void)_showMenuAnimated:(_Bool)arg1;
- (void)_hideMenuAnimated:(_Bool)arg1;
- (void)hideMenu;
- (void)hideMenuFromView:(id)arg1;
- (void)setTargetRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_setTargetRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;

@end
