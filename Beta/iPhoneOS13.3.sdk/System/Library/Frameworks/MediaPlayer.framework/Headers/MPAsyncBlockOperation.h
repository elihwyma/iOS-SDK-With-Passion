/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@interface MPAsyncBlockOperation : MPAsyncOperation

{
    CDUnknownBlockType _startHandler;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType startHandler;

- (void)execute;
- (id)initWithStartHandler:(CDUnknownBlockType)arg1;

@end
