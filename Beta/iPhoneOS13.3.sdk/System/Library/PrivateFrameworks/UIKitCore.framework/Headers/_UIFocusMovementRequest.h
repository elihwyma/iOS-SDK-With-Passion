/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIFocusAnimationCoordinator, UIFocusSystem, UIWindow, _UIFocusInputDeviceInfo, _UIFocusItemInfo, _UIFocusMovementInfo, _UIFocusSearchInfo;

__attribute__((visibility("hidden")))
@interface _UIFocusMovementRequest : NSObject

{
    _Bool _shouldPerformHapticFeedback;
    UIFocusSystem *_focusSystem;
    _UIFocusInputDeviceInfo *_inputDeviceInfo;
    UIWindow *_window;
    _UIFocusItemInfo *_focusedItemInfo;
    _UIFocusMovementInfo *_movementInfo;
    _UIFocusSearchInfo *_searchInfo;
}

@property (weak, nonatomic, readonly) UIWindow *window;
@property (retain, nonatomic) _UIFocusItemInfo *focusedItemInfo;
@property (retain, nonatomic) _UIFocusMovementInfo *movementInfo;
@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo;
@property (retain, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (nonatomic, readonly) _UIFocusMovementRequest *fallbackRequest;
@property (nonatomic) _Bool shouldPerformHapticFeedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, readonly) _Bool shouldPlayFocusSound;
@property (nonatomic, readonly) _Bool requiresNextFocusedItem;
@property (nonatomic, readonly) _Bool requiresEnvironmentValidation;
@property (nonatomic, readonly) _Bool allowsFocusingCurrentItem;
@property (nonatomic, readonly) _Bool allowsDeferral;
@property (nonatomic, readonly) _Bool allowsFocusRestoration;
@property (nonatomic, readonly) UIFocusAnimationCoordinator *animationCoordinator;

- (id)init;
- (id)initWithFocusSystem:(id)arg1 window:(id)arg2;
- (id)_requestByRedirectingRequestToFocusSystem:(id)arg1;

@end
