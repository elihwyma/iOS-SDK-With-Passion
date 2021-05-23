/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString;

@protocol SVVideoPlaybackController, SVVideoPlaybackPolicy, SVVisibilityMonitoring;

@interface NUVideoPlaybackAllowabilityManager : NSObject <Swift>

{
    id <SVVisibilityMonitoring> _visibilityMonitor;
    id <SVVideoPlaybackController> _playbackController;
    id <SVVideoPlaybackPolicy> _playbackPolicy;
}

@property (nonatomic, readonly) id <SVVisibilityMonitoring> visibilityMonitor;
@property (nonatomic, readonly) id <SVVideoPlaybackController> playbackController;
@property (nonatomic, readonly) id <SVVideoPlaybackPolicy> playbackPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)videoPlayerDidBecomeInvisible;
- (id)initWithPlayerVisibilityMonitor:(id)arg1 playbackController:(id)arg2 playbackPolicy:(id)arg3;

@end
