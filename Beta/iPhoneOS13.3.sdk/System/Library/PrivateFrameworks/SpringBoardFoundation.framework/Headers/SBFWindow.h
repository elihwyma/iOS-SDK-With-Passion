/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIWindow.h>

@class NSNumber, _SBFKeyWindowStack;

@interface SBFWindow : UIWindow

{
    _SBFKeyWindowStack *_keyWindowStack;
    NSNumber *_isHiddenOverride;
}

@property (retain, nonatomic, setter=_setKeyWindowStack:) _SBFKeyWindowStack *_keyWindowStack;

- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (void)makeKeyWindow;
- (_Bool)_canBecomeKeyWindow;
- (void)resignAsKeyWindow;
- (_Bool)_isEffectivelyHiddenForKeyWindowStack;
- (void)_makeKeyFromKeyWindowStack;
- (void)_resignKeyFromKeyWindowStack;

@end
