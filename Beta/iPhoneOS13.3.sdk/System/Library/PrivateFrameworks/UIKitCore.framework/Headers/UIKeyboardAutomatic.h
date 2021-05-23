/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboard.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard

{
    _Bool showsCandidateBar;
    _Bool showsCandidateInline;
    _Bool receivedCandidatesInCurrentInputMode;
    _Bool caretBlinks;
}

@property (nonatomic) _Bool showsCandidateBar;
@property (nonatomic) _Bool receivedCandidatesInCurrentInputMode;
@property (nonatomic) _Bool showsCandidateInline;
@property (nonatomic) _Bool caretBlinks;

+ (id)sharedInstance;
+ (id)activeInstance;

- (void)dealloc;
- (_Bool)isActive;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)activate;
- (void)willResume:(id)arg1;
- (void)minimize;
- (void)maximize;
- (void)didSuspend:(id)arg1;
- (_Bool)isAutomatic;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(_Bool)arg2;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(_Bool)arg2;
- (_Bool)_isAutomaticKeyboard;
- (struct UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1;

@end
