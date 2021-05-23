/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVPlayer;

@interface SVVideoPlaybackSeeker : NSObject

{
    SVPlayer *_player;
}

@property (nonatomic, readonly) SVPlayer *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPlayer:(id)arg1;
- (void)seekToStart;

@end
