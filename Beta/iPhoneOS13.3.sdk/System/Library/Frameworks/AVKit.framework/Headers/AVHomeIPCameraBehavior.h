/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

#import <AVKit/Swift-Protocol.h>

@class AVHomeIPCameraBehaviorContext, NSString;

@interface AVHomeIPCameraBehavior : NSObject <Swift>

{
    AVHomeIPCameraBehaviorContext *_behaviorContext;
}

@property (weak, nonatomic) AVHomeIPCameraBehaviorContext *behaviorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)behaviorContextClass;

- (void)willMoveToContext:(id)arg1;
- (void)didMoveToContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;
- (void)didRemoveFromContext:(id)arg1;
- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)playbackControlsDidToggleMuted:(_Bool)arg1;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(_Bool)arg1;

@end
