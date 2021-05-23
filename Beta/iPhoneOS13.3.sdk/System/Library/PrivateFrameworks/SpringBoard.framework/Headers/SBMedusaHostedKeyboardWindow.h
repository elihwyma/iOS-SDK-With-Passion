/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWindow.h>

@protocol UIScenePresenter;

@interface SBMedusaHostedKeyboardWindow : SBWindow

{
    id <UIScenePresenter> _remoteHostedKeyboardScenePresenter;
}

+ (_Bool)autorotates;
+ (_Bool)_isSecure;

- (void)dealloc;
- (_Bool)isActive;
- (void)setHidden:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithKeyboardScene:(id)arg1;

@end
