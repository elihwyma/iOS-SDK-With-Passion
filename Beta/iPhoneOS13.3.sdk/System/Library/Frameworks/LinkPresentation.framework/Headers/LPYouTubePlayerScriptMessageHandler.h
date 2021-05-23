/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPYouTubePlayerView, NSString;

__attribute__((visibility("hidden")))
@interface LPYouTubePlayerScriptMessageHandler : NSObject

{
    LPYouTubePlayerView *_playerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)initWithPlayerView:(id)arg1;

@end
