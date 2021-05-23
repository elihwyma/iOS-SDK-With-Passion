/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerItemLoaderProviding, SVPlayerProviding;

@interface SVPlaybackCoordinatorFactory : NSObject

{
    id <SVPlayerProviding> _playerProvider;
    id <SVPlayerItemLoaderProviding> _playerItemLoaderProvider;
}

@property (nonatomic, readonly) id <SVPlayerProviding> playerProvider;
@property (nonatomic, readonly) id <SVPlayerItemLoaderProviding> playerItemLoaderProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createPlaybackCoordinatorForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 playerItemLoaderProvider:(id)arg2;

@end
