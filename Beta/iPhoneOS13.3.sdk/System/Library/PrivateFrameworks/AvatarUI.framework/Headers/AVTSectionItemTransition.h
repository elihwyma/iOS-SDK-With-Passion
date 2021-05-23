/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/AVTTransition.h>

@protocol AVTSectionItemTransitionModel;

@interface AVTSectionItemTransition : AVTTransition

{
    id <AVTSectionItemTransitionModel> _sectionItemTransitionModel;
}

@property (nonatomic, readonly) id <AVTSectionItemTransitionModel> sectionItemTransitionModel;

- (id)model;
- (id)initWithModel:(id)arg1 animated:(_Bool)arg2 setupHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 logger:(id)arg5;
- (void)performTransition;

@end
