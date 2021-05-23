/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlayerItemObserving, SVPlayerTimeControlStatusObserving;

@interface SVVideoPlaybackPositionObserver : NSObject

{
    unsigned long long _position;
    CDUnknownBlockType _changeBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    id <SVPlayerTimeControlStatusObserving> _timeControlStatusObserver;
}

@property (nonatomic, readonly) id <SVPlayerItemObserving> playerItemObserver;
@property (nonatomic, readonly) id <SVPlayerTimeControlStatusObserving> timeControlStatusObserver;
@property (nonatomic) unsigned long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

- (void)playerItemPlayedToEnd:(id)arg1;
- (id)initWithPlayerItemObserver:(id)arg1 timeControlStatusObserver:(id)arg2;

@end
