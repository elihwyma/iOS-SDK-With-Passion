/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIconImageView.h>

@interface SBLiveIconImageView : SBIconImageView

- (void)prepareForReuse;
- (id)snapshot;
- (void)setPaused:(_Bool)arg1;
- (void)setIcon:(id)arg1 location:(id)arg2 animated:(_Bool)arg3;
- (void)updateUnanimated;
- (void)updateAnimatingState;
- (void)updateImageAnimated:(_Bool)arg1;
- (_Bool)isAnimationAllowed;

@end
