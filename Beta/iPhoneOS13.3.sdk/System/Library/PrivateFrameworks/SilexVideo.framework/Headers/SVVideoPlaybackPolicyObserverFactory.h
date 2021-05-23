/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoPlaybackPolicy;

@interface SVVideoPlaybackPolicyObserverFactory : NSObject

{
    NSObject<SVVideoPlaybackPolicy> *_playbackPolicy;
}

@property (nonatomic, readonly) NSObject<SVVideoPlaybackPolicy> *playbackPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPlaybackPolicy:(id)arg1;
- (id)createPlaybackPolicyObserver;

@end
