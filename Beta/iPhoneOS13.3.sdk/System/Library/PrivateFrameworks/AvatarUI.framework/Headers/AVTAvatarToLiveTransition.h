/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/AVTTransition.h>

@protocol AVTAvatarTransitionModel;

@interface AVTAvatarToLiveTransition : AVTTransition

{
    id <AVTAvatarTransitionModel> _avatarTransitionModel;
}

@property (nonatomic, readonly) id <AVTAvatarTransitionModel> avatarTransitionModel;

- (id)model;
- (id)initWithModel:(id)arg1 animated:(_Bool)arg2 setupHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 logger:(id)arg5;
- (void)performTransition;

@end
