/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class MPMediaControls;

@interface AVExternalPlaybackController : NSObject

{
    MPMediaControls *_mediaControls;
    CDUnknownBlockType _clientCompletionHandler;
}

+ (id)externalPlaybackStateDescriptionForState:(long long)arg1;

- (void)willBeginPlaybackWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)willBeginPlaybackFromAppWithBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_invokeClientCompletionHandlerWithPlaybackState:(long long)arg1;

@end
