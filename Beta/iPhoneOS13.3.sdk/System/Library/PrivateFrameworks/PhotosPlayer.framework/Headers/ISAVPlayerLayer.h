/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <AVFoundation/AVPlayerLayer.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface ISAVPlayerLayer : AVPlayerLayer

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    CDUnknownBlockType _readyForDisplayChangeHandler;
}

@property (copy, nonatomic) CDUnknownBlockType readyForDisplayChangeHandler;

- (id)init;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setPlayer:(id)arg1;
- (void)setWrappedPlayer:(id)arg1;
- (void)deferredDealloc;

@end
