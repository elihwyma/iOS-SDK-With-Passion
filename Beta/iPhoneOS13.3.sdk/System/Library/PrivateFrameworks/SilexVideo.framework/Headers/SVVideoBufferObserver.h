/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVKeyValueObserver;

@protocol SVPlayerItemObserving;

@interface SVVideoBufferObserver : NSObject

{
    _Bool _playbackBufferFull;
    _Bool _playbackLikelyToKeepUp;
    CDUnknownBlockType _changeBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    SVKeyValueObserver *_playbackBufferFullObserver;
    SVKeyValueObserver *_playbackLikelyToKeepUpObserver;
}

@property (nonatomic, getter=isPlaybackBufferFull) _Bool playbackBufferFull;
@property (nonatomic, getter=isPlaybackLikelyToKeepUp) _Bool playbackLikelyToKeepUp;
@property (nonatomic, readonly) id <SVPlayerItemObserving> playerItemObserver;
@property (nonatomic, readonly) SVKeyValueObserver *playbackBufferFullObserver;
@property (nonatomic, readonly) SVKeyValueObserver *playbackLikelyToKeepUpObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

- (id)initWithPlayerItemObserver:(id)arg1;

@end
