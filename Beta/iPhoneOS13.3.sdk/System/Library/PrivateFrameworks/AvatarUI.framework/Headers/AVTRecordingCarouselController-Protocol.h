/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@class AVTRecordView;

@protocol AVTRecordingCarouselControllerDelegate;

@protocol AVTRecordingCarouselController <Swift>

@property (weak, nonatomic) id <AVTRecordingCarouselControllerDelegate> recordingDelegate;
@property (nonatomic, readonly) AVTRecordView *focusedRecordingView;

@end
