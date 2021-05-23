/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class SVPlayer;

@protocol SVPlayerItemLoading;

@interface SVPlaybackCoordinator : NSObject

{
    SVPlayer *_player;
    id <SVPlayerItemLoading> _playerItemLoader;
}

@property (nonatomic, readonly) SVPlayer *player;
@property (nonatomic, readonly) id <SVPlayerItemLoading> playerItemLoader;

- (void)load;
- (void)pause;
- (void)play;
- (id)initWithPlayer:(id)arg1 playerItemLoader:(id)arg2;
- (void)loadVideoIfNeeded;

@end
