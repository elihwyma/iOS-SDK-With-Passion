/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@class AVTView;

@protocol AVTDisplayingCarouselControllerDelegate;

@protocol AVTDisplayingCarouselController <Swift>

@property (weak, nonatomic) id <AVTDisplayingCarouselControllerDelegate> displayingDelegate;
@property (nonatomic, readonly) AVTView *focusedDisplayView;

@end
