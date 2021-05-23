/*
 Image: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
 */

#import <UIKit/UIAlertView.h>

@class UIView;

@interface GKAlertView : UIAlertView

{
    UIView *_clipView;
    UIView *_contentView;
}

+ (void)initialize;
+ (struct CGSize)preferredContentViewSize;

- (void)dealloc;
- (id)contentView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (_Bool)_canDrawContent;
- (id)initAlertView;
- (void)layoutAnimated:(_Bool)arg1;
- (void)_changePanelOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_changePanelInAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_replaceContentView:(id)arg1 animated:(_Bool)arg2;
- (void)layoutAnimated:(_Bool)arg1 withDuration:(double)arg2;
- (void)setContentView:(id)arg1 animated:(_Bool)arg2;

@end
