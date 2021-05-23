/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIWindow.h>

@class UITextView;

@interface TSWPEffectsWindow : UIWindow

{
    _Bool _readyToGo;
    unsigned int _activeEffectsCount;
    UITextView *_dummyToReclaimFirstResponder;
}

+ (id)sharedEffectsWindowAboveStatusBar;
+ (id)sharedEffectsWindowAboveStatusBarForView:(id)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (_Bool)_canAffectStatusBarAppearance;
- (void)p_updateForOrientation:(long long)arg1;
- (void)pDidChangeStatusBarOrientation:(id)arg1;

@end
