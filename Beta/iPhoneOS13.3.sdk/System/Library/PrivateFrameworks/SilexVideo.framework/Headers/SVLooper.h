/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class AVPlayer, SVVideoDurationObserver;

@interface SVLooper : NSObject

{
    AVPlayer *_player;
    SVVideoDurationObserver *_durationObserver;
}

@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, readonly) SVVideoDurationObserver *durationObserver;

- (id)initWithPlayer:(id)arg1;

@end
