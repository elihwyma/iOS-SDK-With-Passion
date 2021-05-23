/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVKeyValueObserver, SVPlayer;

@interface SVPlayerTimeControlStatusObserver : NSObject

{
    CDUnknownBlockType changeBlock;
    SVPlayer *_player;
    SVKeyValueObserver *_timeControlStatusObserver;
    long long _timeControlStatus;
}

@property (nonatomic, readonly) SVPlayer *player;
@property (nonatomic, readonly) SVKeyValueObserver *timeControlStatusObserver;
@property (nonatomic) long long timeControlStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

- (id)initWithPlayer:(id)arg1;

@end
