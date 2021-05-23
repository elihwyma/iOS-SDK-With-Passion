/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoAdProviding, SVVideoPlaybackController;

@interface SVPrivacyStatementInteractionHandler : NSObject

{
    id <SVVideoAdProviding> _videoAdProvider;
    id <SVVideoPlaybackController> _playbackController;
}

@property (nonatomic, readonly) id <SVVideoAdProviding> videoAdProvider;
@property (nonatomic, readonly) id <SVVideoPlaybackController> playbackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleInteractionWithContext:(id)arg1;
- (id)initWithVideoAdProvider:(id)arg1 playbackController:(id)arg2;

@end
