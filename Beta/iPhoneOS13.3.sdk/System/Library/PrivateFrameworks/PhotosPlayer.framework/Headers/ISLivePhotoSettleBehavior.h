/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISBehavior.h>

@protocol ISLivePhotoSettleBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoSettleBehavior : ISBehavior

@property (weak, nonatomic) id <ISLivePhotoSettleBehaviorDelegate> delegate;

- (void)_didFinish;
- (long long)behaviorType;
- (void)settle:(_Bool)arg1;

@end
