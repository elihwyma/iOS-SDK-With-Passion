/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIKeyboardTextSelectionGestureController.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController

{
    _Bool _delayForceMagnify;
    _Bool _didLongForcePress;
}

@property (nonatomic) _Bool delayForceMagnify;
@property (nonatomic) _Bool didLongForcePress;

+ (id)sharedInstance;

- (_Bool)oneFingerForcePressShouldFailWithoutForce;
- (_Bool)oneFingerForcePressShouldCancelTouchesInView;
- (double)oneFingerForcePressMinimumDuration;
- (void)_cleanupDeadGesturesIfNecessary;
- (Class)textInteractionClass;
- (_Bool)allowOneFingerDeepPress;

@end
