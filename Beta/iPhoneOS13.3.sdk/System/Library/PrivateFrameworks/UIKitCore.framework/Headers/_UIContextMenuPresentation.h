/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIClickPresentation.h>

@class UIView, UIWindow, _UIPlatterView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuPresentation : _UIClickPresentation

{
    UIView *_presentationContainer;
    UIView *_dragContainer;
    _UIPlatterView *_destinationPlatterView;
    CDUnknownBlockType _postDismissItemUpdate;
    CDUnknownBlockType _postDismissCleanUp;
    UIView *_dragAnimationPortalView;
    UIWindow *_dragAnimationWindow;
}

@property (nonatomic, readonly) UIView *presentationContainer;
@property (retain, nonatomic) UIView *dragContainer;
@property (retain, nonatomic) _UIPlatterView *destinationPlatterView;
@property (copy, nonatomic) CDUnknownBlockType postDismissItemUpdate;
@property (copy, nonatomic) CDUnknownBlockType postDismissCleanUp;
@property (retain, nonatomic) UIView *dragAnimationPortalView;
@property (retain, nonatomic) UIWindow *dragAnimationWindow;

@end
