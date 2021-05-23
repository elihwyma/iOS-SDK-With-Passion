/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIImage;

@interface GKRoundButton

@property (retain, nonatomic) UIImage *backgroundImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)_highlightBounds;

@end
