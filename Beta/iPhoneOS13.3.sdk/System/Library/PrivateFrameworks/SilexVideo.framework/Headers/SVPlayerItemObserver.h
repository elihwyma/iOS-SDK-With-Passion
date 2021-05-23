/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class AVPlayer, AVPlayerItem, NSString, SVKeyValueObserver;

@interface SVPlayerItemObserver : NSObject

{
    CDUnknownBlockType _changeBlock;
    AVPlayerItem *_item;
    AVPlayer *_player;
    SVKeyValueObserver *_observer;
}

@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, readonly) SVKeyValueObserver *observer;
@property (weak, nonatomic) AVPlayerItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

- (id)initWithPlayer:(id)arg1;

@end
