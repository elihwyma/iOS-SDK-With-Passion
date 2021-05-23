/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class ISPlayerState;

@protocol ISBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISBehavior : NSObject

{
    _Bool _active;
    id <ISBehaviorDelegate> _delegate;
    ISPlayerState *_initialLayoutInfo;
}

@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (weak, nonatomic) id <ISBehaviorDelegate> delegate;
@property (nonatomic, readonly) ISPlayerState *initialLayoutInfo;
@property (nonatomic, readonly) long long behaviorType;

- (void)becomeActive;
- (void)resignActive;
- (void)setVideoVolume:(float)arg1;
- (id)initWithInitialLayoutInfo:(id)arg1;
- (void)activeDidChange;
- (void)videoPlayerItemDidChange;
- (void)setOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setVideoPlayRate:(float)arg1;
- (_Bool)seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)prerollVideoAtRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setVideoForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)videoDidPlayToEnd;
- (void)videoWillPlayToPhoto;
- (void)videoWillPlayToEnd;
- (void)videoReadyForDisplayDidChange;

@end
