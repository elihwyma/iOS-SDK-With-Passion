/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NFStateMachine, NSError, NSString, SVKeyValueObserver;

@protocol SVPlayerItemLoading;

@interface SVVideoLoadingStateObserver : NSObject

{
    unsigned long long _state;
    CDUnknownBlockType _finishedBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _startBlock;
    NSError *_error;
    id <SVPlayerItemLoading> _playerItemLoader;
    NFStateMachine *_stateMachine;
    SVKeyValueObserver *_playerItemStatusObserver;
}

@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSError *error;
@property (nonatomic, readonly) id <SVPlayerItemLoading> playerItemLoader;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (retain, nonatomic) SVKeyValueObserver *playerItemStatusObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onStart:) CDUnknownBlockType startBlock;
@property (copy, nonatomic, setter=onFinished:) CDUnknownBlockType finishedBlock;
@property (copy, nonatomic, setter=onFailed:) CDUnknownBlockType failedBlock;

- (void)configureStateWithPlayerItem:(id)arg1;
- (id)initWithPlayerItemLoader:(id)arg1;

@end
