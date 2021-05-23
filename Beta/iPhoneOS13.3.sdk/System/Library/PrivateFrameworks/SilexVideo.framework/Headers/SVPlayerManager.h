/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVWeakObjectCache;

@protocol SVPlayerFactory, SVVideoViewControllerProviding;

@interface SVPlayerManager : NSObject

{
    id <SVPlayerFactory> _playerFactory;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    SVWeakObjectCache *_players;
}

@property (nonatomic, readonly) id <SVPlayerFactory> playerFactory;
@property (nonatomic, readonly) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (nonatomic, readonly) SVWeakObjectCache *players;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)playerForVideo:(id)arg1;
- (void)muteStateChanged:(id)arg1;
- (id)initWithPlayerFactory:(id)arg1 videoViewControllerProvider:(id)arg2;

@end
