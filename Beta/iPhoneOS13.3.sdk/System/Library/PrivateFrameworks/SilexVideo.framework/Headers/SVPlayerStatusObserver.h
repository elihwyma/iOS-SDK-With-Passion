/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, SVKeyValueObserver, SVPlayer;

@interface SVPlayerStatusObserver : NSObject

{
    CDUnknownBlockType changeBlock;
    NSError *_error;
    SVPlayer *_player;
    SVKeyValueObserver *_statusObserver;
    long long _status;
}

@property (nonatomic, readonly) SVPlayer *player;
@property (nonatomic, readonly) SVKeyValueObserver *statusObserver;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;
@property (copy, nonatomic, readonly) NSError *error;

- (id)initWithPlayer:(id)arg1;

@end
