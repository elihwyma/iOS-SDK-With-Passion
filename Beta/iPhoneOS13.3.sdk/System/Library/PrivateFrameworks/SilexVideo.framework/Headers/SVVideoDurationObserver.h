/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVKeyValueObserver;

@protocol SVPlayerItemObserving;

@interface SVVideoDurationObserver : NSObject

{
    CDUnknownBlockType changeBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    SVKeyValueObserver *_playerItemDurationObserver;
    double _duration;
}

@property (nonatomic, readonly) id <SVPlayerItemObserving> playerItemObserver;
@property (retain, nonatomic) SVKeyValueObserver *playerItemDurationObserver;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

- (id)initWithPlayerItemObserver:(id)arg1;
- (void)updateDuration:(CDStruct_198678f7)arg1;

@end
