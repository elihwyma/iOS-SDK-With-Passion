/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIButton.h>

@class UIVisualEffectView;

@interface SBSUIWallpaperButton : UIButton

{
    UIVisualEffectView *_effectView;
}

- (id)init;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;

@end
