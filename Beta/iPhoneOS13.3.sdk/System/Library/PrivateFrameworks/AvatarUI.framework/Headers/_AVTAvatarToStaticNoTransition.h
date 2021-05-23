/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/AVTTransition.h>

@protocol AVTAvatarTransitionModel;

@interface _AVTAvatarToStaticNoTransition : AVTTransition

{
    id <AVTAvatarTransitionModel> _avatarTransitionModel;
}

@property (nonatomic, readonly) id <AVTAvatarTransitionModel> avatarTransitionModel;

- (id)model;
- (id)initWithModel:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3 logger:(id)arg4;
- (void)performTransition;

@end
