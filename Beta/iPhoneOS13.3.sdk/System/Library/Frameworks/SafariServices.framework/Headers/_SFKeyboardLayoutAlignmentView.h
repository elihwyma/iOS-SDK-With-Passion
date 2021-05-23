/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSNotification;

__attribute__((visibility("hidden")))
@interface _SFKeyboardLayoutAlignmentView : UIView

{
    NSNotification *_keyboardChangeNotificationForUpdateConstraints;
    struct CGRect lastKnownKeyboardRect;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
    NSLayoutConstraint *disambiguatingLeftConstraint;
    _Bool _automaticKeyboardFrameTrackingDisabled;
}

@property (nonatomic) _Bool automaticKeyboardFrameTrackingDisabled;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_keyboardChanged:(id)arg1;
- (void)_stopObservingKeyboardNotifications;
- (void)_startObservingKeyboardNotificationsForScreen:(id)arg1;
- (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect)arg1;
- (void)_updateConstraintsForKeyboardNotification:(id)arg1;
- (void)_removeConstraints;
- (void)_matchInitialKeyboardFrame;
- (void)_addConstraints;

@end
