/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPButton.h>

@interface MPKnockoutButton : MPButton

+ (id)easyTouchButtonWithType:(long long)arg1;

- (void)setHighlighted:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)setSelected:(_Bool)arg1;
- (_Bool)_drawingAsSelected;
- (void)_updateSelected:(_Bool)arg1 highlighted:(_Bool)arg2;
- (void)_updateForStateChangeAnimated:(_Bool)arg1;

@end
