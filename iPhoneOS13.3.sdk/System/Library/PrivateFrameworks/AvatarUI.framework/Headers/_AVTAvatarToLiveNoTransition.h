//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTTransition.h>

@protocol AVTAvatarTransitionModel;

@interface _AVTAvatarToLiveNoTransition : AVTTransition
{
    id <AVTAvatarTransitionModel> _avatarTransitionModel;
}

@property(readonly, nonatomic) id <AVTAvatarTransitionModel> avatarTransitionModel; // @synthesize avatarTransitionModel=_avatarTransitionModel;
// - (void).cxx_destruct;
- (void)_startTransition;
- (id)model;
- (id)initWithModel:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3 logger:(id)arg4;

@end

