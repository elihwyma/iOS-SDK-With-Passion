/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

#import <AVKit/Swift-Protocol.h>

@class AVMusicAppBehaviorContext, NSString;

@interface AVMusicAppBehavior : NSObject <Swift>

{
    AVMusicAppBehaviorContext *_behaviorContext;
}

@property (weak, nonatomic) AVMusicAppBehaviorContext *behaviorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)behaviorContextClass;

- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)willMoveToContext:(id)arg1;
- (void)didMoveToContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;
- (void)didRemoveFromContext:(id)arg1;
- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)contextWillHandleUserAction:(long long)arg1;

@end
