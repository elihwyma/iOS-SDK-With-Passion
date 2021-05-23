/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTAvatarTransitionModel <Swift>

- (unsigned short)transitionStaticViewToFront;
- (unsigned short)liveView;
- (unsigned short)transitionLiveViewToFront;
- (unsigned short)applyFullAlpha;
- (unsigned short)applyBaseAlpha;

@end
