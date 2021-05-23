/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVVideoPlaybackManager;

@interface SVVideoPlaybackController : NSObject

{
    SVVideoPlaybackManager *_playbackManager;
}

@property (weak, nonatomic, readonly) SVVideoPlaybackManager *playbackManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)pause;
- (void)play;
- (id)initWithPlaybackManager:(id)arg1;

@end
