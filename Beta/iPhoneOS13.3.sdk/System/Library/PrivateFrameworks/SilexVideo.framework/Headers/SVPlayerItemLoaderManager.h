/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVWeakObjectCache;

@protocol SVPlayerItemLoaderFactory;

@interface SVPlayerItemLoaderManager : NSObject

{
    id <SVPlayerItemLoaderFactory> _playerItemLoaderFactory;
    SVWeakObjectCache *_playerItemLoaders;
}

@property (nonatomic, readonly) id <SVPlayerItemLoaderFactory> playerItemLoaderFactory;
@property (nonatomic, readonly) SVWeakObjectCache *playerItemLoaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)playerItemLoaderForVideo:(id)arg1;
- (id)initWithPlayerItemLoaderFactory:(id)arg1;

@end
