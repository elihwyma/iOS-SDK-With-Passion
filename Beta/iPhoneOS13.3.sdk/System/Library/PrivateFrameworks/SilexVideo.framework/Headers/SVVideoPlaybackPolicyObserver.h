/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVKeyValueObserver;

@protocol SVVideoPlaybackPolicy;

@interface SVVideoPlaybackPolicyObserver : NSObject

{
    CDUnknownBlockType requestStateChangeBlock;
    CDUnknownBlockType allowedStateChangeBlock;
    id <SVVideoPlaybackPolicy> _policy;
    SVKeyValueObserver *_playbackAllowedObserver;
    SVKeyValueObserver *_playbackRequestedObserver;
}

@property (nonatomic, readonly) SVKeyValueObserver *playbackAllowedObserver;
@property (nonatomic, readonly) SVKeyValueObserver *playbackRequestedObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onRequestStateChange:) CDUnknownBlockType requestStateChangeBlock;
@property (copy, nonatomic, setter=onAllowedStateChange:) CDUnknownBlockType allowedStateChangeBlock;
@property (nonatomic, readonly) id <SVVideoPlaybackPolicy> policy;

- (id)initWithPlaybackPolicy:(id)arg1;
- (void)playbackAllowedStateChanged;
- (void)playbackRequestedStateChanged;

@end
