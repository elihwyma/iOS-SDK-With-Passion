/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class AVVideoComposition;

@interface ISPlaybackSettings : NSObject

{
    float _audioVolume;
    AVVideoComposition *_videoComposition;
}

@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) float audioVolume;

- (id)init;

@end
