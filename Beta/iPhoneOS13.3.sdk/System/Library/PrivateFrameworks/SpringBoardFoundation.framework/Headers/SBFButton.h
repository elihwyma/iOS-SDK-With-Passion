/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIButton.h>

@interface SBFButton : UIButton

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (_Bool)_drawingAsSelected;
- (void)_updateSelected:(_Bool)arg1 highlighted:(_Bool)arg2;
- (void)_touchUpInside;
- (void)_updateForStateChange;

@end
