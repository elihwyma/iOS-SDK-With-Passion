/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWindow.h>

@interface UIApplicationRotationFollowingWindow : UIWindow

{
    _Bool _limitToWindowLevel;
    long long _priorityLevel;
}

@property (nonatomic) long long priorityLevel;
@property (nonatomic) _Bool limitToWindowLevel;

+ (_Bool)_isSystemWindow;

- (id)init;
- (id)initWithWindowScene:(id)arg1;
- (_Bool)_shouldControlAutorotation;
- (_Bool)isInterfaceAutorotationDisabled;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)applicationWindowRotated:(id)arg1;
- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;
- (id)_topMostWindow;
- (void)_commonApplicationRotationFollowingWindowInit;
- (id)_initWithFrame:(struct CGRect)arg1 attached:(_Bool)arg2;
- (void)_handleStatusBarOrientationChange:(id)arg1;

@end
