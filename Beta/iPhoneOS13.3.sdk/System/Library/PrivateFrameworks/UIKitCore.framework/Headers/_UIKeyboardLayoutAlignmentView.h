/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _UIKeyboardLayoutAlignmentView : UIView

{
    struct CGRect lastKnownKeyboardRect;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
    NSLayoutConstraint *disambiguatingLeftConstraint;
    _Bool _automaticKeyboardFrameTrackingDisabled;
}

@property (nonatomic) _Bool automaticKeyboardFrameTrackingDisabled;

+ (struct CGRect)_endFrameForNotification:(id)arg1 inView:(id)arg2;
+ (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1 inView:(id)arg2;
+ (_Bool)_shouldIgnoreFrameChangeNotification:(id)arg1 inView:(id)arg2;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_keyboardChanged:(id)arg1;
- (void)_stopObservingKeyboardNotifications;
- (void)_startObservingKeyboardNotificationsForScreen:(id)arg1;
- (_Bool)_shouldOverrideAnimationForFrameChangeNotification:(id)arg1;
- (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect)arg1;
- (void)_updateConstraintsForKeyboardNotification:(id)arg1;
- (void)_removeConstraints;
- (void)_createConstraints;
- (void)_matchInitialKeyboardFrame;

@end
