/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@protocol AVTAvatarsDaemonServerDelegate;

@protocol AVTAvatarsDaemonServer

@property (weak, nonatomic) id <AVTAvatarsDaemonServerDelegate> delegate;

- (unsigned short)startListening;

@end
